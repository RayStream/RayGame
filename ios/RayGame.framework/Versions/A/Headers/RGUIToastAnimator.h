/**
 * Tencent is pleased to support the open source community by making RGUI_iOS available.
 * Copyright (C) 2016-2020 THL A29 Limited, a Tencent company. All rights reserved.
 * Licensed under the MIT License (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at
 * http://opensource.org/licenses/MIT
 * Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License.
 */

//
//  RGUIToastAnimator.h
//  rgui
//
//  Created by RGUI Team on 2016/12/12.
//

#import <Foundation/Foundation.h>

@class RGUIToastView;

/**
 * `RGUIToastAnimatorDelegate`是所有`RGUIToastAnimator`或者其子类必须遵循的协议，是整个动画过程实现的地方。
 */
@protocol RGUIToastAnimatorDelegate <NSObject>

@required

- (void)showWithCompletion:(void (^)(BOOL finished))completion;
- (void)hideWithCompletion:(void (^)(BOOL finished))completion;
- (BOOL)isShowing;
- (BOOL)isAnimating;
@end

typedef NS_ENUM(NSInteger, RGUIToastAnimationType) {
    RGUIToastAnimationTypeFade      = 0,
    RGUIToastAnimationTypeZoom,
    RGUIToastAnimationTypeSlide
};

/**
 * `RGUIToastAnimator`可以让你通过实现一些协议来自定义ToastView显示和隐藏的动画。你可以继承`RGUIToastAnimator`，然后实现`RGUIToastAnimatorDelegate`中的方法，即可实现自定义的动画。RGUIToastAnimator默认也提供了几种type的动画：1、RGUIToastAnimationTypeFade；2、RGUIToastAnimationTypeZoom；3、RGUIToastAnimationTypeSlide；
 */
@interface RGUIToastAnimator : NSObject <RGUIToastAnimatorDelegate>

/**
 * 初始化方法，请务必使用这个方法来初始化。
 *
 * @param toastView 要使用这个animator的RGUIToastView实例。
 */
- (instancetype)initWithToastView:(RGUIToastView *)toastView NS_DESIGNATED_INITIALIZER;

/**
 * 获取初始化传进来的RGUIToastView。
 */
@property(nonatomic, weak, readonly) RGUIToastView *toastView;

/**
 * 指定RGUIToastAnimator做动画的类型type。此功能暂时未实现，目前所有动画类型都是RGUIToastAnimationTypeFade。
 */
@property(nonatomic, assign) RGUIToastAnimationType animationType;

@end
