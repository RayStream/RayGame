/**
 * Tencent is pleased to support the open source community by making RGUI_iOS available.
 * Copyright (C) 2016-2020 THL A29 Limited, a Tencent company. All rights reserved.
 * Licensed under the MIT License (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at
 * http://opensource.org/licenses/MIT
 * Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License.
 */

//
//  RGUIConfigurationMacros.h
//  rgui
//
//  Created by RGUI Team on 14-7-2.
//

#import "RGUIConfiguration.h"


/**
 *  提供一系列方便书写的宏，以便在代码里读取配置表的各种属性。
 *  @warning 请不要在 + load 方法里调用 RGUIConfigurationTemplate 或 RGUIConfigurationMacros 提供的宏，那个时机太早，可能导致 crash
 *  @waining 维护时，如果需要增加一个宏，则需要定义一个新的 RGUIConfiguration 属性。
 */


// 单例的宏

#define RGUICMI ({[[RGUIConfiguration sharedInstance] applyInitialTemplate];[RGUIConfiguration sharedInstance];})

/// 标志当前项目是否正使用配置表功能
#define RGUICMIActivated            [RGUICMI active]

#pragma mark - Global Color

// 基础颜色
#define UIColorClear                [RGUICMI clearColor]
#define UIColorWhite                [RGUICMI whiteColor]
#define UIColorBlack                [RGUICMI blackColor]
#define UIColorGray                 [RGUICMI grayColor]
#define UIColorGrayDarken           [RGUICMI grayDarkenColor]
#define UIColorGrayLighten          [RGUICMI grayLightenColor]
#define UIColorRed                  [RGUICMI redColor]
#define UIColorGreen                [RGUICMI greenColor]
#define UIColorBlue                 [RGUICMI blueColor]
#define UIColorYellow               [RGUICMI yellowColor]

// 功能颜色
#define UIColorLink                 [RGUICMI linkColor]                       // 全局统一文字链接颜色
#define UIColorDisabled             [RGUICMI disabledColor]                   // 全局统一文字disabled颜色
#define UIColorForBackground        [RGUICMI backgroundColor]                 // 全局统一的背景色
#define UIColorMask                 [RGUICMI maskDarkColor]                   // 全局统一的mask背景色
#define UIColorMaskWhite            [RGUICMI maskLightColor]                  // 全局统一的mask背景色，白色
#define UIColorSeparator            [RGUICMI separatorColor]                  // 全局分隔线颜色
#define UIColorSeparatorDashed      [RGUICMI separatorDashedColor]            // 全局分隔线颜色（虚线）
#define UIColorPlaceholder          [RGUICMI placeholderColor]                // 全局的输入框的placeholder颜色

// 测试用的颜色
#define UIColorTestRed              [RGUICMI testColorRed]
#define UIColorTestGreen            [RGUICMI testColorGreen]
#define UIColorTestBlue             [RGUICMI testColorBlue]

// 可操作的控件
#pragma mark - UIControl

#define UIControlHighlightedAlpha       [RGUICMI controlHighlightedAlpha]          // 一般control的Highlighted透明值
#define UIControlDisabledAlpha          [RGUICMI controlDisabledAlpha]             // 一般control的Disable透明值

// 按钮
#pragma mark - UIButton
#define ButtonHighlightedAlpha          [RGUICMI buttonHighlightedAlpha]           // 按钮Highlighted状态的透明度
#define ButtonDisabledAlpha             [RGUICMI buttonDisabledAlpha]              // 按钮Disabled状态的透明度
#define ButtonTintColor                 [RGUICMI buttonTintColor]                  // 普通按钮的颜色

#define GhostButtonColorBlue            [RGUICMI ghostButtonColorBlue]              // RGUIGhostButtonColorBlue的颜色
#define GhostButtonColorRed             [RGUICMI ghostButtonColorRed]               // RGUIGhostButtonColorRed的颜色
#define GhostButtonColorGreen           [RGUICMI ghostButtonColorGreen]             // RGUIGhostButtonColorGreen的颜色
#define GhostButtonColorGray            [RGUICMI ghostButtonColorGray]              // RGUIGhostButtonColorGray的颜色
#define GhostButtonColorWhite           [RGUICMI ghostButtonColorWhite]             // RGUIGhostButtonColorWhite的颜色

