//
//  NSAttributedString+AvoidCrash.h
//
//  Created by ios开发 on 2019/5/15.
//  Copyright © 2019 siwanper. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AvoidCrashProtocol.h"

@interface NSAttributedString (AvoidCrash)<AvoidCrashProtocol>


@end

/**
 *  Can avoid crash method
 *
 *  1.- (instancetype)initWithString:(NSString *)str
 *  2.- (instancetype)initWithAttributedString:(NSAttributedString *)attrStr
 *  3.- (instancetype)initWithString:(NSString *)str attributes:(NSDictionary<NSString *,id> *)attrs
 *
 *
 */
