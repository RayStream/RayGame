//
//  RGGameInfoModel.h
//  RayCloudGameDemo
//
//  Created by Sim Tsai on 2021/1/11.
//

#import <Foundation/Foundation.h>
#import <YYModel/YYModel.h>

NS_ASSUME_NONNULL_BEGIN

/// 游戏支持的平台类型
typedef NS_ENUM(NSUInteger, RGGameSupportsType) {
    
    /// PC
    RGGameSupportsTypePC = 10,
    
    /// MAC
    RGGameSupportsTypeMac = 20,
    
    /// 手柄
    RGGameSupportsTypeHandShank = 30,
    
    /// 安卓
    RGGameSupportsTypeAndroid = 40,
    
    /// iOS
    RGGameSupportsTypeiOS = 50,
    
    /// TV
    RGGameSupportsTypeTV = 60
};


/// 游戏信息
@interface RGGameInfoModel : NSObject

/// 游戏ID
@property (nonatomic, copy) NSString *appId;

/// 游戏名称
@property (nonatomic, copy) NSString *name;

/// 游戏截图
@property (nonatomic, copy) NSString *coverUrl;

/// 游戏支持的平台
@property (nonatomic, strong) NSArray<NSString *> *supports;

/// 游戏是否处于挂机状态
@property (nonatomic, assign) BOOL isHangUp;

/// 游戏运行ID
@property (nonatomic, copy) NSString * _Nullable runningId;

/// 运行游戏的节点IP
@property (nonatomic, copy) NSString * _Nullable nodeIp;

/// 运行游戏的节点端口
@property (nonatomic, assign) NSInteger nodePort;

/// 游戏运行的开始时间
@property (nonatomic, assign) NSInteger startTime;

/// 认证信息
@property (nonatomic, assign) NSString *authRandom;

@end

NS_ASSUME_NONNULL_END
