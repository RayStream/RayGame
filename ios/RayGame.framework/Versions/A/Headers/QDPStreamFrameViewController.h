//
//  StreamFrameViewController.h
//  Moonlight
//
//  Created by Diego Waxemberg on 1/18/14.
//  Copyright (c) 2015 Moonlight Stream. All rights reserved.
//


#import <UIKit/UIKit.h>

@protocol QDPStreamFrameVCDelegate <NSObject>

- (void)rdpSessionViewuserCloseVirtualMachine;

@optional

///连接云桌面是否成功(sdk目前使用)
- (void)cloudDesktopConnectIsSuccess:(BOOL)isSuccess;

///所有连接完成
- (void)allConnectionFinish;

- (void)RGConnectionTerminated;


- (void)speed:(NSString *)speed delay:(NSString *)delay fps:(NSInteger)fps;

- (void)RGreconnetion;

- (void)RGlaunchFailed:(NSString*)message;

- (BOOL)RGOnTap:(UITapGestureRecognizer *)tap;


@end

@protocol RGGameSettingDelegate <NSObject>

- (void)RGGameDidSetting;

@end

@interface QDPStreamFrameViewController : UIViewController


@property (nonatomic,weak) id <QDPStreamFrameVCDelegate> delegate;

@property (nonatomic, weak) id <RGGameSettingDelegate> gameSettingDelegate;

@property (nonatomic, assign, readonly) BOOL isShowScreenControls;

@property (nonatomic, assign) BOOL buttonFeedback;

- (void)configStreamView;

- (void)handleDeviceOrientationNotification:(NSNotification *)notification;

- (void)startConnect;

- (void)hiddeScreenControls;

- (void)ShowScreenControls;

- (void)showVirtualKeyboard;

- (void)hideVirtualKeyboard;

- (void)exitGame;

- (void)configStreamReconnect;

- (void)showKeyboardMapAlertView;

- (void)applyKeyboardSchemeKeys:(NSArray *)keyboardSchemeKeys;


@end