#define FillButtonColorBlue             [RGUICMI fillButtonColorBlue]              // RGUIFillButtonColorBlue的颜色
#define FillButtonColorRed              [RGUICMI fillButtonColorRed]               // RGUIFillButtonColorRed的颜色
#define FillButtonColorGreen            [RGUICMI fillButtonColorGreen]             // RGUIFillButtonColorGreen的颜色
#define FillButtonColorGray             [RGUICMI fillButtonColorGray]              // RGUIFillButtonColorGray的颜色
#define FillButtonColorWhite            [RGUICMI fillButtonColorWhite]             // RGUIFillButtonColorWhite的颜色

#pragma mark - TextInput
#define TextFieldTextColor              [RGUICMI textFieldTextColor]               // RGUITextField、RGUITextView 的文字颜色
#define TextFieldTintColor              [RGUICMI textFieldTintColor]               // RGUITextField、RGUITextView 的tintColor
#define TextFieldTextInsets             [RGUICMI textFieldTextInsets]              // RGUITextField 的内边距
#define KeyboardAppearance              [RGUICMI keyboardAppearance]

#pragma mark - UISwitch
#define SwitchOnTintColor               [RGUICMI switchOnTintColor]                 // UISwitch 打开时的背景色（除了圆点外的其他颜色）
#define SwitchOffTintColor              [RGUICMI switchOffTintColor]                // UISwitch 关闭时的背景色（除了圆点外的其他颜色）
#define SwitchTintColor                 [RGUICMI switchTintColor]                   // UISwitch 关闭时的周围边框颜色
#define SwitchThumbTintColor            [RGUICMI switchThumbTintColor]              // UISwitch 中间的操控圆点的颜色

#pragma mark - NavigationBar

#define NavBarContainerClasses                          [RGUICMI navBarContainerClasses]
#define NavBarHighlightedAlpha                          [RGUICMI navBarHighlightedAlpha]
#define NavBarDisabledAlpha                             [RGUICMI navBarDisabledAlpha]
#define NavBarButtonFont                                [RGUICMI navBarButtonFont]
#define NavBarButtonFontBold                            [RGUICMI navBarButtonFontBold]
#define NavBarBackgroundImage                           [RGUICMI navBarBackgroundImage]
#define NavBarShadowImage                               [RGUICMI navBarShadowImage]
#define NavBarShadowImageColor                          [RGUICMI navBarShadowImageColor]
#define NavBarBarTintColor                              [RGUICMI navBarBarTintColor]
#define NavBarStyle                                     [RGUICMI navBarStyle]
#define NavBarTintColor                                 [RGUICMI navBarTintColor]
#define NavBarTitleColor                                [RGUICMI navBarTitleColor]
#define NavBarTitleFont                                 [RGUICMI navBarTitleFont]
#define NavBarLargeTitleColor                           [RGUICMI navBarLargeTitleColor]
#define NavBarLargeTitleFont                            [RGUICMI navBarLargeTitleFont]
#define NavBarBarBackButtonTitlePositionAdjustment      [RGUICMI navBarBackButtonTitlePositionAdjustment]
#define NavBarBackIndicatorImage                        [RGUICMI navBarBackIndicatorImage]
#define SizeNavBarBackIndicatorImageAutomatically       [RGUICMI sizeNavBarBackIndicatorImageAutomatically]
#define NavBarCloseButtonImage                          [RGUICMI navBarCloseButtonImage]

#define NavBarLoadingMarginRight                        [RGUICMI navBarLoadingMarginRight]                          // titleView里左边的loading的右边距
#define NavBarAccessoryViewMarginLeft                   [RGUICMI navBarAccessoryViewMarginLeft]                     // titleView里的accessoryView的左边距
#define NavBarActivityIndicatorViewStyle                [RGUICMI navBarActivityIndicatorViewStyle]                  // titleView loading 的style
#define NavBarAccessoryViewTypeDisclosureIndicatorImage [RGUICMI navBarAccessoryViewTypeDisclosureIndicatorImage]   // titleView上倒三角的默认图片


#pragma mark - TabBar

#define TabBarContainerClasses                          [RGUICMI tabBarContainerClasses]
#define TabBarBackgroundImage                           [RGUICMI tabBarBackgroundImage]
#define TabBarBarTintColor                              [RGUICMI tabBarBarTintColor]
#define TabBarShadowImageColor                          [RGUICMI tabBarShadowImageColor]
#define TabBarStyle                                     [RGUICMI tabBarStyle]
#define TabBarItemTitleFont                             [RGUICMI tabBarItemTitleFont]
#define TabBarItemTitleFontSelected                     [RGUICMI tabBarItemTitleFontSelected]
#define TabBarItemTitleColor                            [RGUICMI tabBarItemTitleColor]
#define TabBarItemTitleColorSelected                    [RGUICMI tabBarItemTitleColorSelected]
#define TabBarItemImageColor                            [RGUICMI tabBarItemImageColor]
#define TabBarItemImageColorSelected                    [RGUICMI tabBarItemImageColorSelected]

