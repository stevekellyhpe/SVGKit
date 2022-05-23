// Namespaced Header

#ifndef __NS_SYMBOL
// We need to have multiple levels of macros here so that __NAMESPACE_PREFIX_ is
// properly replaced by the time we concatenate the namespace prefix.
#define __NS_REWRITE(ns, symbol) ns ## _ ## symbol
#define __NS_BRIDGE(ns, symbol) __NS_REWRITE(ns, symbol)
#define __NS_SYMBOL(symbol) __NS_BRIDGE(MR, symbol)
#endif


// Classes
#ifndef AppleSucksDOMImplementation
#define AppleSucksDOMImplementation __NS_SYMBOL(AppleSucksDOMImplementation)
#endif

#ifndef Attr
#define Attr __NS_SYMBOL(Attr)
#endif

#ifndef BaseClassForAllSVGBasicShapes
#define BaseClassForAllSVGBasicShapes __NS_SYMBOL(BaseClassForAllSVGBasicShapes)
#endif

#ifndef CDATASection
#define CDATASection __NS_SYMBOL(CDATASection)
#endif

#ifndef CSSPrimitiveValue
#define CSSPrimitiveValue __NS_SYMBOL(CSSPrimitiveValue)
#endif

#ifndef CSSRule
#define CSSRule __NS_SYMBOL(CSSRule)
#endif

#ifndef CSSRuleList
#define CSSRuleList __NS_SYMBOL(CSSRuleList)
#endif

#ifndef CSSStyleDeclaration
#define CSSStyleDeclaration __NS_SYMBOL(CSSStyleDeclaration)
#endif

#ifndef CSSStyleRule
#define CSSStyleRule __NS_SYMBOL(CSSStyleRule)
#endif

#ifndef CSSStyleSheet
#define CSSStyleSheet __NS_SYMBOL(CSSStyleSheet)
#endif

#ifndef CSSValue
#define CSSValue __NS_SYMBOL(CSSValue)
#endif

#ifndef CSSValueList
#define CSSValueList __NS_SYMBOL(CSSValueList)
#endif

#ifndef CharacterData
#define CharacterData __NS_SYMBOL(CharacterData)
#endif

#ifndef Comment
#define Comment __NS_SYMBOL(Comment)
#endif

#ifndef DOMHelperUtilities
#define DOMHelperUtilities __NS_SYMBOL(DOMHelperUtilities)
#endif

#ifndef Document
#define Document __NS_SYMBOL(Document)
#endif

#ifndef DocumentFragment
#define DocumentFragment __NS_SYMBOL(DocumentFragment)
#endif

#ifndef DocumentType
#define DocumentType __NS_SYMBOL(DocumentType)
#endif

#ifndef Element
#define Element __NS_SYMBOL(Element)
#endif

#ifndef EntityReference
#define EntityReference __NS_SYMBOL(EntityReference)
#endif

#ifndef MediaList
#define MediaList __NS_SYMBOL(MediaList)
#endif

#ifndef NamedNodeMap
#define NamedNodeMap __NS_SYMBOL(NamedNodeMap)
#endif

#ifndef Node
#define Node __NS_SYMBOL(Node)
#endif

#ifndef NodeList
#define NodeList __NS_SYMBOL(NodeList)
#endif

#ifndef ProcessingInstruction
#define ProcessingInstruction __NS_SYMBOL(ProcessingInstruction)
#endif

#ifndef SVGAngle
#define SVGAngle __NS_SYMBOL(SVGAngle)
#endif

#ifndef SVGAnimatedPreserveAspectRatio
#define SVGAnimatedPreserveAspectRatio __NS_SYMBOL(SVGAnimatedPreserveAspectRatio)
#endif

#ifndef SVGCircleElement
#define SVGCircleElement __NS_SYMBOL(SVGCircleElement)
#endif

#ifndef SVGClipPathElement
#define SVGClipPathElement __NS_SYMBOL(SVGClipPathElement)
#endif

#ifndef SVGDefsElement
#define SVGDefsElement __NS_SYMBOL(SVGDefsElement)
#endif

#ifndef SVGDescriptionElement
#define SVGDescriptionElement __NS_SYMBOL(SVGDescriptionElement)
#endif

#ifndef SVGDocument
#define SVGDocument __NS_SYMBOL(SVGDocument)
#endif

#ifndef SVGElement
#define SVGElement __NS_SYMBOL(SVGElement)
#endif

#ifndef SVGElementInstance
#define SVGElementInstance __NS_SYMBOL(SVGElementInstance)
#endif

#ifndef SVGElementInstanceList
#define SVGElementInstanceList __NS_SYMBOL(SVGElementInstanceList)
#endif

#ifndef SVGEllipseElement
#define SVGEllipseElement __NS_SYMBOL(SVGEllipseElement)
#endif

#ifndef SVGGElement
#define SVGGElement __NS_SYMBOL(SVGGElement)
#endif

#ifndef SVGGradientElement
#define SVGGradientElement __NS_SYMBOL(SVGGradientElement)
#endif

#ifndef SVGGradientLayer
#define SVGGradientLayer __NS_SYMBOL(SVGGradientLayer)
#endif

#ifndef SVGGradientStop
#define SVGGradientStop __NS_SYMBOL(SVGGradientStop)
#endif

#ifndef SVGGroupElement
#define SVGGroupElement __NS_SYMBOL(SVGGroupElement)
#endif

#ifndef SVGHelperUtilities
#define SVGHelperUtilities __NS_SYMBOL(SVGHelperUtilities)
#endif

#ifndef SVGImageElement
#define SVGImageElement __NS_SYMBOL(SVGImageElement)
#endif

#ifndef SVGKExporterNSData
#define SVGKExporterNSData __NS_SYMBOL(SVGKExporterNSData)
#endif

#ifndef SVGKExporterUIImage
#define SVGKExporterUIImage __NS_SYMBOL(SVGKExporterUIImage)
#endif

#ifndef SVGKFastImageView
#define SVGKFastImageView __NS_SYMBOL(SVGKFastImageView)
#endif

#ifndef SVGKImage
#define SVGKImage __NS_SYMBOL(SVGKImage)
#endif

#ifndef SVGKImageCacheLine
#define SVGKImageCacheLine __NS_SYMBOL(SVGKImageCacheLine)
#endif

#ifndef SVGKImageView
#define SVGKImageView __NS_SYMBOL(SVGKImageView)
#endif

#ifndef SVGKLayer
#define SVGKLayer __NS_SYMBOL(SVGKLayer)
#endif

#ifndef SVGKLayeredImageView
#define SVGKLayeredImageView __NS_SYMBOL(SVGKLayeredImageView)
#endif

#ifndef SVGKParseResult
#define SVGKParseResult __NS_SYMBOL(SVGKParseResult)
#endif

#ifndef SVGKParser
#define SVGKParser __NS_SYMBOL(SVGKParser)
#endif

#ifndef SVGKParserDOM
#define SVGKParserDOM __NS_SYMBOL(SVGKParserDOM)
#endif

#ifndef SVGKParserDefsAndUse
#define SVGKParserDefsAndUse __NS_SYMBOL(SVGKParserDefsAndUse)
#endif

#ifndef SVGKParserGradient
#define SVGKParserGradient __NS_SYMBOL(SVGKParserGradient)
#endif

