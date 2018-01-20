//
//  LTMenuItem.h
//  MultilayerMenu
//
//  Created by 冰凌天 on 2018/1/20.
//  Copyright © 2018年 冰凌天. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LTMenuItem : NSObject

/** 名字 */
@property (nonatomic, strong) NSString *name;
/** 子层 */
@property (nonatomic, strong) NSArray<LTMenuItem *> *subs;

#pragma mark - < 辅助属性 >

/** 是否选中 */
@property (nonatomic, assign) BOOL isSelected;

/** 是否展开 */
@property (nonatomic, assign) BOOL isUnfold;

/** 是否能展开 */
@property (nonatomic, assign) BOOL isCanUnfold;

/** 当前层级 */
@property (nonatomic, assign) NSInteger index;



@end
