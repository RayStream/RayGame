//
//  AppConfigInfoModel.h
//  RayCloudGameDemo
//
//  Created by Sim Tsai on 2021/1/12.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface RGAppConfigInfoModel : NSObject

@property (nonatomic, copy) NSString *host;

@property (nonatomic, assign) NSUInteger udpPort;

@property (nonatomic, assign) NSUInteger tcpPort;

@end

NS_ASSUME_NONNULL_END