#ifndef SVGKParserPatternsAndGradients
#define SVGKParserPatternsAndGradients __NS_SYMBOL(SVGKParserPatternsAndGradients)
#endif

#ifndef SVGKParserSVG
#define SVGKParserSVG __NS_SYMBOL(SVGKParserSVG)
#endif

#ifndef SVGKParserStyles
#define SVGKParserStyles __NS_SYMBOL(SVGKParserStyles)
#endif

#ifndef SVGKPattern
#define SVGKPattern __NS_SYMBOL(SVGKPattern)
#endif

#ifndef SVGKPointsAndPathsParser
#define SVGKPointsAndPathsParser __NS_SYMBOL(SVGKPointsAndPathsParser)
#endif

#ifndef SVGKSource
#define SVGKSource __NS_SYMBOL(SVGKSource)
#endif

#ifndef SVGKSourceLocalFile
#define SVGKSourceLocalFile __NS_SYMBOL(SVGKSourceLocalFile)
#endif

#ifndef SVGKSourceNSData
#define SVGKSourceNSData __NS_SYMBOL(SVGKSourceNSData)
#endif

#ifndef SVGKSourceString
#define SVGKSourceString __NS_SYMBOL(SVGKSourceString)
#endif

#ifndef SVGKSourceURL
#define SVGKSourceURL __NS_SYMBOL(SVGKSourceURL)
#endif

#ifndef SVGKit
#define SVGKit __NS_SYMBOL(SVGKit)
#endif

#ifndef SVGLength
#define SVGLength __NS_SYMBOL(SVGLength)
#endif

#ifndef SVGLineElement
#define SVGLineElement __NS_SYMBOL(SVGLineElement)
#endif

#ifndef SVGLinearGradientElement
#define SVGLinearGradientElement __NS_SYMBOL(SVGLinearGradientElement)
#endif

#ifndef SVGMatrix
#define SVGMatrix __NS_SYMBOL(SVGMatrix)
#endif

#ifndef SVGPathElement
#define SVGPathElement __NS_SYMBOL(SVGPathElement)
#endif

#ifndef SVGPoint
#define SVGPoint __NS_SYMBOL(SVGPoint)
#endif

#ifndef SVGPolygonElement
#define SVGPolygonElement __NS_SYMBOL(SVGPolygonElement)
#endif

#ifndef SVGPolylineElement
#define SVGPolylineElement __NS_SYMBOL(SVGPolylineElement)
#endif

#ifndef SVGPreserveAspectRatio
#define SVGPreserveAspectRatio __NS_SYMBOL(SVGPreserveAspectRatio)
#endif

#ifndef SVGRadialGradientElement
#define SVGRadialGradientElement __NS_SYMBOL(SVGRadialGradientElement)
#endif

#ifndef SVGRectElement
#define SVGRectElement __NS_SYMBOL(SVGRectElement)
#endif

#ifndef SVGSVGElement
#define SVGSVGElement __NS_SYMBOL(SVGSVGElement)
#endif

#ifndef SVGStyleElement
#define SVGStyleElement __NS_SYMBOL(SVGStyleElement)
#endif

#ifndef SVGSwitchElement
#define SVGSwitchElement __NS_SYMBOL(SVGSwitchElement)
#endif

#ifndef SVGTextContentElement
#define SVGTextContentElement __NS_SYMBOL(SVGTextContentElement)
#endif

#ifndef SVGTextElement
#define SVGTextElement __NS_SYMBOL(SVGTextElement)
#endif

#ifndef SVGTextLayer
#define SVGTextLayer __NS_SYMBOL(SVGTextLayer)
#endif

#ifndef SVGTextPositioningElement
#define SVGTextPositioningElement __NS_SYMBOL(SVGTextPositioningElement)
#endif

#ifndef SVGTitleElement
#define SVGTitleElement __NS_SYMBOL(SVGTitleElement)
#endif

#ifndef SVGTransform
#define SVGTransform __NS_SYMBOL(SVGTransform)
#endif

#ifndef SVGUseElement
#define SVGUseElement __NS_SYMBOL(SVGUseElement)
#endif

#ifndef StyleSheet
#define StyleSheet __NS_SYMBOL(StyleSheet)
#endif

#ifndef StyleSheetList
#define StyleSheetList __NS_SYMBOL(StyleSheetList)
#endif

#ifndef Text
#define Text __NS_SYMBOL(Text)
#endif

#ifndef TinySVGTextAreaElement
#define TinySVGTextAreaElement __NS_SYMBOL(TinySVGTextAreaElement)
#endif

// Functions
#ifndef CGColorWithSVGColor
#define CGColorWithSVGColor __NS_SYMBOL(CGColorWithSVGColor)
#endif

#ifndef CGPathCreateByOffsettingPath
#define CGPathCreateByOffsettingPath __NS_SYMBOL(CGPathCreateByOffsettingPath)
#endif

#ifndef CGPathCreateByTranslatingPath
#define CGPathCreateByTranslatingPath __NS_SYMBOL(CGPathCreateByTranslatingPath)
#endif

#ifndef CGRectFromSVGRect
#define CGRectFromSVGRect __NS_SYMBOL(CGRectFromSVGRect)
#endif

#ifndef CGSizeFromSVGRect
#define CGSizeFromSVGRect __NS_SYMBOL(CGSizeFromSVGRect)
#endif

#ifndef ColorValueWithName
#define ColorValueWithName __NS_SYMBOL(ColorValueWithName)
#endif

#ifndef NSStringFromSVGRect
#define NSStringFromSVGRect __NS_SYMBOL(NSStringFromSVGRect)
#endif

#ifndef SVGColorFromString
#define SVGColorFromString __NS_SYMBOL(SVGColorFromString)
#endif

#ifndef SVGColorMake
#define SVGColorMake __NS_SYMBOL(SVGColorMake)
#endif

#ifndef SVGHSLColorToRGB
#define SVGHSLColorToRGB __NS_SYMBOL(SVGHSLColorToRGB)
#endif

#ifndef SVGImageCGImage
#define SVGImageCGImage __NS_SYMBOL(SVGImageCGImage)
#endif

#ifndef SVGKGetBrokenImageRepresentation
#define SVGKGetBrokenImageRepresentation __NS_SYMBOL(SVGKGetBrokenImageRepresentation)
#endif

#ifndef SVGKGetBrokenImageString
#define SVGKGetBrokenImageString __NS_SYMBOL(SVGKGetBrokenImageString)
#endif

#ifndef SVGKGetDefaultContentString
#define SVGKGetDefaultContentString __NS_SYMBOL(SVGKGetDefaultContentString)
#endif

#ifndef SVGPercentageFromString
#define SVGPercentageFromString __NS_SYMBOL(SVGPercentageFromString)
#endif

#ifndef SVGRectIsInitialized
#define SVGRectIsInitialized __NS_SYMBOL(SVGRectIsInitialized)
#endif

#ifndef SVGRectMake
#define SVGRectMake __NS_SYMBOL(SVGRectMake)
#endif

#ifndef SVGRectUninitialized
#define SVGRectUninitialized __NS_SYMBOL(SVGRectUninitialized)
#endif

#ifndef applier
#define applier __NS_SYMBOL(applier)
#endif

