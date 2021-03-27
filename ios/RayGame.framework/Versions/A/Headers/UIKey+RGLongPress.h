//
//  UIKey+RGLongPress.h
//  RayGame
//
//  Created by Sim Tsai on 2021/3/8.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIKey (RGLongPress)

@property (nonatomic, strong) NSTimer * _Nullable longPressTimer;

@property (nonatomic, strong) NSTimer * _Nullable loopInputTimer;


- (void)beginPress;
- (void)endPress;

@end

NS_ASSUME_NONNULL_END