#pragma mark - Toolbar

#define ToolBarContainerClasses                         [RGUICMI toolBarContainerClasses]
#define ToolBarHighlightedAlpha                         [RGUICMI toolBarHighlightedAlpha]
#define ToolBarDisabledAlpha                            [RGUICMI toolBarDisabledAlpha]
#define ToolBarTintColor                                [RGUICMI toolBarTintColor]
#define ToolBarTintColorHighlighted                     [RGUICMI toolBarTintColorHighlighted]
#define ToolBarTintColorDisabled                        [RGUICMI toolBarTintColorDisabled]
#define ToolBarBackgroundImage                          [RGUICMI toolBarBackgroundImage]
#define ToolBarBarTintColor                             [RGUICMI toolBarBarTintColor]
#define ToolBarShadowImageColor                         [RGUICMI toolBarShadowImageColor]
#define ToolBarStyle                                    [RGUICMI toolBarStyle]
#define ToolBarButtonFont                               [RGUICMI toolBarButtonFont]


#pragma mark - SearchBar

#define SearchBarTextFieldBorderColor                   [RGUICMI searchBarTextFieldBorderColor]
#define SearchBarTextFieldBackgroundImage               [RGUICMI searchBarTextFieldBackgroundImage]
#define SearchBarBackgroundImage                        [RGUICMI searchBarBackgroundImage]
#define SearchBarTintColor                              [RGUICMI searchBarTintColor]
#define SearchBarTextColor                              [RGUICMI searchBarTextColor]
#define SearchBarPlaceholderColor                       [RGUICMI searchBarPlaceholderColor]
#define SearchBarFont                                   [RGUICMI searchBarFont]
#define SearchBarSearchIconImage                        [RGUICMI searchBarSearchIconImage]
#define SearchBarClearIconImage                         [RGUICMI searchBarClearIconImage]
#define SearchBarTextFieldCornerRadius                  [RGUICMI searchBarTextFieldCornerRadius]


#pragma mark - TableView / TableViewCell

#define TableViewEstimatedHeightEnabled                 [RGUICMI tableViewEstimatedHeightEnabled]            // 是否要开启全局 UITableView 的 estimatedRow(Section/Footer)Height

#define TableViewBackgroundColor                        [RGUICMI tableViewBackgroundColor]                   // 普通列表的背景色
#define TableSectionIndexColor                          [RGUICMI tableSectionIndexColor]                     // 列表右边索引条的文字颜色
#define TableSectionIndexBackgroundColor                [RGUICMI tableSectionIndexBackgroundColor]           // 列表右边索引条的背景色
#define TableSectionIndexTrackingBackgroundColor        [RGUICMI tableSectionIndexTrackingBackgroundColor]   // 列表右边索引条按下时的背景色
#define TableViewSeparatorColor                         [RGUICMI tableViewSeparatorColor]                    // 列表分隔线颜色

#define TableViewCellNormalHeight                       [RGUICMI tableViewCellNormalHeight]                  // RGUITableView 的默认 cell 高度
#define TableViewCellTitleLabelColor                    [RGUICMI tableViewCellTitleLabelColor]               // cell的title颜色
#define TableViewCellDetailLabelColor                   [RGUICMI tableViewCellDetailLabelColor]              // cell的detailTitle颜色
#define TableViewCellBackgroundColor                    [RGUICMI tableViewCellBackgroundColor]               // 列表 cell 的背景色
#define TableViewCellSelectedBackgroundColor            [RGUICMI tableViewCellSelectedBackgroundColor]       // 列表 cell 按下时的背景色
#define TableViewCellWarningBackgroundColor             [RGUICMI tableViewCellWarningBackgroundColor]        // 列表 cell 在提醒状态下的背景色

#define TableViewCellDisclosureIndicatorImage           [RGUICMI tableViewCellDisclosureIndicatorImage]      // 列表 cell 右边的箭头图片
#define TableViewCellCheckmarkImage                     [RGUICMI tableViewCellCheckmarkImage]                // 列表 cell 右边的打钩checkmark
#define TableViewCellDetailButtonImage                  [RGUICMI tableViewCellDetailButtonImage]             // 列表 cell 右边的 i 按钮
#define TableViewCellSpacingBetweenDetailButtonAndDisclosureIndicator [RGUICMI tableViewCellSpacingBetweenDetailButtonAndDisclosureIndicator]   // 列表 cell 右边的 i 按钮和向右箭头之间的间距（仅当两者都使用了自定义图片并且同时显示时才生效）

