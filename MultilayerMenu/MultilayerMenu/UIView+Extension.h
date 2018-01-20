//
//  UIView+Extension.h
//  FightBuy
//
//  Created by 徐伯文 on 16/6/20.
//  Copyright © 2016年 詹志超. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Extension)
/** x */
@property (nonatomic, assign) CGFloat x;
/** y */
@property (nonatomic, assign) CGFloat y;
/** width */
@property (nonatomic, assign) CGFloat width;
/** height */
@property (nonatomic, assign) CGFloat height;
/** centerX */
@property (nonatomic, assign) CGFloat centerX;
/** centerY */
@property (nonatomic, assign) CGFloat centerY;
/** right */
@property (nonatomic, assign) CGFloat right;
/** bottom */
@property (nonatomic, assign) CGFloat bottom;
/** size */
@property (nonatomic, assign) CGSize size;

/**
 设置圆角
 */
- (void)setCornerRadius:(CGFloat)cornerRadius;

/**
 设置成圆
 */
- (void)cornerRadius;

/**
 设置边框
 
 @param color 颜色
 @param width 宽度
 */
- (void)setBorder:(UIColor *)color width:(CGFloat)width;

/**
 可视化获取视图
 */
+ (instancetype)viewForNib;

@end
