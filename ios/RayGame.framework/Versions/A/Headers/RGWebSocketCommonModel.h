//
//  RGWebSocketCommonModel.h
//  RayCloudGameDemo
//
//  Created by Sim Tsai on 2021/1/13.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface RGWebSocketCommonModel : NSObject

@property (nonatomic, copy) NSString *action;

@property (nonatomic, strong) NSDictionary *data;

@property (nonatomic, assign) NSInteger code;

@end

NS_ASSUME_NONNULL_END
