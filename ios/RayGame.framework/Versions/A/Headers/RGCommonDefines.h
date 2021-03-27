//
//  RGCommonDefines.h
//  Pods
//
//  Created by Sim Tsai on 2021/1/18.
//

#ifndef RGCommonDefines_h
#define RGCommonDefines_h

#define RayGameBundle [NSBundle bundleForClass:self.class]
#define RayGameImage(name) [UIImage imageNamed:name inBundle:RayGameBundle compatibleWithTraitCollection:nil]

/// 屏幕的高度
#define RGScreenHeight [[UIScreen mainScreen] bounds].size.height

/// 屏幕的宽度
#define RGScreenWidth [[UIScreen mainScreen] bounds].size.width

#define RGScreenScale ([[UIScreen mainScreen] scale])


#ifndef    weakify
#if __has_feature(objc_arc)

#define weakify( x ) \
_Pragma("clang diagnostic push") \
_Pragma("clang diagnostic ignored \"-Wshadow\"") \
autoreleasepool{} __weak __typeof__(x) __weak_##x##__ = x; \
_Pragma("clang diagnostic pop")

#else

#define weakify( x ) \
_Pragma("clang diagnostic push") \
_Pragma("clang diagnostic ignored \"-Wshadow\"") \
autoreleasepool{} __block __typeof__(x) __block_##x##__ = x; \
_Pragma("clang diagnostic pop")

#endif
#endif

#ifndef    strongify
#if __has_feature(objc_arc)

#define strongify( x ) \
_Pragma("clang diagnostic push") \
_Pragma("clang diagnostic ignored \"-Wshadow\"") \
try{} @finally{} __typeof__(x) x = __weak_##x##__; \
_Pragma("clang diagnostic pop")

#else

#define strongify( x ) \
_Pragma("clang diagnostic push") \
_Pragma("clang diagnostic ignored \"-Wshadow\"") \
try{} @finally{} __typeof__(x) x = __block_##x##__; \
_Pragma("clang diagnostic pop")

#endif
#endif

#endif /* RGCommonDefines_h */
