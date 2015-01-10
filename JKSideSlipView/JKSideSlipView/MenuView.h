//
//  MenuView.h
//  JKSideSlipView
//
//  Created by Jakey on 15/1/10.
//  Copyright (c) 2015年 www.skyfox.org. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef void (^didSelectRowAtIndexPath)(id cell, NSIndexPath *indexPath);

@interface MenuView : UIView<UITableViewDelegate,UITableViewDataSource>
{
    didSelectRowAtIndexPath _didSelectRowAtIndexPath;
}
+(instancetype)menuView;
@property (weak, nonatomic) IBOutlet UITableView *myTableView;
@property (nonatomic, strong) NSArray *items;
-(void)didSelectRowAtIndexPath:(void (^)(id cell, NSIndexPath *indexPath))didSelectRowAtIndexPath;
@end
