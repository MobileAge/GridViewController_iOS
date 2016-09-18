//
//  BDAppDelegate.h
//  BDDynamicGridViewDemo
//
//  Created by MobileAge Team on 6/21/14.
//  Copyright (c) 2014 MobileAge Team. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BDViewController;

@interface BDAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) BDViewController *viewController;
@property (strong, nonatomic) UINavigationController *navigationController;

@end
