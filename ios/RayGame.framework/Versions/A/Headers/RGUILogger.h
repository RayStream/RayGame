/**
 * Tencent is pleased to support the open source community by making RGUI_iOS available.
 * Copyright (C) 2016-2020 THL A29 Limited, a Tencent company. All rights reserved.
 * Licensed under the MIT License (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at
 * http://opensource.org/licenses/MIT
 * Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License.
 */
//
//  RGUILogger.h
//  RGUIKit
//
//  Created by RGUI Team on 2018/1/24.
//
#import <Foundation/Foundation.h>

@class RGUILogNameManager;
@class RGUILogItem;

@protocol RGUILoggerDelegate <NSObject>

@optional

/**
 *  当每一个 enabled 的 RGUILog 被使用时都会走到这里，可以由业务自行决定要如何处理这些 log，如果没实现这个方法，默认用 NSLog() 打印内容
 *  @param file 当前的文件的本地完整路径，可通过 file.lastPathComponent 获取文件名
 *  @param line 当前 log 命令在该文件里的代码行数
 *  @param func 当前 log 命令所在的方法名
 *  @param logItem 当前 log 命令对应的 RGUILogItem，可得知该 log 的 level
 *  @param defaultString RGUI 默认拼好的 log 内容
 */
- (void)printRGUILogWithFile:(nonnull NSString *)file line:(int)line func:(nullable NSString *)func logItem:(nullable RGUILogItem *)logItem defaultString:(nullable NSString *)defaultString;

/**
 *  当某个 logName 的 enabled 发生变化时，通知到 delegate。注意如果是新创建某个 logName 也会走到这里。
 *  @param logName 变化的 logName
 *  @param enabled 变化后的值
 */
- (void)RGUILogName:(nonnull NSString *)logName didChangeEnabled:(BOOL)enabled;

/**
 *  某个 logName 被删除时通知到 delegate
 *  @param logName 被删除的 logName
 */
- (void)RGUILogNameDidRemove:(nonnull NSString *)logName;

@end

@interface RGUILogger : NSObject

@property(nullable, nonatomic, weak) id<RGUILoggerDelegate> delegate;
@property(nonnull, nonatomic, strong) RGUILogNameManager *logNameManager;

+ (nonnull instancetype)sharedInstance;
- (void)printLogWithFile:(nullable const char *)file line:(int)line func:(nonnull const char *)func logItem:(nullable RGUILogItem *)logItem;
@end
