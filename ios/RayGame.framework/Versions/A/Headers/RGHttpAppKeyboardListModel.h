//
//  RGHttpAppKeyboardListModel.h
//  RayGame
//
//  Created by Sim Tsai on 2021/3/18.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface RGHttpAppKeyboardSchemeInfoModel : NSObject


@property (nonatomic, assign) NSInteger schemId;

@property (nonatomic, copy) NSString *name;

@property (nonatomic, assign) NSInteger codeId;

@property (nonatomic, assign) NSInteger appId;

@property (nonatomic, assign) BOOL isDefault;

@property (nonatomic, assign) BOOL isCustom;

@end

@interface RGHttpAppKeyboardListModel : NSObject

@property (nonatomic, strong) NSArray<RGHttpAppKeyboardSchemeInfoModel *> *custom;

@property (nonatomic, strong) NSArray<RGHttpAppKeyboardSchemeInfoModel *> *common;

@end

NS_ASSUME_NONNULL_END
