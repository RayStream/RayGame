//
//  BandwidthTestOperation.h
//  RayCloudGameDemo
//
//  Created by Sim Tsai on 2021/1/11.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BandwidthTestOperation : NSOperation

@property (nonatomic, assign) NSUInteger total;

- (instancetype)initWithTimeInterval:(NSTimeInterval)timeInterval host:(NSString *)host port:(NSUInteger)port;

@end

NS_ASSUME_NONNULL_END
