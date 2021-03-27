//
//  RGKeyboardModel.h
//  RayGame
//
//  Created by Sim Tsai on 2021/1/15.
//

#import <Foundation/Foundation.h>
#import <YYModel/YYmodel.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, RGKeyboardKeyType) {
    RGKeyboardKeyTypeSingle = 0,
    RGKeyboardKeyTypeGameStick = 10,
    RGKeyboardKeyTypeCombine = 20,
    RGKeyboardKeyTypeMouse = 30,
};

typedef NS_ENUM(NSUInteger, RGKeyboardKeyGraphType) {
    RGKeyboardKeyGraphTypeCircle = 0,
    RGKeyboardKeyGraphTypeShape = 1,
    RGKeyboardKeyGraphTypeTriangle = 2,
};

@interface RGKeyboardModel : NSObject

@property (nonatomic, assign) NSInteger keyId;

@property (nonatomic, assign) RGKeyboardKeyType type;

@property (nonatomic, assign) RGKeyboardKeyGraphType shape;

@property (nonatomic, copy) NSString *codes;

@property (nonatomic, assign) CGRect framePercent;

@property (nonatomic, assign) CGFloat aspectRatio;

@property (nonatomic, assign) CGFloat angle;

@property (nonatomic, copy) NSString *showName;

@property (nonatomic, assign, readonly) BOOL isAlt;

@property (nonatomic, assign, readonly) BOOL isCtrl;

@property (nonatomic, assign, readonly) BOOL isShift;

@property (nonatomic, assign, readonly) BOOL isCaps;

+ (instancetype)keyboardModel;

+ (instancetype)gameStick;

@end

NS_ASSUME_NONNULL_END
