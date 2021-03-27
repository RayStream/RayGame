//
//  RGGameStartModel.h
//  RayCloudGameDemo
//
//  Created by Sim Tsai on 2021/1/13.
//

#import <Foundation/Foundation.h>
#import <YYModel/YYModel.h>

NS_ASSUME_NONNULL_BEGIN


/// 启动游戏返回结果 Model
@interface RGGameStartModel : NSObject

/// 游戏运行ID
@property (nonatomic, copy) NSString *runningId;


/// 游戏ID
@property (nonatomic, copy) NSString *appId;

@end

NS_ASSUME_NONNULL_END
