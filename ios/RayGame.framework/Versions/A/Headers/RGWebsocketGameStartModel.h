//
//  RGGameStartModel.h
//  RayCloudGameDemo
//
//  Created by Sim Tsai on 2021/1/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface RGWebsocketGameStartModel : NSObject

@property (nonatomic, copy) NSString *runningId;

@property (nonatomic, copy) NSString *nodeIp;

@property (nonatomic, assign) NSInteger nodePort;

/// 认证信息
@property (nonatomic, copy) NSString *authRandom;

@end

NS_ASSUME_NONNULL_END