#ifndef applyPathTranslation
#define applyPathTranslation __NS_SYMBOL(applyPathTranslation)
#endif

#ifndef createPathFromPointsInString
#define createPathFromPointsInString __NS_SYMBOL(createPathFromPointsInString)
#endif

#ifndef fixInfinity
#define fixInfinity __NS_SYMBOL(fixInfinity)
#endif

#ifndef fixPointsInfinity
#define fixPointsInfinity __NS_SYMBOL(fixPointsInfinity)
#endif

#ifndef getCurrentlyParsingParser
#define getCurrentlyParsingParser __NS_SYMBOL(getCurrentlyParsingParser)
#endif

// Categories
#ifndef SVGWhitespaceCharacterSet
#define SVGWhitespaceCharacterSet __NS_SYMBOL(SVGWhitespaceCharacterSet)
#endif

#ifndef dataWithContentsOfStream
#define dataWithContentsOfStream __NS_SYMBOL(dataWithContentsOfStream)
#endif

#ifndef SVGWhitespaceCharacterSet
#define SVGWhitespaceCharacterSet __NS_SYMBOL(SVGWhitespaceCharacterSet)
#endif

// Externs
#ifndef OBJC_CLASS_$_AppleSucksDOMImplementation
#define OBJC_CLASS_$_AppleSucksDOMImplementation __NS_SYMBOL(OBJC_CLASS_$_AppleSucksDOMImplementation)
#endif

#ifndef OBJC_CLASS_$_Attr
#define OBJC_CLASS_$_Attr __NS_SYMBOL(OBJC_CLASS_$_Attr)
#endif

#ifndef OBJC_CLASS_$_BaseClassForAllSVGBasicShapes
#define OBJC_CLASS_$_BaseClassForAllSVGBasicShapes __NS_SYMBOL(OBJC_CLASS_$_BaseClassForAllSVGBasicShapes)
#endif

#ifndef OBJC_CLASS_$_CDATASection
#define OBJC_CLASS_$_CDATASection __NS_SYMBOL(OBJC_CLASS_$_CDATASection)
#endif

#ifndef OBJC_CLASS_$_CSSPrimitiveValue
#define OBJC_CLASS_$_CSSPrimitiveValue __NS_SYMBOL(OBJC_CLASS_$_CSSPrimitiveValue)
#endif

#ifndef OBJC_CLASS_$_CSSRule
#define OBJC_CLASS_$_CSSRule __NS_SYMBOL(OBJC_CLASS_$_CSSRule)
#endif

#ifndef OBJC_CLASS_$_CSSRuleList
#define OBJC_CLASS_$_CSSRuleList __NS_SYMBOL(OBJC_CLASS_$_CSSRuleList)
#endif

#ifndef OBJC_CLASS_$_CSSStyleDeclaration
#define OBJC_CLASS_$_CSSStyleDeclaration __NS_SYMBOL(OBJC_CLASS_$_CSSStyleDeclaration)
#endif

#ifndef OBJC_CLASS_$_CSSStyleRule
#define OBJC_CLASS_$_CSSStyleRule __NS_SYMBOL(OBJC_CLASS_$_CSSStyleRule)
#endif

#ifndef OBJC_CLASS_$_CSSStyleSheet
#define OBJC_CLASS_$_CSSStyleSheet __NS_SYMBOL(OBJC_CLASS_$_CSSStyleSheet)
#endif

#ifndef OBJC_CLASS_$_CSSValue
#define OBJC_CLASS_$_CSSValue __NS_SYMBOL(OBJC_CLASS_$_CSSValue)
#endif

#ifndef OBJC_CLASS_$_CSSValueList
#define OBJC_CLASS_$_CSSValueList __NS_SYMBOL(OBJC_CLASS_$_CSSValueList)
#endif

#ifndef OBJC_CLASS_$_CharacterData
#define OBJC_CLASS_$_CharacterData __NS_SYMBOL(OBJC_CLASS_$_CharacterData)
#endif

#ifndef OBJC_CLASS_$_Comment
#define OBJC_CLASS_$_Comment __NS_SYMBOL(OBJC_CLASS_$_Comment)
#endif

#ifndef OBJC_CLASS_$_DOMHelperUtilities
#define OBJC_CLASS_$_DOMHelperUtilities __NS_SYMBOL(OBJC_CLASS_$_DOMHelperUtilities)
#endif

#ifndef OBJC_CLASS_$_Document
#define OBJC_CLASS_$_Document __NS_SYMBOL(OBJC_CLASS_$_Document)
#endif

#ifndef OBJC_CLASS_$_DocumentFragment
#define OBJC_CLASS_$_DocumentFragment __NS_SYMBOL(OBJC_CLASS_$_DocumentFragment)
#endif

#ifndef OBJC_CLASS_$_DocumentType
#define OBJC_CLASS_$_DocumentType __NS_SYMBOL(OBJC_CLASS_$_DocumentType)
#endif

#ifndef OBJC_CLASS_$_Element
#define OBJC_CLASS_$_Element __NS_SYMBOL(OBJC_CLASS_$_Element)
#endif

#ifndef OBJC_CLASS_$_EntityReference
#define OBJC_CLASS_$_EntityReference __NS_SYMBOL(OBJC_CLASS_$_EntityReference)
#endif

#ifndef OBJC_CLASS_$_MediaList
#define OBJC_CLASS_$_MediaList __NS_SYMBOL(OBJC_CLASS_$_MediaList)
#endif

#ifndef OBJC_CLASS_$_NamedNodeMap
#define OBJC_CLASS_$_NamedNodeMap __NS_SYMBOL(OBJC_CLASS_$_NamedNodeMap)
#endif

#ifndef OBJC_CLASS_$_Node
#define OBJC_CLASS_$_Node __NS_SYMBOL(OBJC_CLASS_$_Node)
#endif

#ifndef OBJC_CLASS_$_NodeList
#define OBJC_CLASS_$_NodeList __NS_SYMBOL(OBJC_CLASS_$_NodeList)
#endif

#ifndef OBJC_CLASS_$_ProcessingInstruction
#define OBJC_CLASS_$_ProcessingInstruction __NS_SYMBOL(OBJC_CLASS_$_ProcessingInstruction)
#endif

#ifndef OBJC_CLASS_$_SVGAngle
#define OBJC_CLASS_$_SVGAngle __NS_SYMBOL(OBJC_CLASS_$_SVGAngle)
#endif

#ifndef OBJC_CLASS_$_SVGAnimatedPreserveAspectRatio
#define OBJC_CLASS_$_SVGAnimatedPreserveAspectRatio __NS_SYMBOL(OBJC_CLASS_$_SVGAnimatedPreserveAspectRatio)
#endif

#ifndef OBJC_CLASS_$_SVGCircleElement
#define OBJC_CLASS_$_SVGCircleElement __NS_SYMBOL(OBJC_CLASS_$_SVGCircleElement)
#endif

#ifndef OBJC_CLASS_$_SVGClipPathElement
#define OBJC_CLASS_$_SVGClipPathElement __NS_SYMBOL(OBJC_CLASS_$_SVGClipPathElement)
#endif

#ifndef OBJC_CLASS_$_SVGDefsElement
#define OBJC_CLASS_$_SVGDefsElement __NS_SYMBOL(OBJC_CLASS_$_SVGDefsElement)
#endif

