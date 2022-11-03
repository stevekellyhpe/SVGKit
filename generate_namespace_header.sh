# This script is a modified version of this: https://github.com/jverkoey/nimbus/blob/master/scripts/generate_namespace_header

header=$SRCROOT/NamespacedDependencies.h
prefix="MR"
binary_path=$TARGET_BUILD_DIR/$EXECUTABLE_PATH

echo "Generating $header from $binary_path..."

echo "// Namespaced Header

#ifndef __NS_SYMBOL
// We need to have multiple levels of macros here so that __NAMESPACE_PREFIX_ is
// properly replaced by the time we concatenate the namespace prefix.
#define __NS_REWRITE(ns, symbol) ns ## _ ## symbol
#define __NS_BRIDGE(ns, symbol) __NS_REWRITE(ns, symbol)
#define __NS_SYMBOL(symbol) __NS_BRIDGE($prefix, symbol)
#endif

" > $header

# The following one-liner is a bit of a pain in the ass.
# Breakdown:
#
# nm $binary_path -j
# Dump all of the symbols from the compiled library. This will include all UIKit
# and Foundation symbols as well.
#
# | grep "^_OBJC_CLASS_$_"
# Filter out the interfaces.
#
# | grep -v "\$_NS"
# Remove all Foundation classes.
#
# | grep -v "\$_UI"
# Remove all UIKit classes.
#
# | grep -v "\$_CA"
# Remove all CoreGraphics classes.
#
# | sed -e 's/_OBJC_CLASS_\$_\(.*\)/#ifndef \1\'$'\n''#define \1 __NS_SYMBOL(\1)\'$'\n''#endif/g'
# I use the syntax outlined here:
# http://stackoverflow.com/questions/6761796/bash-perl-or-sed-insert-on-new-line-after-found-phrase
# to create newlines so that we can write the following on separate lines:
#
#  #ifndef ...
#  #define ...
#  #endif
#

echo "// Classes" >> $header

nm $binary_path -j | sort | uniq | grep "^_OBJC_CLASS_\$_" | grep -v "\$_AGSGT" | grep -v "\$_CL" | grep -v "__" | grep -v "\$_NS" | grep -v "\$_UI" | grep -v "\$_CA" | sed -e 's/_OBJC_CLASS_\$_\(.*\)/#ifndef \1\'$'\n''#define \1 __NS_SYMBOL(\1)\'$'\n''#endif\'$'\n''/g' >> $header

echo "// Functions" >> $header

nm $binary_path | sort | uniq | grep " T " | cut -d' ' -f3 | grep -v "\$_NS" | grep -v "\$_UI" | grep -v "__" | grep -v "\$_CA" | sed -e 's/_\(.*\)/#ifndef \1\'$'\n''#define \1 __NS_SYMBOL(\1)\'$'\n''#endif\'$'\n''/g' >> $header

echo "// Categories" >> $header

nm $binary_path | sort | uniq | grep ' t ' | grep '\[NS' | cut -d ' ' -f4 | cut -d ':' -f1 | cut -d ']' -f1 | sed -e 's/\(.*\)/#ifndef \1\'$'\n''#define \1 __NS_SYMBOL(\1)\'$'\n''#endif\'$'\n''/g' >> $header

echo "// Externs" >> $header

nm $binary_path | sort | uniq | grep " D " | cut -d' ' -f3 | grep -v "\$_NS" | grep -v "\$_UI" | grep -v "__" | grep -v "\$_CA" | grep -v "OBJC_IVAR" | sed -e 's/_\(.*\)/#ifndef \1\'$'\n''#define \1 __NS_SYMBOL(\1)\'$'\n''#endif\'$'\n''/g' >> $header

nm $binary_path | sort | uniq | grep " S " | cut -d' ' -f3 | grep -v "\$_NS" | grep -v ".eh" | grep -v "\$_UI" | grep -v "__" | grep -v "\$_CA" | grep -v "OBJC_" | grep -v "OBJC_IVAR" | sed -e 's/_\(.*\)/#ifndef \1\'$'\n''#define \1 __NS_SYMBOL(\1)\'$'\n''#endif\'$'\n''/g' >> $header

echo "// SVGKit unprefixed CoreGraphic overrides" >> $header

nm $binary_path -j | sort | uniq | grep "^_OBJC_CLASS_\$_" | grep -e "CAShapeLayerWith" -e "CALayerWith" | sed -e 's/_OBJC_CLASS_\$_\(.*\)/#ifndef \1\'$'\n''#define \1 __NS_SYMBOL(\1)\'$'\n''#endif\'$'\n''/g' >> $header
nm $binary_path | sort | uniq | grep " T " | cut -d' ' -f3 | grep -e "CAShapeLayerWith" -e "CALayerWith" | sed -e 's/_\(.*\)/#ifndef \1\'$'\n''#define \1 __NS_SYMBOL(\1)\'$'\n''#endif\'$'\n''/g' >> $header
nm $binary_path | sort | uniq | grep " D " | cut -d' ' -f3 | grep -e "CAShapeLayerWith" -e "CALayerWith" | sed -e 's/_\(.*\)/#ifndef \1\'$'\n''#define \1 __NS_SYMBOL(\1)\'$'\n''#endif\'$'\n''/g' >> $header
nm $binary_path | sort | uniq | grep " S " | cut -d' ' -f3 | grep -e "CAShapeLayerWith" -e "CALayerWith" | sed -e 's/_\(.*\)/#ifndef \1\'$'\n''#define \1 __NS_SYMBOL(\1)\'$'\n''#endif\'$'\n''/g' >> $header
