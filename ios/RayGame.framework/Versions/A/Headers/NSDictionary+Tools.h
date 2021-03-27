//
//  NSDictionary+Tools.h
//  RayCloudGameDemo
//
//  Created by Sim Tsai on 2021/1/12.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSDictionary (Tools)

- (NSString *)toJsonString;

+ (NSDictionary *)dictionaryWithJSON:(id)json;

@end

NS_ASSUME_NONNULL_END
