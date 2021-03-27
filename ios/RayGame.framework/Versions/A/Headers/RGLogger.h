//
//  RGLogger.h
//  RayGame
//
//  Created by Sim Tsai on 2021/2/4.
//

#ifndef RGLogger_h
#define RGLogger_h

#if RayGameWithLogger

#import <CocoaLumberjack/CocoaLumberjack.h>

#if DEBUG
    static const DDLogLevel ddLogLevel = DDLogLevelAll;
#else
    static const DDLogLevel ddLogLevel = DDLogLevelAll;
#endif




#if DEBUG

#ifndef RGLogInfo
#define RGLogInfo(frmt, ...)    NSLog(@"%@", [[NSString stringWithFormat:@"%@:%d  %s \n", THIS_FILE, __LINE__, __FUNCTION__] stringByAppendingFormat:frmt, ##__VA_ARGS__])
#endif

#ifndef RGLogError
#define RGLogError(frmt, ...)   NSLog(@"%@", [[NSString stringWithFormat:@"%@:%d  %s \n", THIS_FILE, __LINE__, __FUNCTION__] stringByAppendingFormat:frmt, ##__VA_ARGS__])
#endif

#else

#ifndef RGLogInfo
#define RGLogInfo(frmt, ...)    DDLogInfo(@"%@", [[NSString stringWithFormat:@"%@:%d  %s \n", THIS_FILE, __LINE__, __FUNCTION__] stringByAppendingFormat:frmt, ##__VA_ARGS__])
#endif

#ifndef RGLogError
#define RGLogError(frmt, ...)   DDLogError(@"%@", [[NSString stringWithFormat:@"%@:%d  %s \n", THIS_FILE, __LINE__, __FUNCTION__] stringByAppendingFormat:frmt, ##__VA_ARGS__])
#endif

#endif



#else

#define THIS_FILE __FILE__

#ifndef RGLogInfo
#define RGLogInfo(frmt, ...)    NSLog(@"%@", [[NSString stringWithFormat:@""] stringByAppendingFormat:frmt, ##__VA_ARGS__])
#endif

#ifndef RGLogError
#define RGLogError(frmt, ...)   NSLog(@"%@", [[NSString stringWithFormat:@""] stringByAppendingFormat:frmt, ##__VA_ARGS__])
#endif

#endif


#endif /* RGLogger_h */