#ifndef OBJC_CLASS_$_SVGDescriptionElement
#define OBJC_CLASS_$_SVGDescriptionElement __NS_SYMBOL(OBJC_CLASS_$_SVGDescriptionElement)
#endif

#ifndef OBJC_CLASS_$_SVGDocument
#define OBJC_CLASS_$_SVGDocument __NS_SYMBOL(OBJC_CLASS_$_SVGDocument)
#endif

#ifndef OBJC_CLASS_$_SVGElement
#define OBJC_CLASS_$_SVGElement __NS_SYMBOL(OBJC_CLASS_$_SVGElement)
#endif

#ifndef OBJC_CLASS_$_SVGElementInstance
#define OBJC_CLASS_$_SVGElementInstance __NS_SYMBOL(OBJC_CLASS_$_SVGElementInstance)
#endif

#ifndef OBJC_CLASS_$_SVGElementInstanceList
#define OBJC_CLASS_$_SVGElementInstanceList __NS_SYMBOL(OBJC_CLASS_$_SVGElementInstanceList)
#endif

#ifndef OBJC_CLASS_$_SVGEllipseElement
#define OBJC_CLASS_$_SVGEllipseElement __NS_SYMBOL(OBJC_CLASS_$_SVGEllipseElement)
#endif

#ifndef OBJC_CLASS_$_SVGGElement
#define OBJC_CLASS_$_SVGGElement __NS_SYMBOL(OBJC_CLASS_$_SVGGElement)
#endif

#ifndef OBJC_CLASS_$_SVGGradientElement
#define OBJC_CLASS_$_SVGGradientElement __NS_SYMBOL(OBJC_CLASS_$_SVGGradientElement)
#endif

#ifndef OBJC_CLASS_$_SVGGradientLayer
#define OBJC_CLASS_$_SVGGradientLayer __NS_SYMBOL(OBJC_CLASS_$_SVGGradientLayer)
#endif

#ifndef OBJC_CLASS_$_SVGGradientStop
#define OBJC_CLASS_$_SVGGradientStop __NS_SYMBOL(OBJC_CLASS_$_SVGGradientStop)
#endif

#ifndef OBJC_CLASS_$_SVGGroupElement
#define OBJC_CLASS_$_SVGGroupElement __NS_SYMBOL(OBJC_CLASS_$_SVGGroupElement)
#endif

#ifndef OBJC_CLASS_$_SVGHelperUtilities
#define OBJC_CLASS_$_SVGHelperUtilities __NS_SYMBOL(OBJC_CLASS_$_SVGHelperUtilities)
#endif

#ifndef OBJC_CLASS_$_SVGImageElement
#define OBJC_CLASS_$_SVGImageElement __NS_SYMBOL(OBJC_CLASS_$_SVGImageElement)
#endif

#ifndef OBJC_CLASS_$_SVGKExporterNSData
#define OBJC_CLASS_$_SVGKExporterNSData __NS_SYMBOL(OBJC_CLASS_$_SVGKExporterNSData)
#endif

#ifndef OBJC_CLASS_$_SVGKExporterUIImage
#define OBJC_CLASS_$_SVGKExporterUIImage __NS_SYMBOL(OBJC_CLASS_$_SVGKExporterUIImage)
#endif

#ifndef OBJC_CLASS_$_SVGKFastImageView
#define OBJC_CLASS_$_SVGKFastImageView __NS_SYMBOL(OBJC_CLASS_$_SVGKFastImageView)
#endif

#ifndef OBJC_CLASS_$_SVGKImage
#define OBJC_CLASS_$_SVGKImage __NS_SYMBOL(OBJC_CLASS_$_SVGKImage)
#endif

#ifndef OBJC_CLASS_$_SVGKImageCacheLine
#define OBJC_CLASS_$_SVGKImageCacheLine __NS_SYMBOL(OBJC_CLASS_$_SVGKImageCacheLine)
#endif

#ifndef OBJC_CLASS_$_SVGKImageView
#define OBJC_CLASS_$_SVGKImageView __NS_SYMBOL(OBJC_CLASS_$_SVGKImageView)
#endif

#ifndef OBJC_CLASS_$_SVGKLayer
#define OBJC_CLASS_$_SVGKLayer __NS_SYMBOL(OBJC_CLASS_$_SVGKLayer)
#endif

#ifndef OBJC_CLASS_$_SVGKLayeredImageView
#define OBJC_CLASS_$_SVGKLayeredImageView __NS_SYMBOL(OBJC_CLASS_$_SVGKLayeredImageView)
#endif

#ifndef OBJC_CLASS_$_SVGKParseResult
#define OBJC_CLASS_$_SVGKParseResult __NS_SYMBOL(OBJC_CLASS_$_SVGKParseResult)
#endif

#ifndef OBJC_CLASS_$_SVGKParser
#define OBJC_CLASS_$_SVGKParser __NS_SYMBOL(OBJC_CLASS_$_SVGKParser)
#endif

#ifndef OBJC_CLASS_$_SVGKParserDOM
#define OBJC_CLASS_$_SVGKParserDOM __NS_SYMBOL(OBJC_CLASS_$_SVGKParserDOM)
#endif

#ifndef OBJC_CLASS_$_SVGKParserDefsAndUse
#define OBJC_CLASS_$_SVGKParserDefsAndUse __NS_SYMBOL(OBJC_CLASS_$_SVGKParserDefsAndUse)
#endif

#ifndef OBJC_CLASS_$_SVGKParserGradient
#define OBJC_CLASS_$_SVGKParserGradient __NS_SYMBOL(OBJC_CLASS_$_SVGKParserGradient)
#endif

#ifndef OBJC_CLASS_$_SVGKParserPatternsAndGradients
#define OBJC_CLASS_$_SVGKParserPatternsAndGradients __NS_SYMBOL(OBJC_CLASS_$_SVGKParserPatternsAndGradients)
#endif

#ifndef OBJC_CLASS_$_SVGKParserSVG
#define OBJC_CLASS_$_SVGKParserSVG __NS_SYMBOL(OBJC_CLASS_$_SVGKParserSVG)
#endif

#ifndef OBJC_CLASS_$_SVGKParserStyles
#define OBJC_CLASS_$_SVGKParserStyles __NS_SYMBOL(OBJC_CLASS_$_SVGKParserStyles)
#endif

#ifndef OBJC_CLASS_$_SVGKPattern
#define OBJC_CLASS_$_SVGKPattern __NS_SYMBOL(OBJC_CLASS_$_SVGKPattern)
#endif

#ifndef OBJC_CLASS_$_SVGKPointsAndPathsParser
#define OBJC_CLASS_$_SVGKPointsAndPathsParser __NS_SYMBOL(OBJC_CLASS_$_SVGKPointsAndPathsParser)
#endif

#ifndef OBJC_CLASS_$_SVGKSource
#define OBJC_CLASS_$_SVGKSource __NS_SYMBOL(OBJC_CLASS_$_SVGKSource)
#endif

#ifndef OBJC_CLASS_$_SVGKSourceLocalFile
#define OBJC_CLASS_$_SVGKSourceLocalFile __NS_SYMBOL(OBJC_CLASS_$_SVGKSourceLocalFile)
#endif

