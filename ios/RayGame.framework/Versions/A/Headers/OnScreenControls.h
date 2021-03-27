//
//  OnScreenControls.h
//  Moonlight
//
//  Created by Diego Waxemberg on 12/28/14.
//  Copyright (c) 2014 Moonlight Stream. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@protocol EdgeDetectionDelegate;
@class ControllerSupport;

@interface OnScreenControls : NSObject

typedef NS_ENUM(NSInteger, OnScreenControlsLevel) {
    OnScreenControlsLevelOff,
    OnScreenControlsLevelAuto,
    OnScreenControlsLevelSimple,
    OnScreenControlsLevelFull,
    
    // Internal levels selected by ControllerSupport
    OnScreenControlsLevelAutoGCGamepad,
    OnScreenControlsLevelAutoGCExtendedGamepad,
    OnScreenControlsLevelAutoGCExtendedGamepadWithStickButtons
};

- (instancetype)initWithView:(UIView*)view;

- (id) initWithView:(UIView*)view controllerSup:(ControllerSupport*)controllerSupport swipeDelegate:(id<EdgeDetectionDelegate>)edgeDelegate;
//- (BOOL) handleTouchDownEvent:(NSSet*)touches;
- (NSString *)handleTouchDownEvent:(NSSet *)touches;
- (BOOL) handleTouchUpEvent:(NSSet*)touches;
- (NSString *) handleTouchMovedEvent:touches;
- (void) show;
- (void)hidde;
- (void)showMidMouseTipView;
- (void)hiddenMidMouseTipView;

@property (nonatomic, assign, readonly) BOOL isShow;

@end
