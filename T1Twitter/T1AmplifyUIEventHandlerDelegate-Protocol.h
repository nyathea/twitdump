//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSURL, T1AmplifyUIEventHandler, UIViewController;

@protocol T1AmplifyUIEventHandlerDelegate <NSObject>
- (void)amplifyActionHandler:(T1AmplifyUIEventHandler *)arg1 dismissCurrentViewControllerAndOpenURL:(NSURL *)arg2;
- (void)amplifyActionHandler:(T1AmplifyUIEventHandler *)arg1 dismissAndPresentViewController:(UIViewController *)arg2;
@end