#ifndef OBJC_CLASS_$_SVGKSourceNSData
#define OBJC_CLASS_$_SVGKSourceNSData __NS_SYMBOL(OBJC_CLASS_$_SVGKSourceNSData)
#endif

#ifndef OBJC_CLASS_$_SVGKSourceString
#define OBJC_CLASS_$_SVGKSourceString __NS_SYMBOL(OBJC_CLASS_$_SVGKSourceString)
#endif

#ifndef OBJC_CLASS_$_SVGKSourceURL
#define OBJC_CLASS_$_SVGKSourceURL __NS_SYMBOL(OBJC_CLASS_$_SVGKSourceURL)
#endif

#ifndef OBJC_CLASS_$_SVGKit
#define OBJC_CLASS_$_SVGKit __NS_SYMBOL(OBJC_CLASS_$_SVGKit)
#endif

#ifndef OBJC_CLASS_$_SVGLength
#define OBJC_CLASS_$_SVGLength __NS_SYMBOL(OBJC_CLASS_$_SVGLength)
#endif

#ifndef OBJC_CLASS_$_SVGLineElement
#define OBJC_CLASS_$_SVGLineElement __NS_SYMBOL(OBJC_CLASS_$_SVGLineElement)
#endif

#ifndef OBJC_CLASS_$_SVGLinearGradientElement
#define OBJC_CLASS_$_SVGLinearGradientElement __NS_SYMBOL(OBJC_CLASS_$_SVGLinearGradientElement)
#endif

#ifndef OBJC_CLASS_$_SVGMatrix
#define OBJC_CLASS_$_SVGMatrix __NS_SYMBOL(OBJC_CLASS_$_SVGMatrix)
#endif

#ifndef OBJC_CLASS_$_SVGPathElement
#define OBJC_CLASS_$_SVGPathElement __NS_SYMBOL(OBJC_CLASS_$_SVGPathElement)
#endif

#ifndef OBJC_CLASS_$_SVGPoint
#define OBJC_CLASS_$_SVGPoint __NS_SYMBOL(OBJC_CLASS_$_SVGPoint)
#endif

#ifndef OBJC_CLASS_$_SVGPolygonElement
#define OBJC_CLASS_$_SVGPolygonElement __NS_SYMBOL(OBJC_CLASS_$_SVGPolygonElement)
#endif

#ifndef OBJC_CLASS_$_SVGPolylineElement
#define OBJC_CLASS_$_SVGPolylineElement __NS_SYMBOL(OBJC_CLASS_$_SVGPolylineElement)
#endif

#ifndef OBJC_CLASS_$_SVGPreserveAspectRatio
#define OBJC_CLASS_$_SVGPreserveAspectRatio __NS_SYMBOL(OBJC_CLASS_$_SVGPreserveAspectRatio)
#endif

#ifndef OBJC_CLASS_$_SVGRadialGradientElement
#define OBJC_CLASS_$_SVGRadialGradientElement __NS_SYMBOL(OBJC_CLASS_$_SVGRadialGradientElement)
#endif

#ifndef OBJC_CLASS_$_SVGRectElement
#define OBJC_CLASS_$_SVGRectElement __NS_SYMBOL(OBJC_CLASS_$_SVGRectElement)
#endif

#ifndef OBJC_CLASS_$_SVGSVGElement
#define OBJC_CLASS_$_SVGSVGElement __NS_SYMBOL(OBJC_CLASS_$_SVGSVGElement)
#endif

#ifndef OBJC_CLASS_$_SVGStyleElement
#define OBJC_CLASS_$_SVGStyleElement __NS_SYMBOL(OBJC_CLASS_$_SVGStyleElement)
#endif

#ifndef OBJC_CLASS_$_SVGSwitchElement
#define OBJC_CLASS_$_SVGSwitchElement __NS_SYMBOL(OBJC_CLASS_$_SVGSwitchElement)
#endif

#ifndef OBJC_CLASS_$_SVGTextContentElement
#define OBJC_CLASS_$_SVGTextContentElement __NS_SYMBOL(OBJC_CLASS_$_SVGTextContentElement)
#endif

#ifndef OBJC_CLASS_$_SVGTextElement
#define OBJC_CLASS_$_SVGTextElement __NS_SYMBOL(OBJC_CLASS_$_SVGTextElement)
#endif

#ifndef OBJC_CLASS_$_SVGTextLayer
#define OBJC_CLASS_$_SVGTextLayer __NS_SYMBOL(OBJC_CLASS_$_SVGTextLayer)
#endif

#ifndef OBJC_CLASS_$_SVGTextPositioningElement
#define OBJC_CLASS_$_SVGTextPositioningElement __NS_SYMBOL(OBJC_CLASS_$_SVGTextPositioningElement)
#endif

#ifndef OBJC_CLASS_$_SVGTitleElement
#define OBJC_CLASS_$_SVGTitleElement __NS_SYMBOL(OBJC_CLASS_$_SVGTitleElement)
#endif

#ifndef OBJC_CLASS_$_SVGTransform
#define OBJC_CLASS_$_SVGTransform __NS_SYMBOL(OBJC_CLASS_$_SVGTransform)
#endif

#ifndef OBJC_CLASS_$_SVGUseElement
#define OBJC_CLASS_$_SVGUseElement __NS_SYMBOL(OBJC_CLASS_$_SVGUseElement)
#endif

#ifndef OBJC_CLASS_$_StyleSheet
#define OBJC_CLASS_$_StyleSheet __NS_SYMBOL(OBJC_CLASS_$_StyleSheet)
#endif

#ifndef OBJC_CLASS_$_StyleSheetList
#define OBJC_CLASS_$_StyleSheetList __NS_SYMBOL(OBJC_CLASS_$_StyleSheetList)
#endif

#ifndef OBJC_CLASS_$_Text
#define OBJC_CLASS_$_Text __NS_SYMBOL(OBJC_CLASS_$_Text)
#endif

#ifndef OBJC_CLASS_$_TinySVGTextAreaElement
#define OBJC_CLASS_$_TinySVGTextAreaElement __NS_SYMBOL(OBJC_CLASS_$_TinySVGTextAreaElement)
#endif

#ifndef OBJC_METACLASS_$_AppleSucksDOMImplementation
#define OBJC_METACLASS_$_AppleSucksDOMImplementation __NS_SYMBOL(OBJC_METACLASS_$_AppleSucksDOMImplementation)
#endif

#ifndef OBJC_METACLASS_$_Attr
#define OBJC_METACLASS_$_Attr __NS_SYMBOL(OBJC_METACLASS_$_Attr)
#endif

#ifndef OBJC_METACLASS_$_BaseClassForAllSVGBasicShapes
#define OBJC_METACLASS_$_BaseClassForAllSVGBasicShapes __NS_SYMBOL(OBJC_METACLASS_$_BaseClassForAllSVGBasicShapes)
#endif

#ifndef OBJC_METACLASS_$_CDATASection
#define OBJC_METACLASS_$_CDATASection __NS_SYMBOL(OBJC_METACLASS_$_CDATASection)
#endif

#ifndef OBJC_METACLASS_$_CSSPrimitiveValue
#define OBJC_METACLASS_$_CSSPrimitiveValue __NS_SYMBOL(OBJC_METACLASS_$_CSSPrimitiveValue)
#endif

