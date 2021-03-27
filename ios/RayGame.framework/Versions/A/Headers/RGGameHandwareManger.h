//
//  RGGameHandwareManger.h
//  RayGame
//
//  Created by Sim Tsai on 2021/2/9.
//

#import <Foundation/Foundation.h>
#import <GameController/GameController.h>

NS_ASSUME_NONNULL_BEGIN

@class RGGameHandwareManger;

API_AVAILABLE(ios(14.0))
@protocol RGGameHandwareMangerDelegate <NSObject>

@optional
- (void)RGGameHandwareManger:(RGGameHandwareManger *)manager connetionedMouse:(GCMouseInput *)mouse;

- (void)RGGameHandwareManger:(RGGameHandwareManger *)manager disconnetionedMouse:(GCMouseInput *)mouse;

- (void)RGGameHandwareManger:(RGGameHandwareManger *)manager moveMouse:(GCMouseInput *)mouse deltaX:(float)deltaX deltaY:(float)deltaY;

- (void)RGGameHandwareManger:(RGGameHandwareManger *)manager rightPressedChangedMouse:(GCMouseInput *)mouse pressed:(BOOL)pressed;

- (void)RGGameHandwareManger:(RGGameHandwareManger *)manager middlePressedChangedMouse:(GCMouseInput *)mouse pressed:(BOOL)pressed;

- (void)RGGameHandwareManger:(RGGameHandwareManger *)manager leftPressedChangedMouse:(GCMouseInput *)mouse pressed:(BOOL)pressed;

- (void)RGGameHandwareManger:(RGGameHandwareManger *)manager scrollChangedMouse:(GCMouseInput *)mouse xValue:(float)xValue yValue:(float)yValue;

@end

@interface RGGameHandwareManger : NSObject

+ (instancetype)sharedManager;
- (void)setup API_AVAILABLE(ios(14.0));


@property (nonatomic, assign) BOOL moveMouse;
@property (nonatomic, assign) BOOL showMouse;
@property (nonatomic, assign) BOOL useMouse;

@property (nonatomic, weak) id<RGGameHandwareMangerDelegate> delegate API_AVAILABLE(ios(14.0));

@property (nonatomic, strong, readonly) GCMouseInput *mouseInput API_AVAILABLE(ios(14.0));

@end

NS_ASSUME_NONNULL_END
