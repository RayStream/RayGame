/**
 * Tencent is pleased to support the open source community by making RGUI_iOS available.
 * Copyright (C) 2016-2020 THL A29 Limited, a Tencent company. All rights reserved.
 * Licensed under the MIT License (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at
 * http://opensource.org/licenses/MIT
 * Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License.
 */
//
//  UITextInputTraits+RGUI.h
//  RGUIKit
//
//  Created by MoLice on 2019/O/16.
//

#import <UIKit/UIKit.h>

@interface NSObject (RGUITextInput)

@end

@interface NSObject (RGUITextInput_Private)

/// 内部使用，标记某次 keyboardAppearance 的改动是由于 UIView+RGUITheme 内导致的，而非用户手动修改
@property(nonatomic, assign) UIKeyboardAppearance rgui_keyboardAppearance;

/// 内部使用，用于标志业务自己修改了 keyboardAppearance 的情况
@property(nonatomic, assign) BOOL rgui_hasCustomizedKeyboardAppearance;
@end
