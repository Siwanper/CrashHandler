//
//  NSObject+AvoidCrash.h
//
//  Created by ios开发 on 2019/5/15.
//  Copyright © 2019 siwanper. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSObject (AvoidCrash)

/** 
 *  ifDealWithNoneSel : 是否开启"unrecognized selector sent to instance"异常的捕获
 */
+ (void)avoidCrashExchangeMethodIfDealWithNoneSel:(BOOL)ifDealWithNoneSel;


+ (void)setupNoneSelClassStringsArr:(NSArray<NSString *> *)classStrings;

+ (void)setupNoneSelClassStringPrefixsArr:(NSArray<NSString *> *)classStringPrefixs;

@end

/**
 *  Can avoid crash method
 *
 *  1.- (void)setValue:(id)value forKey:(NSString *)key
 *  2.- (void)setValue:(id)value forKeyPath:(NSString *)keyPath
 *  3.- (void)setValue:(id)value forUndefinedKey:(NSString *)key //这个方法一般用来重写，不会主动调用
 *  4.- (void)setValuesForKeysWithDictionary:(NSDictionary<NSString *,id> *)keyedValues
 *  5. unrecognized selector sent to instance
 */
