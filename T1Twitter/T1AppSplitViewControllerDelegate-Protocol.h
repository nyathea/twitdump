//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1AppSplitViewController, UITouch, UIViewController;

@protocol T1AppSplitViewControllerDelegate <NSObject>

@optional
- (_Bool)appSplitViewController:(T1AppSplitViewController *)arg1 shouldReceiveTouch:(UITouch *)arg2;
- (_Bool)appSplitViewController:(T1AppSplitViewController *)arg1 canDismissDashViewController:(UIViewController *)arg2;
- (_Bool)appSplitViewController:(T1AppSplitViewController *)arg1 canPresentDashFromViewController:(UIViewController *)arg2;
- (UIViewController *)contentPresentingViewControllerForAppSplitViewController:(T1AppSplitViewController *)arg1;
- (UIViewController *)panelPresentingViewControllerForAppSplitViewController:(T1AppSplitViewController *)arg1;
- (void)appSplitViewControllerDashPanelOpenPercentDidChange:(T1AppSplitViewController *)arg1;
- (void)appSplitViewControllerExtendedContentAvailableDidChange:(T1AppSplitViewController *)arg1;
- (void)appSplitViewController:(T1AppSplitViewController *)arg1 splitModeDidChange:(long long)arg2;
@end

