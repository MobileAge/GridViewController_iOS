//
//  BDViewController.h
//  BDDynamicGridViewDemo
//
//  Created by MobileAge Team on 6/21/14.
//  Copyright (c) 2014 MobileAge Team. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BDDynamicGridViewController.h"
@interface BDViewController : BDDynamicGridViewController <BDDynamicGridViewDelegate>{
    NSArray * _items;
}

@end
