//
//  NetworkSpeedTest.h
//  RayCloudGameDemo
//
//  Created by Sim Tsai on 2021/1/11.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^NetworkSpedTestResult)(NSTimeInterval delay, NSUInteger bandwidth);
typedef void(^NetworkSpedTestProgress)(double progress);

@interface NetworkSpeedTest : NSObject

+ (instancetype)sharedManager;

- (NSString *)convertSize:(NSUInteger)size;

- (NSUInteger)convertToMbps:(NSUInteger)size;

- (void)startTestWithHost:(NSString *)host port:(NSUInteger)port progress:(NetworkSpedTestProgress)progress block:(NetworkSpedTestResult)block;

- (void)stop;

@end

NS_ASSUME_NONNULL_END
