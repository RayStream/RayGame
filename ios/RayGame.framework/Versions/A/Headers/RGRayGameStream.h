//
//  RGRayGameStream.h
//  RayGame
//
//  Created by Sim Tsai on 2021/2/23.
//

#import <Foundation/Foundation.h>
#import <RayGame/RGRayGameStreamError.h>
#import <RayGame/RGGameInfoModel.h>
#import <RayGame/RGGameListModel.h>
#import <RayGame/RGRayGameStreamType.h>
#import <RayGame/RGGameStartModel.h>
#import <RayGame/RGAppRunInfoModel.h>
#import <RayGame/RGGameHttpRunningListModel.h>

NS_ASSUME_NONNULL_BEGIN

/// 游戏设置信息
@interface RGGameSetting : NSObject

/// 游戏默认使用的帧率, 详细见 RGGameFPS
@property (nonatomic, assign) RGGameFPS fps;

/// 游戏默认使用的波特率, 详细见 RGGameBitrate
@property (nonatomic, assign) RGGameBitrate bitrate;

/// 游戏默认使用的清晰度, 详细见 RGGameResolution
@property (nonatomic, assign) RGGameResolution resolution;

/// 游戏默认使用的鼠标模式, 详细见 RGGameMouseMode
@property (nonatomic, assign) RGGameMouseMode mouseMode;

/// 游戏是否默认显示键鼠映射
@property (nonatomic, assign) BOOL showKeyboardMap;

/// 游戏是否默认显示手柄映射
@property (nonatomic, assign) BOOL showHandShankMap;

/// 游戏是否默认打开按键震动
@property (nonatomic, assign) BOOL buttonFeedback;

/// 游戏是否默认显示网络状态
@property (nonatomic, assign) BOOL showNetworkTip;

@end

@class RGRayGameStream;


/// SDK 代理协议
@protocol RGRayGameStreamDelegate <NSObject>

@optional


/// WebSocket 消息回调
/// @param Stream Stream
/// @param json 消息
- (void)rayGameStream:(RGRayGameStream *)Stream messageJson:(NSDictionary *)json;


/// SDK 统一错误回调
/// @param Stream Stream
/// @param error 错误信息
- (void)rayGameStream:(RGRayGameStream *)Stream error:(NSError *)error;


/// 游戏设置变更回调
/// @param Stream Stream
/// @param setting 游戏设置信息
- (void)rayGameStream:(RGRayGameStream *)Stream didChangeSetting:(RGGameSetting *)setting;


/// SDK 初始化成功回调
/// @param Stream Stream
- (void)rayGameStreamInitFinish:(RGRayGameStream *)Stream;

/// 游戏界面重定向回调
- (UIViewController *)gameViewController;

@end


/// 重连游戏参数
@interface RGReconnetGameParam : NSObject

/// 游戏ID
@property (nonatomic, copy) NSString *appId;

/// 游戏运行ID
@property (nonatomic, copy) NSString *runningId;

/// 运行游戏的节点IP
@property (nonatomic, copy) NSString *nodeIp;

/// 运行游戏的节点端口
@property (nonatomic, assign) NSInteger nodePort;

/// 游戏默认使用的清晰度, 详细见 RGGameResolution
@property (nonatomic, assign) RGGameResolution resolution;

/// 游戏默认使用的帧率, 详细见 RGGameFPS
@property (nonatomic, assign) RGGameFPS fps;

/// 游戏默认使用的波特率, 详细见 RGGameBitrate
@property (nonatomic, assign) RGGameBitrate bitrate;

/// 游戏默认使用的鼠标模式, 详细见 RGGameMouseMode
@property (nonatomic, assign) RGGameMouseMode mouseMode;

/// 游戏是否默认显示网络状态
@property (nonatomic, assign) BOOL showNetworkTip;

/// 游戏是否默认打开按键震动
@property (nonatomic, assign) BOOL buttonFeedback;

/// 游戏是否默认显示键鼠映射
@property (nonatomic, assign) BOOL showKeyboardMap;

/// 游戏运行的开始时间
@property (nonatomic, assign) NSInteger startTime;

/// 认证信息
@property (nonatomic, copy) NSString *authRandom;

/// 游戏是否默认显示键鼠映射
@property (nonatomic, copy) NSString *keyboardJsonPath;


@end

/// 开始游戏参数
@interface RGStartGameParam : NSObject

/// 游戏ID
@property (nonatomic, copy) NSString *appId;

/// 游戏默认使用的清晰度, 详细见 RGGameResolution
@property (nonatomic, assign) RGGameResolution resolution;

/// 游戏默认使用的帧率, 详细见 RGGameFPS
@property (nonatomic, assign) RGGameFPS fps;

