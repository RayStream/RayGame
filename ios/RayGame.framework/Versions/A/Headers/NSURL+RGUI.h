/**
 * Tencent is pleased to support the open source community by making RGUI_iOS available.
 * Copyright (C) 2016-2020 THL A29 Limited, a Tencent company. All rights reserved.
 * Licensed under the MIT License (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at
 * http://opensource.org/licenses/MIT
 * Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License.
 */

//
//  NSURL+RGUI.h
//  RGUIKit
//
//  Created by RGUI Team on 2018/11/11.
//

#import <UIKit/UIKit.h>

@interface NSURL (RGUI)

/**
 *  获取当前 query 的参数列表。
 *
 *  @return query 参数列表，以字典返回。如果 absoluteString 为 nil 则返回 nil
 */
@property(nonatomic, copy, readonly) NSDictionary<NSString *, NSString *> *rgui_queryItems;

@end