#ifndef OBJC_METACLASS_$_CSSRule
#define OBJC_METACLASS_$_CSSRule __NS_SYMBOL(OBJC_METACLASS_$_CSSRule)
#endif

#ifndef OBJC_METACLASS_$_CSSRuleList
#define OBJC_METACLASS_$_CSSRuleList __NS_SYMBOL(OBJC_METACLASS_$_CSSRuleList)
#endif

#ifndef OBJC_METACLASS_$_CSSStyleDeclaration
#define OBJC_METACLASS_$_CSSStyleDeclaration __NS_SYMBOL(OBJC_METACLASS_$_CSSStyleDeclaration)
#endif

#ifndef OBJC_METACLASS_$_CSSStyleRule
#define OBJC_METACLASS_$_CSSStyleRule __NS_SYMBOL(OBJC_METACLASS_$_CSSStyleRule)
#endif

#ifndef OBJC_METACLASS_$_CSSStyleSheet
#define OBJC_METACLASS_$_CSSStyleSheet __NS_SYMBOL(OBJC_METACLASS_$_CSSStyleSheet)
#endif

#ifndef OBJC_METACLASS_$_CSSValue
#define OBJC_METACLASS_$_CSSValue __NS_SYMBOL(OBJC_METACLASS_$_CSSValue)
#endif

#ifndef OBJC_METACLASS_$_CSSValueList
#define OBJC_METACLASS_$_CSSValueList __NS_SYMBOL(OBJC_METACLASS_$_CSSValueList)
#endif

#ifndef OBJC_METACLASS_$_CharacterData
#define OBJC_METACLASS_$_CharacterData __NS_SYMBOL(OBJC_METACLASS_$_CharacterData)
#endif

#ifndef OBJC_METACLASS_$_Comment
#define OBJC_METACLASS_$_Comment __NS_SYMBOL(OBJC_METACLASS_$_Comment)
#endif

#ifndef OBJC_METACLASS_$_DOMHelperUtilities
#define OBJC_METACLASS_$_DOMHelperUtilities __NS_SYMBOL(OBJC_METACLASS_$_DOMHelperUtilities)
#endif

#ifndef OBJC_METACLASS_$_Document
#define OBJC_METACLASS_$_Document __NS_SYMBOL(OBJC_METACLASS_$_Document)
#endif

#ifndef OBJC_METACLASS_$_DocumentFragment
#define OBJC_METACLASS_$_DocumentFragment __NS_SYMBOL(OBJC_METACLASS_$_DocumentFragment)
#endif

#ifndef OBJC_METACLASS_$_DocumentType
#define OBJC_METACLASS_$_DocumentType __NS_SYMBOL(OBJC_METACLASS_$_DocumentType)
#endif

#ifndef OBJC_METACLASS_$_Element
#define OBJC_METACLASS_$_Element __NS_SYMBOL(OBJC_METACLASS_$_Element)
#endif

#ifndef OBJC_METACLASS_$_EntityReference
#define OBJC_METACLASS_$_EntityReference __NS_SYMBOL(OBJC_METACLASS_$_EntityReference)
#endif

#ifndef OBJC_METACLASS_$_MediaList
#define OBJC_METACLASS_$_MediaList __NS_SYMBOL(OBJC_METACLASS_$_MediaList)
#endif

#ifndef OBJC_METACLASS_$_NamedNodeMap
#define OBJC_METACLASS_$_NamedNodeMap __NS_SYMBOL(OBJC_METACLASS_$_NamedNodeMap)
#endif

#ifndef OBJC_METACLASS_$_Node
#define OBJC_METACLASS_$_Node __NS_SYMBOL(OBJC_METACLASS_$_Node)
#endif

#ifndef OBJC_METACLASS_$_NodeList
#define OBJC_METACLASS_$_NodeList __NS_SYMBOL(OBJC_METACLASS_$_NodeList)
#endif

#ifndef OBJC_METACLASS_$_ProcessingInstruction
#define OBJC_METACLASS_$_ProcessingInstruction __NS_SYMBOL(OBJC_METACLASS_$_ProcessingInstruction)
#endif

#ifndef OBJC_METACLASS_$_SVGAngle
#define OBJC_METACLASS_$_SVGAngle __NS_SYMBOL(OBJC_METACLASS_$_SVGAngle)
#endif

#ifndef OBJC_METACLASS_$_SVGAnimatedPreserveAspectRatio
#define OBJC_METACLASS_$_SVGAnimatedPreserveAspectRatio __NS_SYMBOL(OBJC_METACLASS_$_SVGAnimatedPreserveAspectRatio)
#endif

#ifndef OBJC_METACLASS_$_SVGCircleElement
#define OBJC_METACLASS_$_SVGCircleElement __NS_SYMBOL(OBJC_METACLASS_$_SVGCircleElement)
#endif

#ifndef OBJC_METACLASS_$_SVGClipPathElement
#define OBJC_METACLASS_$_SVGClipPathElement __NS_SYMBOL(OBJC_METACLASS_$_SVGClipPathElement)
#endif

#ifndef OBJC_METACLASS_$_SVGDefsElement
#define OBJC_METACLASS_$_SVGDefsElement __NS_SYMBOL(OBJC_METACLASS_$_SVGDefsElement)
#endif

#ifndef OBJC_METACLASS_$_SVGDescriptionElement
#define OBJC_METACLASS_$_SVGDescriptionElement __NS_SYMBOL(OBJC_METACLASS_$_SVGDescriptionElement)
#endif

#ifndef OBJC_METACLASS_$_SVGDocument
#define OBJC_METACLASS_$_SVGDocument __NS_SYMBOL(OBJC_METACLASS_$_SVGDocument)
#endif

#ifndef OBJC_METACLASS_$_SVGElement
#define OBJC_METACLASS_$_SVGElement __NS_SYMBOL(OBJC_METACLASS_$_SVGElement)
#endif

#ifndef OBJC_METACLASS_$_SVGElementInstance
#define OBJC_METACLASS_$_SVGElementInstance __NS_SYMBOL(OBJC_METACLASS_$_SVGElementInstance)
#endif

#ifndef OBJC_METACLASS_$_SVGElementInstanceList
#define OBJC_METACLASS_$_SVGElementInstanceList __NS_SYMBOL(OBJC_METACLASS_$_SVGElementInstanceList)
#endif

#ifndef OBJC_METACLASS_$_SVGEllipseElement
#define OBJC_METACLASS_$_SVGEllipseElement __NS_SYMBOL(OBJC_METACLASS_$_SVGEllipseElement)
#endif

#ifndef OBJC_METACLASS_$_SVGGElement
#define OBJC_METACLASS_$_SVGGElement __NS_SYMBOL(OBJC_METACLASS_$_SVGGElement)
#endif

#ifndef OBJC_METACLASS_$_SVGGradientElement
#define OBJC_METACLASS_$_SVGGradientElement __NS_SYMBOL(OBJC_METACLASS_$_SVGGradientElement)
#endif

#ifndef OBJC_METACLASS_$_SVGGradientLayer
#define OBJC_METACLASS_$_SVGGradientLayer __NS_SYMBOL(OBJC_METACLASS_$_SVGGradientLayer)
#endif