#define TableViewSectionHeaderBackgroundColor           [RGUICMI tableViewSectionHeaderBackgroundColor]
#define TableViewSectionFooterBackgroundColor           [RGUICMI tableViewSectionFooterBackgroundColor]
#define TableViewSectionHeaderFont                      [RGUICMI tableViewSectionHeaderFont]
#define TableViewSectionFooterFont                      [RGUICMI tableViewSectionFooterFont]
#define TableViewSectionHeaderTextColor                 [RGUICMI tableViewSectionHeaderTextColor]
#define TableViewSectionFooterTextColor                 [RGUICMI tableViewSectionFooterTextColor]
#define TableViewSectionHeaderAccessoryMargins          [RGUICMI tableViewSectionHeaderAccessoryMargins]
#define TableViewSectionFooterAccessoryMargins          [RGUICMI tableViewSectionFooterAccessoryMargins]
#define TableViewSectionHeaderContentInset              [RGUICMI tableViewSectionHeaderContentInset]
#define TableViewSectionFooterContentInset              [RGUICMI tableViewSectionFooterContentInset]

#define TableViewGroupedBackgroundColor                 [RGUICMI tableViewGroupedBackgroundColor]               // Grouped 类型的 RGUITableView 的背景色
#define TableViewGroupedSeparatorColor                  [RGUICMI tableViewGroupedSeparatorColor]                // Grouped 类型的 RGUITableView 分隔线颜色
#define TableViewGroupedCellTitleLabelColor             [RGUICMI tableViewGroupedCellTitleLabelColor]           // Grouped 类型的列表的 RGUITableViewCell 的标题颜色
#define TableViewGroupedCellDetailLabelColor            [RGUICMI tableViewGroupedCellDetailLabelColor]          // Grouped 类型的列表的 RGUITableViewCell 的副标题颜色
#define TableViewGroupedCellBackgroundColor             [RGUICMI tableViewGroupedCellBackgroundColor]           // Grouped 类型的列表的 RGUITableViewCell 的背景色
#define TableViewGroupedCellSelectedBackgroundColor     [RGUICMI tableViewGroupedCellSelectedBackgroundColor]   // Grouped 类型的列表的 RGUITableViewCell 点击时的背景色
#define TableViewGroupedCellWarningBackgroundColor      [RGUICMI tableViewGroupedCellWarningBackgroundColor]    // Grouped 类型的列表的 RGUITableViewCell 在提醒状态下的背景色
#define TableViewGroupedSectionHeaderFont               [RGUICMI tableViewGroupedSectionHeaderFont]
#define TableViewGroupedSectionFooterFont               [RGUICMI tableViewGroupedSectionFooterFont]
#define TableViewGroupedSectionHeaderTextColor          [RGUICMI tableViewGroupedSectionHeaderTextColor]
#define TableViewGroupedSectionFooterTextColor          [RGUICMI tableViewGroupedSectionFooterTextColor]
#define TableViewGroupedSectionHeaderAccessoryMargins   [RGUICMI tableViewGroupedSectionHeaderAccessoryMargins]
#define TableViewGroupedSectionFooterAccessoryMargins   [RGUICMI tableViewGroupedSectionFooterAccessoryMargins]
#define TableViewGroupedSectionHeaderDefaultHeight      [RGUICMI tableViewGroupedSectionHeaderDefaultHeight]
#define TableViewGroupedSectionFooterDefaultHeight      [RGUICMI tableViewGroupedSectionFooterDefaultHeight]
#define TableViewGroupedSectionHeaderContentInset       [RGUICMI tableViewGroupedSectionHeaderContentInset]
#define TableViewGroupedSectionFooterContentInset       [RGUICMI tableViewGroupedSectionFooterContentInset]

