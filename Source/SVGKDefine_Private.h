/**
SVGKDefine_Private.h

SVGKDefine define some common macro used for private header.
*/

#ifndef SVGKDefine_Private_h
#define SVGKDefine_Private_h

#import "SVGKDefine.h"

// These macro is only used inside framework project, does not expose to public header and effect user's define

#define SVGKIT_LOG_CONTEXT 556

#define MR_SVGKIT_LOGLEVEL_ERROR 1
#define MR_SVGKIT_LOGLEVEL_WARN 2
#define MR_SVGKIT_LOGLEVEL_INFO 3
#define MR_SVGKIT_LOGLEVEL_DEBUG 4
#define MR_SVGKIT_LOGLEVEL_VERBOSE 5

// Set the log level here to debug SVGKit issues
#define MR_SVGKIT_LOGLEVEL MR_SVGKIT_LOGLEVEL_ERROR

#define MR_DO_NOTHING ({;})

#define SVGKitLogError(frmt, ...)       ((MR_SVGKIT_LOGLEVEL >= MR_SVGKIT_LOGLEVEL_ERROR) ? NSLog(frmt, ##__VA_ARGS__) : MR_DO_NOTHING)
#define SVGKitLogWarn(frmt, ...)        ((MR_SVGKIT_LOGLEVEL >= MR_SVGKIT_LOGLEVEL_WARN) ? NSLog(frmt, ##__VA_ARGS__) : MR_DO_NOTHING)
#define SVGKitLogInfo(frmt, ...)        ((MR_SVGKIT_LOGLEVEL >= MR_SVGKIT_LOGLEVEL_INFO) ? NSLog(frmt, ##__VA_ARGS__) : MR_DO_NOTHING)
#define SVGKitLogDebug(frmt, ...)       ((MR_SVGKIT_LOGLEVEL >= MR_SVGKIT_LOGLEVEL_DEBUG) ? NSLog(frmt, ##__VA_ARGS__) : MR_DO_NOTHING)
#define SVGKitLogVerbose(frmt, ...)     ((MR_SVGKIT_LOGLEVEL >= MR_SVGKIT_LOGLEVEL_VERBOSE) ? NSLog(frmt, ##__VA_ARGS__) : MR_DO_NOTHING)

#if SVGKIT_MAC
#define NSStringFromCGRect(rect) NSStringFromRect(rect)
#define NSStringFromCGSize(size) NSStringFromSize(size)
#define NSStringFromCGPoint(point) NSStringFromPoint(point)
#endif

#endif /* SVGKDefine_Private_h */
