//
//  AppDelegate.h
//  ZhiXunTong
//
//  Created by Mou on 2017/5/26.
//  Copyright © 2017年 airZX. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GPTabBarViewController.h"
#import "WXApi.h"
#import "WXApiObject.h"

static NSString *jpappKey=@"3489a22fb87f6f578d1c4122";
//3489a22fb87f6f578d1c4122   我的
//3c77dc8e9b68a7b9ed9ee3bc
@interface AppDelegate : UIResponder <UIApplicationDelegate,UITabBarDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) GPTabBarViewController *tab;
@end

