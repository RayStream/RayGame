/**
 * Tencent is pleased to support the open source community by making RGUI_iOS available.
 * Copyright (C) 2016-2020 THL A29 Limited, a Tencent company. All rights reserved.
 * Licensed under the MIT License (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at
 * http://opensource.org/licenses/MIT
 * Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License.
 */

//
//  UITextField+RGUI.h
//  rgui
//
//  Created by RGUI Team on 2017/3/29.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UITextField (RGUI)

/// UITextField只有selectedTextRange属性（在<UITextInput>协议里定义），这里拓展了一个方法可以将UITextRange类型的selectedTextRange转换为NSRange类型的selectedRange
@property(nonatomic, assign, readonly) NSRange rgui_selectedRange;

/// 输入框右边的 clearButton，在 UITextField 初始化后就存在
@property(nullable, nonatomic, weak, readonly) UIButton *rgui_clearButton;

/// 自定义 clearButton 的图片，设置成nil，恢复到系统默认的图片
@property(nullable, nonatomic, strong) UIImage *rgui_clearButtonImage UI_APPEARANCE_SELECTOR;

/**
 *  convert UITextRange to NSRange, for example, [self rgui_convertNSRangeFromUITextRange:self.markedTextRange]
 */
- (NSRange)rgui_convertNSRangeFromUITextRange:(UITextRange *)textRange;

/**
 *  convert NSRange to UITextRange
 *  @return return nil if range is invalidate.
 */
- (nullable UITextRange *)rgui_convertUITextRangeFromNSRange:(NSRange)range;

@end

NS_ASSUME_NONNULL_END