#define TableViewInsetGroupedCornerRadius               [RGUICMI tableViewInsetGroupedCornerRadius] // InsetGrouped 类型的 UITableView 内 cell 的圆角值
#define TableViewInsetGroupedHorizontalInset            [RGUICMI tableViewInsetGroupedHorizontalInset] // InsetGrouped 类型的 UITableView 内的左右缩进值
#define TableViewInsetGroupedBackgroundColor            [RGUICMI tableViewInsetGroupedBackgroundColor] // InsetGrouped 类型的 UITableView 的背景色
#define TableViewInsetGroupedSeparatorColor                  [RGUICMI tableViewInsetGroupedSeparatorColor]                // InsetGrouped 类型的 RGUITableView 分隔线颜色
#define TableViewInsetGroupedCellTitleLabelColor             [RGUICMI tableViewInsetGroupedCellTitleLabelColor]           // InsetGrouped 类型的列表的 RGUITableViewCell 的标题颜色
#define TableViewInsetGroupedCellDetailLabelColor            [RGUICMI tableViewInsetGroupedCellDetailLabelColor]          // InsetGrouped 类型的列表的 RGUITableViewCell 的副标题颜色
#define TableViewInsetGroupedCellBackgroundColor             [RGUICMI tableViewInsetGroupedCellBackgroundColor]           // InsetGrouped 类型的列表的 RGUITableViewCell 的背景色
#define TableViewInsetGroupedCellSelectedBackgroundColor     [RGUICMI tableViewInsetGroupedCellSelectedBackgroundColor]   // InsetGrouped 类型的列表的 RGUITableViewCell 点击时的背景色
#define TableViewInsetGroupedCellWarningBackgroundColor      [RGUICMI tableViewInsetGroupedCellWarningBackgroundColor]    // InsetGrouped 类型的列表的 RGUITableViewCell 在提醒状态下的背景色
#define TableViewInsetGroupedSectionHeaderFont               [RGUICMI tableViewInsetGroupedSectionHeaderFont]
#define TableViewInsetGroupedSectionFooterFont               [RGUICMI tableViewInsetGroupedSectionFooterFont]
#define TableViewInsetGroupedSectionHeaderTextColor          [RGUICMI tableViewInsetGroupedSectionHeaderTextColor]
#define TableViewInsetGroupedSectionFooterTextColor          [RGUICMI tableViewInsetGroupedSectionFooterTextColor]
#define TableViewInsetGroupedSectionHeaderAccessoryMargins   [RGUICMI tableViewInsetGroupedSectionHeaderAccessoryMargins]
#define TableViewInsetGroupedSectionFooterAccessoryMargins   [RGUICMI tableViewInsetGroupedSectionFooterAccessoryMargins]
#define TableViewInsetGroupedSectionHeaderDefaultHeight      [RGUICMI tableViewInsetGroupedSectionHeaderDefaultHeight]
#define TableViewInsetGroupedSectionFooterDefaultHeight      [RGUICMI tableViewInsetGroupedSectionFooterDefaultHeight]
#define TableViewInsetGroupedSectionHeaderContentInset       [RGUICMI tableViewInsetGroupedSectionHeaderContentInset]
#define TableViewInsetGroupedSectionFooterContentInset       [RGUICMI tableViewInsetGroupedSectionFooterContentInset]

#pragma mark - UIWindowLevel
#define UIWindowLevelRGUIAlertView                      [RGUICMI windowLevelRGUIAlertView]
#define UIWindowLevelRGUIConsole                        [RGUICMI windowLevelRGUIConsole]

#pragma mark - RGUILog
#define ShouldPrintDefaultLog                           [RGUICMI shouldPrintDefaultLog]
#define ShouldPrintInfoLog                              [RGUICMI shouldPrintInfoLog]
#define ShouldPrintWarnLog                              [RGUICMI shouldPrintWarnLog]
#define ShouldPrintRGUIWarnLogToConsole                 [RGUICMI shouldPrintRGUIWarnLogToConsole] // 是否在出现 RGUILogWarn 时自动把这些 log 以 RGUIConsole 的方式显示到设备屏幕上

#pragma mark - RGUIBadge
#define BadgeBackgroundColor                            [RGUICMI badgeBackgroundColor]
#define BadgeTextColor                                  [RGUICMI badgeTextColor]
#define BadgeFont                                       [RGUICMI badgeFont]
#define BadgeContentEdgeInsets                          [RGUICMI badgeContentEdgeInsets]
#define BadgeOffset                                     [RGUICMI badgeOffset]
#define BadgeOffsetLandscape                            [RGUICMI badgeOffsetLandscape]
#define BadgeCenterOffset                               [RGUICMI badgeCenterOffset]
#define BadgeCenterOffsetLandscape                      [RGUICMI badgeCenterOffsetLandscape]

