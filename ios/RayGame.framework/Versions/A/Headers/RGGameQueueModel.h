//
//  RGGameQueueModel.h
//  RayCloudGameDemo
//
//  Created by Sim Tsai on 2021/1/13.
//

#import <Foundation/Foundation.h>
#import <YYModel/YYModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface RGGameQueueModel : NSObject

@property (nonatomic, assign) NSInteger queueNum;

@property (nonatomic, copy) NSString *token;

@end

NS_ASSUME_NONNULL_END
