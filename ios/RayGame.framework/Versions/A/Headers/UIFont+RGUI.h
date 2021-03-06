/**
 * Tencent is pleased to support the open source community by making RGUI_iOS available.
 * Copyright (C) 2016-2020 THL A29 Limited, a Tencent company. All rights reserved.
 * Licensed under the MIT License (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at
 * http://opensource.org/licenses/MIT
 * Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License.
 */

//
//  UIFont+RGUI.h
//  rgui
//
//  Created by RGUI Team on 15/7/20.
//

#import <UIKit/UIKit.h>

#define UIFontLightMake(size) [UIFont rgui_lightSystemFontOfSize:size]
#define UIFontLightWithFont(_font) [UIFont rgui_lightSystemFontOfSize:_font.pointSize]
#define UIDynamicFontMake(_pointSize) [UIFont rgui_dynamicSystemFontOfSize:_pointSize weight:RGUIFontWeightNormal italic:NO]
#define UIDynamicFontMakeWithLimit(_pointSize, _upperLimitSize, _lowerLimitSize) [UIFont rgui_dynamicSystemFontOfSize:_pointSize upperLimitSize:_upperLimitSize lowerLimitSize:_lowerLimitSize weight:RGUIFontWeightNormal italic:NO]
#define UIDynamicFontBoldMake(_pointSize) [UIFont rgui_dynamicSystemFontOfSize:_pointSize weight:RGUIFontWeightBold italic:NO]
#define UIDynamicFontBoldMakeWithLimit(_pointSize, _upperLimitSize, _lowerLimitSize) [UIFont rgui_dynamicSystemFontOfSize:_pointSize upperLimitSize:_upperLimitSize lowerLimitSize:_lowerLimitSize weight:RGUIFontWeightBold italic:NO]
#define UIDynamicFontLightMake(_pointSize) [UIFont rgui_dynamicSystemFontOfSize:_pointSize weight:RGUIFontWeightLight italic:NO]
#define UIDynamicFontLightMakeWithLimit(_pointSize, _upperLimitSize, _lowerLimitSize) [UIFont rgui_dynamicSystemFontOfSize:_pointSize upperLimitSize:_upperLimitSize lowerLimitSize:_lowerLimitSize weight:RGUIFontWeightLight italic:NO]

typedef NS_ENUM(NSUInteger, RGUIFontWeight) {
    RGUIFontWeightLight,    // ?????? UIFontWeightLight
    RGUIFontWeightNormal,   // ?????? UIFontWeightRegular
    RGUIFontWeightBold      // ?????? UIFontWeightSemibold
};

@interface UIFont (RGUI)

/**
 *  ???????????????????????????
 *
 *  @param fontSize ????????????
 *
 *  @return ???????????????????????? UIFont ??????
 */
+ (UIFont *)rgui_lightSystemFontOfSize:(CGFloat)fontSize;

/**
 *  ???????????????????????? UIFont ???????????????
 *  @param size     ????????????
 *  @param weight   ????????????
 *  @param italic   ????????????
 */
+ (UIFont *)rgui_systemFontOfSize:(CGFloat)size
                           weight:(RGUIFontWeight)weight
                           italic:(BOOL)italic;

/**
 *  ??????????????????????????????????????????????????????????????? UIFont ???????????????
 *  @param  size    ????????????
 *  @param  weight  ??????
 *  @param  italic  ????????????
 *  @return         ??????????????????????????????????????? UIFont ??????
 */
+ (UIFont *)rgui_dynamicSystemFontOfSize:(CGFloat)size
                                  weight:(RGUIFontWeight)weight
                                  italic:(BOOL)italic;

/**
 *  ???????????????????????????UIFont????????????????????????????????????
 *
 *  @param pointSize        ?????????size
 *  @param upperLimitSize   ?????????????????????
 *  @param lowerLimitSize   ?????????????????????
 *  @param weight           ??????
 *  @param italic           ????????????
 *
 *  @return                 ??????????????????????????????????????? UIFont ??????
 */
+ (UIFont *)rgui_dynamicSystemFontOfSize:(CGFloat)pointSize
                          upperLimitSize:(CGFloat)upperLimitSize
                          lowerLimitSize:(CGFloat)lowerLimitSize
                                  weight:(RGUIFontWeight)weight
                                  italic:(BOOL)italic;

@end
