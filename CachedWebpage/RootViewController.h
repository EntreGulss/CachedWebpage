//
//  RootViewController.h
//  CachedWebpage
//
//  Created by 大竹 雅登 on 13/09/23.
//  Copyright (c) 2013年 Masato. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RootViewController : UIViewController<UITableViewDataSource, UITableViewDelegate>

@property (nonatomic, strong) IBOutlet UITableView *tableView;

@end
