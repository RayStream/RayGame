//
//  UIImage+RagGameTools.h
//  RayGame
//
//  Created by Sim Tsai on 2021/1/18.
//

#import <UIKit/UIKit.h>
#import "RGUIHelper.h"

#ifdef DEBUG
    #define CGContextInspectContext(context) [RGUIHelper inspectContextIfInvalidatedInDebugMode:context]
#else
    #define CGContextInspectContext(context) if(![RGUIHelper inspectContextIfInvalidatedInReleaseMode:context]){return nil;}
#endif

#define CGContextInspectSize(size) [RGUIHelper inspectContextSize:size]

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, RGUIImageGradientStartPoint) {
    RGUIImageGradientStartPointLeft,
    RGUIImageGradientStartPointRight,
    RGUIImageGradientStartPointTop,
    RGUIImageGradientStartPointBottom,
    RGUIImageGradientStartPointTopRight,
    RGUIImageGradientStartPointBottomRight,
    RGUIImageGradientStartPointTopLeft,
    RGUIImageGradientStartPointBotoomLeft
};

@interface UIImage (RagGameTools)

+ (instancetype)rg_gradientImageWithSize:(CGSize)size
                              startColor:(UIColor*)startColor
                                endColor:(UIColor*)endColor
                               direction:(RGUIImageGradientStartPoint)direction;


- (UIImage *)rg_imageWithBorderColor:(UIColor *)borderColor
                         borderWidth:(CGFloat)borderWidth
                        cornerRadius:(CGFloat)cornerRadius;

+ (UIImage *)rg_imageWithColor:(UIColor *)color size:(CGSize)size cornerRadius:(CGFloat)cornerRadius;

+ (UIImage *)imageFromBRGAData:(NSData *)data imageSize:(CGSize)imageSize;


@end

NS_ASSUME_NONNULL_END
