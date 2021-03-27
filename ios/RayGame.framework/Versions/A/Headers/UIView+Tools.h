//
//  UIView+Tools.h
//  RayGame
//
//  Created by Sim Tsai on 2021/1/15.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (Tools)

- (UIImage *)toImage;

@property (nonatomic, assign, readonly) UIEdgeInsets rg_safeAreaInsets;

- (void)loadFromNib;

- (void)roundCorners:(CACornerMask)corners radius:(CGFloat)radius;

- (void)removeAllGestureRecognizers;

@end

NS_ASSUME_NONNULL_END
