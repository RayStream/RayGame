//
//  RGGameHttpRunningListModel.h
//  RayGame
//
//  Created by Sim Tsai on 2021/3/9.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


/// 正在运行游戏信息Model
@interface RGGameHttpRunningGameInfoModel : NSObject

/// 游戏ID
@property (nonatomic, copy) NSString *appId;

/// 游戏运行ID
@property (nonatomic, copy) NSString *runningId;

/// IP 地址
@property (nonatomic, copy) NSString *ip;

/// 端口
@property (nonatomic, assign) NSInteger port;

/// 游戏开始时间
@property (nonatomic, assign) NSInteger startTime;

/// 认证信息
@property (nonatomic, copy) NSString *authRandom;


@end


/// 正在运行游戏列表Model
@interface RGGameHttpRunningListModel : NSObject

/// 正在运行信息
@property (nonatomic, strong) NSArray<RGGameHttpRunningGameInfoModel *> *records;

@end

NS_ASSUME_NONNULL_END