/// 游戏默认使用的波特率, 详细见 RGGameBitrate
@property (nonatomic, assign) RGGameBitrate bitrate;

/// 游戏默认使用的鼠标模式, 详细见 RGGameMouseMode
@property (nonatomic, assign) RGGameMouseMode mouseMode;

/// 游戏是否默认显示网络状态
@property (nonatomic, assign) BOOL showNetworkTip;

/// 游戏是否默认打开按键震动
@property (nonatomic, assign) BOOL buttonFeedback;

/// 游戏是否默认显示键鼠映射
@property (nonatomic, assign) BOOL showKeyboardMap;

/// 游戏默认键鼠映射方案JSON文件路径
@property (nonatomic, copy) NSString *keyboardJsonPath;


/// 便捷初始化函数
/// @param appId 游戏ID
+ (instancetype)startGameParamWithAppId:(NSString *)appId;

@end


/// SDK 初始化配置
@interface RGRayGameStreamConfig : NSObject

/// Token
@property (nonatomic, copy) NSString *token;

/// HTTP 服务器
@property (nonatomic, copy) NSString *endpoint;

/// WebSocket 服务器
@property (nonatomic, copy) NSString *websocket;


/// 初始化函数
/// @param token Token
/// @param endpoint HTTP 服务器
/// @param websocket WebSocket 服务器
- (instancetype)initWithToken:(NSString *)token
                     endpoint:(NSString *)endpoint
                    websocket:(NSString *)websocket;

@end


/// 云游戏调用类
@interface RGRayGameStream : NSObject


/// 设置 SDK 代理
@property (nonatomic, weak) id<RGRayGameStreamDelegate> delegate;


/// 单例
+ (instancetype)sharedManager;


/// 初始化SDK
/// @param config 初始化参数
- (void)initRayGame:(RGRayGameStreamConfig * _Nonnull)config;


/// 设置 Token
/// @param token  Token
- (void)setToken:(NSString * _Nonnull)token;


/// 获取游戏列表
/// @param pageNum 页数
/// @param pageSize 每页条数
/// @param success 成功回调
/// @param failure 失败回调
- (void)getGameList:(NSInteger)pageNum
           pageSize:(NSInteger)pageSize
            success:(void (^_Nullable)(RGGameListModel * model))success
            failure:(void (^_Nullable)(NSError * error))failure;


/// 获取正在运行的游戏列表
/// @param appIds appId 数组(支持同时查询多个)
/// @param pageNum 页数
/// @param pageSize 每页条数
/// @param success 成功回调
/// @param failure 失败回调
- (void)getRunningGameList:(NSArray<NSNumber *> * _Nonnull)appIds
                   pageNum:(NSInteger)pageNum
                  pageSize:(NSInteger)pageSize
                   success:(void (^_Nullable)(RGGameHttpRunningListModel *))success
                   failure:(void (^_Nullable)(NSError *))failure;



/// 启动游戏
/// @param param 启动游戏参数
/// @param success 成功回调
/// @param failure 失败回调
- (void)startGame:(RGStartGameParam * _Nonnull)param
                   success:(void (^_Nullable)(RGGameStartModel * model))success
                   failure:(void (^_Nullable)(NSError * error))failure;

/// 重新连接游戏
/// @param param 重新连接游戏参数
- (void)reconnectGame:(RGReconnetGameParam * _Nonnull)param;



/// 停止游戏
/// @param runningId 游戏的运行ID
- (void)stopGame:(NSString * _Nonnull)runningId;


/// 挂起游戏
/// @param runningId 游戏的运行ID
- (void)hangUpGame:( NSString * _Nonnull)runningId;


/// 通过 runningId 获取正在运行游戏的信息
/// @param runningId 游戏的运行ID
/// @param success 成功回调
/// @param failure 失败回调
- (void)getRunningGameInfo:(NSString * _Nonnull)runningId
                           success:(void (^_Nullable)(RGAppRunInfoModel * model))success
                           failure:(void (^_Nullable)(NSError * error))failure;

/// 开始测速
/// @param progress 测速进度回调
/// @param block 测速结果回调
- (void)startSpeedTest:(RGNetworkSpedTestProgress _Nullable)progress
                                    block:(RGNetworkSpedTestResult _Nullable)block;


/// 停止测速
- (void)stopSpeedTest;

/// 销毁
- (void)destroy;

/// 获取游戏配置
- (RGGameSetting *)getGameConfig;

/// 初始化网关
- (void)initGateway;

/// 配置网关
- (void)configGatewayWithHost:(NSString *)host port:(NSInteger)port;




@end

NS_ASSUME_NONNULL_END
