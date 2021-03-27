//
//  RGGameListModel.h
//  RayGame
//
//  Created by Sim Tsai on 2021/2/23.
//

#import <Foundation/Foundation.h>
#import <RayGame/RGGameInfoModel.h>

NS_ASSUME_NONNULL_BEGIN

/// 游戏列表 Model
@interface RGGameListModel : NSObject

/// 当前页数
@property (nonatomic, assign) NSInteger current;

/// 总页数
@property (nonatomic, assign) NSInteger pages;

/// 游戏信息
@property (nonatomic, strong) NSArray<RGGameInfoModel *> *records;

@end

NS_ASSUME_NONNULL_END