#define UpdatesIndicatorColor                           [RGUICMI updatesIndicatorColor]
#define UpdatesIndicatorSize                            [RGUICMI updatesIndicatorSize]
#define UpdatesIndicatorOffset                          [RGUICMI updatesIndicatorOffset]
#define UpdatesIndicatorOffsetLandscape                 [RGUICMI updatesIndicatorOffsetLandscape]
#define UpdatesIndicatorCenterOffset                    [RGUICMI updatesIndicatorCenterOffset]
#define UpdatesIndicatorCenterOffsetLandscape           [RGUICMI updatesIndicatorCenterOffsetLandscape]

#pragma mark - Others

#define AutomaticCustomNavigationBarTransitionStyle [RGUICMI automaticCustomNavigationBarTransitionStyle] // 界面 push/pop 时是否要自动根据两个界面的 barTintColor/backgroundImage/shadowImage 的样式差异来决定是否使用自定义的导航栏效果
#define SupportedOrientationMask                        [RGUICMI supportedOrientationMask]          // 默认支持的横竖屏方向
#define AutomaticallyRotateDeviceOrientation            [RGUICMI automaticallyRotateDeviceOrientation]  // 是否在界面切换或 viewController.supportedOrientationMask 发生变化时自动旋转屏幕，默认为 NO
#define StatusbarStyleLightInitially                    [RGUICMI statusbarStyleLightInitially]      // 默认的状态栏内容是否使用白色，默认为 NO，在 iOS 13 下会自动根据是否 Dark Mode 而切换样式，iOS 12 及以前则为黑色
#define NeedsBackBarButtonItemTitle                     [RGUICMI needsBackBarButtonItemTitle]       // 全局是否需要返回按钮的title，不需要则只显示一个返回image
#define HidesBottomBarWhenPushedInitially               [RGUICMI hidesBottomBarWhenPushedInitially] // RGUICommonViewController.hidesBottomBarWhenPushed 的初始值，默认为 NO，以保持与系统默认值一致，但通常建议改为 YES，因为一般只有 tabBar 首页那几个界面要求为 NO
#define PreventConcurrentNavigationControllerTransitions [RGUICMI preventConcurrentNavigationControllerTransitions] // PreventConcurrentNavigationControllerTransitions : 自动保护 RGUINavigationController 在上一次 push/pop 尚未结束的时候就进行下一次 push/pop 的行为，避免产生 crash
#define NavigationBarHiddenInitially                    [RGUICMI navigationBarHiddenInitially]      // preferredNavigationBarHidden 的初始值，默认为NO
#define ShouldFixTabBarTransitionBugInIPhoneX           [RGUICMI shouldFixTabBarTransitionBugInIPhoneX] // 是否需要自动修复 iOS 11 下，iPhone X 的设备在 push 界面时，tabBar 会瞬间往上跳的 bug
#define ShouldFixTabBarSafeAreaInsetsBug [RGUICMI shouldFixTabBarSafeAreaInsetsBug] // 是否要对 iOS 11 及以后的版本修复当存在 UITabBar 时，UIScrollView 的 inset.bottom 可能错误的 bug（issue #218 #934），默认为 YES
#define ShouldFixSearchBarMaskViewLayoutBug             [RGUICMI shouldFixSearchBarMaskViewLayoutBug] // 是否自动修复 UISearchController.searchBar 被当作 tableHeaderView 使用时可能出现的布局 bug(issue #950)
#define SendAnalyticsToRGUITeam                         [RGUICMI sendAnalyticsToRGUITeam] // 是否允许在 DEBUG 模式下上报 Bundle Identifier 和 Display Name 给 RGUI 统计用
#define DynamicPreferredValueForIPad                    [RGUICMI dynamicPreferredValueForIPad] // 当 iPad 处于 Slide Over 或 Split View 分屏模式下，宏 `PreferredValueForXXX` 是否把 iPad 视为某种屏幕宽度近似的 iPhone 来取值。
#define IgnoreKVCAccessProhibited                       [RGUICMI ignoreKVCAccessProhibited] // 是否全局忽略 iOS 13 对 KVC 访问 UIKit 私有属性的限制
#define AdjustScrollIndicatorInsetsByContentInsetAdjustment [RGUICMI adjustScrollIndicatorInsetsByContentInsetAdjustment] // 当将 UIScrollView.contentInsetAdjustmentBehavior 设为 UIScrollViewContentInsetAdjustmentNever 时，是否自动将 UIScrollView.automaticallyAdjustsScrollIndicatorInsets 设为 NO，以保证原本在 iOS 12 下的代码不用修改就能在 iOS 13 下正常控制滚动条的位置。

