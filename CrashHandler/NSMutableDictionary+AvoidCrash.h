//
//  NSMutableDictionary+AvoidCrash.h
//
//  Created by ios开发 on 2019/5/15.
//  Copyright © 2019 siwanper. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AvoidCrashProtocol.h"

@interface NSMutableDictionary (AvoidCrash)<AvoidCrashProtocol>


@end


/**
 *  Can avoid crash method
 *
 *  1. - (void)setObject:(id)anObject forKey:(id<NSCopying>)aKey
 *  2. - (void)removeObjectForKey:(id)aKey
 *
 */
