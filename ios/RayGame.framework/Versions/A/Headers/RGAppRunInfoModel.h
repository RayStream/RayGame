//
//  RGAppRunInfoModel.h
//  RayCloudGameDemo
//
//  Created by Sim Tsai on 2021/2/8.
//

#import <Foundation/Foundation.h>
#import <YYModel/YYModel.h>

NS_ASSUME_NONNULL_BEGIN

/// 游戏运行信息
@interface RGAppRunInfoModel : NSObject

/// 游戏状态 STOPPED，WAITING, RUNNING
@property (nonatomic, copy) NSString *appStatus;

/// 运行游戏的节点IP
@property (nonatomic, copy) NSString *nodeIp;

/// 运行游戏的节点端口
@property (nonatomic, assign) NSInteger nodePort;

/// 游戏运行的开始时间
@property (nonatomic, assign) NSInteger startTime;

/// 认证信息
@property (nonatomic, copy) NSString *authRandom;

@end

NS_ASSUME_NONNULL_END
