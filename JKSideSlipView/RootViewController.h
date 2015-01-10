//
//  RootViewController.h
//  JKSideSlipView
//
//  Created by Jakey on 15/1/10.
//  Copyright (c) 2015年 www.skyfox.org. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JKSideSlipView.h"
@interface RootViewController : UIViewController
{
    JKSideSlipView *_sideSlipView;
}
- (IBAction)switchTouched:(id)sender;
@end
