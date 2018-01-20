//
//  LTMenuItem.m
//  MultilayerMenu
//
//  Created by 冰凌天 on 2018/1/20.
//  Copyright © 2018年 冰凌天. All rights reserved.
//

#import "LTMenuItem.h"

@implementation LTMenuItem

/**
 指定subs数组中存放LTMenuItem类型对象
 */
+ (NSDictionary *)mj_objectClassInArray
{
    return @{@"subs" : [LTMenuItem class]};
}

/**
 判断是否能够展开, 当subs中有数据时才能展开
 */
- (BOOL)isCanUnfold
{
    return self.subs.count > 0;
}

@end
