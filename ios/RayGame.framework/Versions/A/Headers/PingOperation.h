//
//  PingOperation.h
//  RayCloudGameDemo
//
//  Created by Sim Tsai on 2021/1/11.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PingOperation : NSOperation

@property (nonatomic, assign) NSTimeInterval delay;

- (instancetype)initWithHost:(NSString *)host port:(NSUInteger)port;

@end

NS_ASSUME_NONNULL_END