#ifndef OBJC_METACLASS_$_SVGGradientStop
#define OBJC_METACLASS_$_SVGGradientStop __NS_SYMBOL(OBJC_METACLASS_$_SVGGradientStop)
#endif

#ifndef OBJC_METACLASS_$_SVGGroupElement
#define OBJC_METACLASS_$_SVGGroupElement __NS_SYMBOL(OBJC_METACLASS_$_SVGGroupElement)
#endif

#ifndef OBJC_METACLASS_$_SVGHelperUtilities
#define OBJC_METACLASS_$_SVGHelperUtilities __NS_SYMBOL(OBJC_METACLASS_$_SVGHelperUtilities)
#endif

#ifndef OBJC_METACLASS_$_SVGImageElement
#define OBJC_METACLASS_$_SVGImageElement __NS_SYMBOL(OBJC_METACLASS_$_SVGImageElement)
#endif

#ifndef OBJC_METACLASS_$_SVGKExporterNSData
#define OBJC_METACLASS_$_SVGKExporterNSData __NS_SYMBOL(OBJC_METACLASS_$_SVGKExporterNSData)
#endif

#ifndef OBJC_METACLASS_$_SVGKExporterUIImage
#define OBJC_METACLASS_$_SVGKExporterUIImage __NS_SYMBOL(OBJC_METACLASS_$_SVGKExporterUIImage)
#endif

#ifndef OBJC_METACLASS_$_SVGKFastImageView
#define OBJC_METACLASS_$_SVGKFastImageView __NS_SYMBOL(OBJC_METACLASS_$_SVGKFastImageView)
#endif

#ifndef OBJC_METACLASS_$_SVGKImage
#define OBJC_METACLASS_$_SVGKImage __NS_SYMBOL(OBJC_METACLASS_$_SVGKImage)
#endif

#ifndef OBJC_METACLASS_$_SVGKImageCacheLine
#define OBJC_METACLASS_$_SVGKImageCacheLine __NS_SYMBOL(OBJC_METACLASS_$_SVGKImageCacheLine)
#endif

#ifndef OBJC_METACLASS_$_SVGKImageView
#define OBJC_METACLASS_$_SVGKImageView __NS_SYMBOL(OBJC_METACLASS_$_SVGKImageView)
#endif

#ifndef OBJC_METACLASS_$_SVGKLayer
#define OBJC_METACLASS_$_SVGKLayer __NS_SYMBOL(OBJC_METACLASS_$_SVGKLayer)
#endif

#ifndef OBJC_METACLASS_$_SVGKLayeredImageView
#define OBJC_METACLASS_$_SVGKLayeredImageView __NS_SYMBOL(OBJC_METACLASS_$_SVGKLayeredImageView)
#endif

#ifndef OBJC_METACLASS_$_SVGKParseResult
#define OBJC_METACLASS_$_SVGKParseResult __NS_SYMBOL(OBJC_METACLASS_$_SVGKParseResult)
#endif

#ifndef OBJC_METACLASS_$_SVGKParser
#define OBJC_METACLASS_$_SVGKParser __NS_SYMBOL(OBJC_METACLASS_$_SVGKParser)
#endif

#ifndef OBJC_METACLASS_$_SVGKParserDOM
#define OBJC_METACLASS_$_SVGKParserDOM __NS_SYMBOL(OBJC_METACLASS_$_SVGKParserDOM)
#endif

#ifndef OBJC_METACLASS_$_SVGKParserDefsAndUse
#define OBJC_METACLASS_$_SVGKParserDefsAndUse __NS_SYMBOL(OBJC_METACLASS_$_SVGKParserDefsAndUse)
#endif

#ifndef OBJC_METACLASS_$_SVGKParserGradient
#define OBJC_METACLASS_$_SVGKParserGradient __NS_SYMBOL(OBJC_METACLASS_$_SVGKParserGradient)
#endif

#ifndef OBJC_METACLASS_$_SVGKParserPatternsAndGradients
#define OBJC_METACLASS_$_SVGKParserPatternsAndGradients __NS_SYMBOL(OBJC_METACLASS_$_SVGKParserPatternsAndGradients)
#endif

#ifndef OBJC_METACLASS_$_SVGKParserSVG
#define OBJC_METACLASS_$_SVGKParserSVG __NS_SYMBOL(OBJC_METACLASS_$_SVGKParserSVG)
#endif

#ifndef OBJC_METACLASS_$_SVGKParserStyles
#define OBJC_METACLASS_$_SVGKParserStyles __NS_SYMBOL(OBJC_METACLASS_$_SVGKParserStyles)
#endif

#ifndef OBJC_METACLASS_$_SVGKPattern
#define OBJC_METACLASS_$_SVGKPattern __NS_SYMBOL(OBJC_METACLASS_$_SVGKPattern)
#endif

#ifndef OBJC_METACLASS_$_SVGKPointsAndPathsParser
#define OBJC_METACLASS_$_SVGKPointsAndPathsParser __NS_SYMBOL(OBJC_METACLASS_$_SVGKPointsAndPathsParser)
#endif

#ifndef OBJC_METACLASS_$_SVGKSource
#define OBJC_METACLASS_$_SVGKSource __NS_SYMBOL(OBJC_METACLASS_$_SVGKSource)
#endif

#ifndef OBJC_METACLASS_$_SVGKSourceLocalFile
#define OBJC_METACLASS_$_SVGKSourceLocalFile __NS_SYMBOL(OBJC_METACLASS_$_SVGKSourceLocalFile)
#endif

#ifndef OBJC_METACLASS_$_SVGKSourceNSData
#define OBJC_METACLASS_$_SVGKSourceNSData __NS_SYMBOL(OBJC_METACLASS_$_SVGKSourceNSData)
#endif

#ifndef OBJC_METACLASS_$_SVGKSourceString
#define OBJC_METACLASS_$_SVGKSourceString __NS_SYMBOL(OBJC_METACLASS_$_SVGKSourceString)
#endif

#ifndef OBJC_METACLASS_$_SVGKSourceURL
#define OBJC_METACLASS_$_SVGKSourceURL __NS_SYMBOL(OBJC_METACLASS_$_SVGKSourceURL)
#endif

#ifndef OBJC_METACLASS_$_SVGKit
#define OBJC_METACLASS_$_SVGKit __NS_SYMBOL(OBJC_METACLASS_$_SVGKit)
#endif

#ifndef OBJC_METACLASS_$_SVGLength
#define OBJC_METACLASS_$_SVGLength __NS_SYMBOL(OBJC_METACLASS_$_SVGLength)
#endif

#ifndef OBJC_METACLASS_$_SVGLineElement
#define OBJC_METACLASS_$_SVGLineElement __NS_SYMBOL(OBJC_METACLASS_$_SVGLineElement)
#endif

#ifndef OBJC_METACLASS_$_SVGLinearGradientElement
#define OBJC_METACLASS_$_SVGLinearGradientElement __NS_SYMBOL(OBJC_METACLASS_$_SVGLinearGradientElement)
#endif

#ifndef OBJC_METACLASS_$_SVGMatrix
#define OBJC_METACLASS_$_SVGMatrix __NS_SYMBOL(OBJC_METACLASS_$_SVGMatrix)
#endif

