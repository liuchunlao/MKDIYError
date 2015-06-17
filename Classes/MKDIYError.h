//
//  MKError.h
//  testError
//
//  Created by ykh on 15/6/17.
//  Copyright (c) 2015年 YKH. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum {
    
    MKDIYErrorCodeOfNet = -1,  //网络错误
    
    /**
     *  个性标签个数超出
     */
    MKDIYErrorCodeOfLablesOverflow = -10001,
    /**
     *  个性标签重名
     */
    MKDIYErrorCodeOfLablesNameExist = -10002,

}MKDIYErrorCode;

@interface MKDIYError : NSError
/**
 *  错误提示
 */
@property (nonatomic, copy) NSString *errorText;
/**
 *  错误代码,可自定义的枚举---MKDIYErrorCode
 */
@property (nonatomic,assign) MKDIYErrorCode errorCode;

/**
 *  传入错误提示,错误代码,返回Error对象
 *
 *  @param errorText 错误提示
 *  @param errorCode 错误代码(枚举)
 *
 *  @return error对象
 */
+(instancetype)mkDiyErrorWithErrorText:(NSString *)errorText andErrorCode:(MKDIYErrorCode)errorCode;

@end
