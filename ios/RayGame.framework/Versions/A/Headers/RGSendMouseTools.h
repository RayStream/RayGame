//
//  RGSendMouseTools.h
//  RayGame
//
//  Created by Sim Tsai on 2021/1/30.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class RGKeyboardModel;

typedef NS_ENUM(NSUInteger, RGMouseType) {
    RGMouseTypeLeft,
    RGMouseTypeRight,
    RGMouseTypeMiddle,
};



typedef NS_ENUM(NSUInteger, RGMouseAction) {
    RGMouseActionPress,
    RGMouseActionRelease,
    RGMouseActionButtonX2
};

typedef NS_ENUM(NSUInteger, RGMouseScrollDirection) {
    RGMouseScrollDirectionUp,
    RGMouseScrollDirectionDown,
};

@interface RGSendMouseTools : NSObject

+ (instancetype)sharedManager;

- (void)sendMouseWithType:(RGMouseType)type action:(RGMouseAction)action;

- (void)sendMouseSrcollWithType:(RGMouseScrollDirection)type;

- (void)sendMouseDownWithModel:(RGKeyboardModel *)model;

- (void)sendMouseUpWithModel:(RGKeyboardModel *)model;

- (void)sendMoveMouseToPoint:(CGPoint)point;

- (void)sendMoveMouseOffset:(CGPoint)offsetPoint;

- (void)sendMoveMouseToPoint:(CGPoint)point offsetPoint:(CGPoint)offsetPoint;

- (void)sendMoveMouseAbsoluteWithOffset:(CGPoint)offsetPoint;

- (void)resetMousePointWithScreenSize:(CGSize)screenSize;

- (void)configServerScreenSize:(CGSize)screenSize gameViewSize:(CGSize)gameViewSize;

- (CGPoint)severMousePointToLocalMousePoint:(CGPoint)mousePoint;

- (CGPoint)localMousePointToServerMousePoint:(CGPoint)point;

@property (nonatomic, assign) CGPoint mousePoint;

@property (nonatomic, assign) BOOL showMouse;

@end

NS_ASSUME_NONNULL_END
