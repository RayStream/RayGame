//
//  RGHttpCommandModel.h
//  RayGame
//
//  Created by Sim Tsai on 2021/2/23.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface RGHttpCommonModel : NSObject

@property (nonatomic, copy) NSString *code;

@property (nonatomic, strong) NSDictionary *data;


@end

NS_ASSUME_NONNULL_END
