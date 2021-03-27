//
//  RGRayGameStreamType.h
//  Pods
//
//  Created by Sim Tsai on 2021/2/24.
//

#ifndef RGRayGameStreamType_h
#define RGRayGameStreamType_h

/// 测速结果
/// @param delay 延时 ms
/// @param bandwidth 带宽 Mbps
typedef void(^RGNetworkSpedTestResult)(NSTimeInterval delay, NSUInteger bandwidth);

/// 测试进度
typedef void(^RGNetworkSpedTestProgress)(double progress);

/// 游戏设置：鼠标模式
typedef NS_ENUM(NSUInteger, RGGameMouseMode) {
    
    /// 鼠标模式
    RGGameMouseModePoint = 0,
    
    /// 触摸模式
    RGGameMouseModeTouch = 1,
};

/// 游戏设置：清晰度
typedef NS_ENUM(NSUInteger, RGGameResolution) {
    RGGameResolution720P,
    RGGameResolution1080P,
};

/// 游戏设置：FPS
typedef NS_ENUM(NSUInteger, RGGameFPS) {
    RGGameFPS30 = 30,
    RGGameFPS60 = 60,
};

/// 游戏设置：比特率
typedef NS_ENUM(NSUInteger, RGGameBitrate) {
    RGGameBitrateUnkown = 0,
    RGGameBitrate8000 = 8000,
    RGGameBitrate10000 = 10000,
    RGGameBitrate25000 = 25000,
    RGGameBitrate60000 = 60000,
};


#endif /* RGRayGameStreamType_h */
