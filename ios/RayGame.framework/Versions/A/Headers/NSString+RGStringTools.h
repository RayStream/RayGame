//
//  NSString+RGStringTools.h
//  RayGame
//
//  Created by Sim Tsai on 2021/1/29.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (RGStringTools)

- (BOOL)canKeyboardCommandInput;

- (BOOL)isFuntionKeyboardCommand;

@property (nonatomic, assign, readonly) BOOL isShift;

@property (nonatomic, assign, readonly) BOOL isCtrl;

@property (nonatomic, assign, readonly) BOOL isAlt;

@property (nonatomic, assign, readonly) BOOL isStick;

@property (nonatomic, assign, readonly) BOOL isMouse;

@property (nonatomic, assign, readonly) BOOL isCaps;

@property (nonatomic, assign, readonly) BOOL isMouseRight;

@property (nonatomic, assign, readonly) BOOL isMouseLeft;

@property (nonatomic, assign, readonly) BOOL isMouseMiddle;



@end

NS_ASSUME_NONNULL_END
