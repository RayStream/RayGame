//
//  NSDictionary+JSONTools.h
//  RayGame
//
//  Created by Sim Tsai on 2021/1/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface RGJsonTools: NSObject

+ (NSDictionary *)dictionaryWithBundle:(NSBundle*)bundle JsonFileName:(NSString*)fileName;

+ (NSArray *)arrayWithBundle:(NSBundle*)bundle JsonFileName:(NSString*)fileName;

+ (NSArray *)arrayWithJsonPath:(NSString*)jsonPath;

@end

NS_ASSUME_NONNULL_END
