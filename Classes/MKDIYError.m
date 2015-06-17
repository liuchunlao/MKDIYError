//
//  MKError.m
//  testError
//
//  Created by ykh on 15/6/17.
//  Copyright (c) 2015年 YKH. All rights reserved.
//

#import "MKDIYError.h"
//domain
#define kMKErrorDomain @"com.MK.MKApplication.ErrorDomain"

@interface MKDIYError ()

@end

@implementation MKDIYError

+(instancetype)mkDiyErrorWithErrorText:(NSString *)errorText andErrorCode:(MKDIYErrorCode)errorCode
{
    NSString *domain = kMKErrorDomain;
    NSString *desc = NSLocalizedString(errorText,@"");
    NSDictionary *userInfo = @{ NSLocalizedDescriptionKey : desc };
    
    MKDIYError *error = [MKDIYError errorWithDomain:domain
                                         code:errorCode
                                     userInfo:userInfo];
    
    error.errorText = errorText;
    error.errorCode = errorCode;
    
    return error;
}

@end
