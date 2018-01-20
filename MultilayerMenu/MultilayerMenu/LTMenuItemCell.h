//
//  LTMenuItemCell.h
//  MultilayerMenu
//
//  Created by 冰凌天 on 2018/1/20.
//  Copyright © 2018年 冰凌天. All rights reserved.
//

#import <UIKit/UIKit.h>
@class LTMenuItem;
@class LTMenuItemCell;

@protocol LTMenuItemCellDelegate <NSObject>

- (void)cell:(LTMenuItemCell *)cell didSelectedBtn:(UIButton *)sender;

@end

@interface LTMenuItemCell : UITableViewCell

/** 菜单项模型 */
@property (nonatomic, strong) LTMenuItem *menuItem;

/** 代理 */
@property (nonatomic, weak) id<LTMenuItemCellDelegate> delegate;

@end
