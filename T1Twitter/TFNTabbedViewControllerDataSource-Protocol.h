//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/NSObject-Protocol.h>

@class TFNTabbedViewController, UIViewController;

@protocol TFNTabbedViewControllerDataSource <NSObject>
- (UIViewController *)tabbedViewController:(TFNTabbedViewController *)arg1 viewControllerAtIndex:(long long)arg2;
- (long long)numberOfViewControllersInTabbedViewController:(TFNTabbedViewController *)arg1;
@end

