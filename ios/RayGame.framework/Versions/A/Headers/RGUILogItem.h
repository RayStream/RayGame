/**
 * Tencent is pleased to support the open source community by making RGUI_iOS available.
 * Copyright (C) 2016-2020 THL A29 Limited, a Tencent company. All rights reserved.
 * Licensed under the MIT License (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at
 * http://opensource.org/licenses/MIT
 * Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License.
 */

//
//  RGUILogItem.h
//  RGUIKit
//
//  Created by RGUI Team on 2018/1/24.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, RGUILogLevel) {
    RGUILogLevelDefault,    // 当使用 RGUILog() 时使用的等级
    RGUILogLevelInfo,       // 当使用 RGUILogInfo() 时使用的等级，比 RGUILogLevelDefault 要轻量，适用于一些无关紧要的信息
    RGUILogLevelWarn        // 当使用 RGUILogWarn() 时使用的等级，最重，适用于一些异常或者严重错误的场景
};

/// 每一条 RGUILog 日志都以 RGUILogItem 的形式包装起来
@interface RGUILogItem : NSObject

/// 日志的等级，可通过 RGUIConfigurationTemplate 配置表控制全局每个 level 是否可用
@property(nonatomic, assign) RGUILogLevel level;
@property(nonatomic, copy, readonly) NSString *levelDisplayString;

/// 可利用 name 字段为日志分类，RGUILogNameManager 可全局控制某一个 name 是否可用
@property(nullable, nonatomic, copy) NSString *name;

/// 日志的内容
@property(nonatomic, copy) NSString *logString;

/// 当前 logItem 对应的 name 是否可用，可通过 RGUILogNameManager 控制，默认为 YES
@property(nonatomic, assign) BOOL enabled;

+ (nonnull instancetype)logItemWithLevel:(RGUILogLevel)level name:(nullable NSString *)name logString:(nonnull NSString *)logString, ... NS_FORMAT_FUNCTION(3, 4);
@end

NS_ASSUME_NONNULL_END
