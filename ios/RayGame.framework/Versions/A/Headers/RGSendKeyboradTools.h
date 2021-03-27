//
//  RGSendKeyboradTools.h
//  RayGame
//
//  Created by Sim Tsai on 2021/1/28.
//

#import <Foundation/Foundation.h>
#import "RGKeyboardModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface RGSendKeyboradTools : NSObject

+ (instancetype)sharedManager;

@property (nonatomic, assign) BOOL isCaps;

@property (nonatomic, assign) BOOL isShift;

@property (nonatomic, assign) BOOL isCtrl;

@property (nonatomic, assign) BOOL isAlt;


- (void)sendUpWithShowName:(NSString *)showName;

- (void)sendDownWithShowName:(NSString *)showName;
//
//- (void)sendFunctionKeyUpWithShowName:(NSString *)showName;
//
//- (void)sendFunctionKeyDownWithShowName:(NSString *)showName;

- (void)sendDownKeyCommand:(UIKey *)cmd API_AVAILABLE(ios(13.4));

- (void)sendUpKeyCommand:(UIKey *)cmd API_AVAILABLE(ios(13.4));

- (void)sendDownKeyboardModel:(RGKeyboardModel *)model;

- (void)sendUpKeyboardModel:(RGKeyboardModel *)model;

- (void)sendDownKeycode:(int)keycode;

- (void)sendUpKeycode:(int)keycode;

- (void)sendLowLevelEvent:(struct KeyEvent)event;



@end

NS_ASSUME_NONNULL_END
