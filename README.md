# JKSideSlipView
JKSideSlipView 侧滑菜单

非常简单的侧滑组件

## 使用方法
   
    _sideSlipView = [[JKSideSlipView alloc]initWithSender:self];
    _sideSlipView.backgroundColor = [UIColor redColor];
    
    MenuView *menu = [MenuView menuView];
    [menu didSelectRowAtIndexPath:^(id cell, NSIndexPath *indexPath) {
        NSLog(@"click");
        [_sideSlipView hide];
        NextViewController *next = [[NextViewController alloc]init];
        [self.navigationController pushViewController:next animated:YES];
    }];
    menu.items = @[@{@"title":@"1",@"imagename":@"1"},@{@"title":@"2",@"imagename":@"2"},@{@"title":@"3",@"imagename":@"3"},@{@"title":@"4",@"imagename":@"4"}];
    [_sideSlipView setContentView:menu];
    [self.view addSubview:_sideSlipView];

##效果图
![image](https://raw.githubusercontent.com/shaojiankui/JKSideSlipView/master/thumb.png)
