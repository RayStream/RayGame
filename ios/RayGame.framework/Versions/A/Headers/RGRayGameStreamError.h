//
//  RGRayGameStreamError.h
//  RayGame
//
//  Created by Sim Tsai on 2021/2/23.
//

#ifndef RGRayGameStreamError_h
#define RGRayGameStreamError_h

#import <Foundation/Foundation.h>

FOUNDATION_EXPORT NSErrorDomain const RGRayGameStreamErrorDomain;



/// SDK 错误码
NS_ERROR_ENUM(RGRayGameStreamErrorDomain)
{
    /// 未知错误
    RGRayGameStreamErrorUnknow = -1,
    
    /// SDK 初始化失败
    RGRayGameStreamErrorInitFail = -100001,
    
    /// Token 失效
    RGRayGameStreamErrorTokenInvalid = -20000,
    
    RGRayGameStreamErrorAnotherUserConnected = -20001,
    
    RGRayGameStreamErrorStartGameFail = -30000,
    RGRayGameStreamErrorStartGameFailGameRunning = -30001,
    RGRayGameStreamErrorStartGameFailSysExitGame = -30002,

    
 
};


#define RGError(errorCode, description) [NSError errorWithDomain:RGRayGameStreamErrorDomain code:errorCode userInfo:@{NSLocalizedDescriptionKey: description}]

#endif /* RGRayGameStreamError_h */
