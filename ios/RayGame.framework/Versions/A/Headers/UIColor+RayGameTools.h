//
//  UIColor+RayGameTools.h
//  RayGame
//
//  Created by Sim Tsai on 2021/1/18.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (RayGameTools)

+ (UIColor *)rg_colorWithHexString:(NSString *)hexString;

- (CGFloat)rg_alpha;

@end

NS_ASSUME_NONNULL_END