#ifndef OBJC_METACLASS_$_SVGPathElement
#define OBJC_METACLASS_$_SVGPathElement __NS_SYMBOL(OBJC_METACLASS_$_SVGPathElement)
#endif

#ifndef OBJC_METACLASS_$_SVGPoint
#define OBJC_METACLASS_$_SVGPoint __NS_SYMBOL(OBJC_METACLASS_$_SVGPoint)
#endif

#ifndef OBJC_METACLASS_$_SVGPolygonElement
#define OBJC_METACLASS_$_SVGPolygonElement __NS_SYMBOL(OBJC_METACLASS_$_SVGPolygonElement)
#endif

#ifndef OBJC_METACLASS_$_SVGPolylineElement
#define OBJC_METACLASS_$_SVGPolylineElement __NS_SYMBOL(OBJC_METACLASS_$_SVGPolylineElement)
#endif

#ifndef OBJC_METACLASS_$_SVGPreserveAspectRatio
#define OBJC_METACLASS_$_SVGPreserveAspectRatio __NS_SYMBOL(OBJC_METACLASS_$_SVGPreserveAspectRatio)
#endif

#ifndef OBJC_METACLASS_$_SVGRadialGradientElement
#define OBJC_METACLASS_$_SVGRadialGradientElement __NS_SYMBOL(OBJC_METACLASS_$_SVGRadialGradientElement)
#endif

#ifndef OBJC_METACLASS_$_SVGRectElement
#define OBJC_METACLASS_$_SVGRectElement __NS_SYMBOL(OBJC_METACLASS_$_SVGRectElement)
#endif

#ifndef OBJC_METACLASS_$_SVGSVGElement
#define OBJC_METACLASS_$_SVGSVGElement __NS_SYMBOL(OBJC_METACLASS_$_SVGSVGElement)
#endif

#ifndef OBJC_METACLASS_$_SVGStyleElement
#define OBJC_METACLASS_$_SVGStyleElement __NS_SYMBOL(OBJC_METACLASS_$_SVGStyleElement)
#endif

#ifndef OBJC_METACLASS_$_SVGSwitchElement
#define OBJC_METACLASS_$_SVGSwitchElement __NS_SYMBOL(OBJC_METACLASS_$_SVGSwitchElement)
#endif

#ifndef OBJC_METACLASS_$_SVGTextContentElement
#define OBJC_METACLASS_$_SVGTextContentElement __NS_SYMBOL(OBJC_METACLASS_$_SVGTextContentElement)
#endif

#ifndef OBJC_METACLASS_$_SVGTextElement
#define OBJC_METACLASS_$_SVGTextElement __NS_SYMBOL(OBJC_METACLASS_$_SVGTextElement)
#endif

#ifndef OBJC_METACLASS_$_SVGTextLayer
#define OBJC_METACLASS_$_SVGTextLayer __NS_SYMBOL(OBJC_METACLASS_$_SVGTextLayer)
#endif

#ifndef OBJC_METACLASS_$_SVGTextPositioningElement
#define OBJC_METACLASS_$_SVGTextPositioningElement __NS_SYMBOL(OBJC_METACLASS_$_SVGTextPositioningElement)
#endif

#ifndef OBJC_METACLASS_$_SVGTitleElement
#define OBJC_METACLASS_$_SVGTitleElement __NS_SYMBOL(OBJC_METACLASS_$_SVGTitleElement)
#endif

#ifndef OBJC_METACLASS_$_SVGTransform
#define OBJC_METACLASS_$_SVGTransform __NS_SYMBOL(OBJC_METACLASS_$_SVGTransform)
#endif

#ifndef OBJC_METACLASS_$_SVGUseElement
#define OBJC_METACLASS_$_SVGUseElement __NS_SYMBOL(OBJC_METACLASS_$_SVGUseElement)
#endif

#ifndef OBJC_METACLASS_$_StyleSheet
#define OBJC_METACLASS_$_StyleSheet __NS_SYMBOL(OBJC_METACLASS_$_StyleSheet)
#endif

#ifndef OBJC_METACLASS_$_StyleSheetList
#define OBJC_METACLASS_$_StyleSheetList __NS_SYMBOL(OBJC_METACLASS_$_StyleSheetList)
#endif

#ifndef OBJC_METACLASS_$_Text
#define OBJC_METACLASS_$_Text __NS_SYMBOL(OBJC_METACLASS_$_Text)
#endif

#ifndef OBJC_METACLASS_$_TinySVGTextAreaElement
#define OBJC_METACLASS_$_TinySVGTextAreaElement __NS_SYMBOL(OBJC_METACLASS_$_TinySVGTextAreaElement)
#endif

// SVGKit unprefixed CoreGraphic overrides
#ifndef CALayerWithChildHitTest
#define CALayerWithChildHitTest __NS_SYMBOL(CALayerWithChildHitTest)
#endif

#ifndef CALayerWithClipRender
#define CALayerWithClipRender __NS_SYMBOL(CALayerWithClipRender)
#endif

#ifndef CAShapeLayerWithClipRender
#define CAShapeLayerWithClipRender __NS_SYMBOL(CAShapeLayerWithClipRender)
#endif

#ifndef CAShapeLayerWithHitTest
#define CAShapeLayerWithHitTest __NS_SYMBOL(CAShapeLayerWithHitTest)
#endif

#ifndef OBJC_CLASS_$_CALayerWithChildHitTest
#define OBJC_CLASS_$_CALayerWithChildHitTest __NS_SYMBOL(OBJC_CLASS_$_CALayerWithChildHitTest)
#endif

#ifndef OBJC_CLASS_$_CALayerWithClipRender
#define OBJC_CLASS_$_CALayerWithClipRender __NS_SYMBOL(OBJC_CLASS_$_CALayerWithClipRender)
#endif

#ifndef OBJC_CLASS_$_CAShapeLayerWithClipRender
#define OBJC_CLASS_$_CAShapeLayerWithClipRender __NS_SYMBOL(OBJC_CLASS_$_CAShapeLayerWithClipRender)
#endif

#ifndef OBJC_CLASS_$_CAShapeLayerWithHitTest
#define OBJC_CLASS_$_CAShapeLayerWithHitTest __NS_SYMBOL(OBJC_CLASS_$_CAShapeLayerWithHitTest)
#endif

#ifndef OBJC_METACLASS_$_CALayerWithChildHitTest
#define OBJC_METACLASS_$_CALayerWithChildHitTest __NS_SYMBOL(OBJC_METACLASS_$_CALayerWithChildHitTest)
#endif

#ifndef OBJC_METACLASS_$_CALayerWithClipRender
#define OBJC_METACLASS_$_CALayerWithClipRender __NS_SYMBOL(OBJC_METACLASS_$_CALayerWithClipRender)
#endif

#ifndef OBJC_METACLASS_$_CAShapeLayerWithClipRender
#define OBJC_METACLASS_$_CAShapeLayerWithClipRender __NS_SYMBOL(OBJC_METACLASS_$_CAShapeLayerWithClipRender)
#endif

#ifndef OBJC_METACLASS_$_CAShapeLayerWithHitTest
#define OBJC_METACLASS_$_CAShapeLayerWithHitTest __NS_SYMBOL(OBJC_METACLASS_$_CAShapeLayerWithHitTest)
#endif

