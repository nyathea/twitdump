//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterAppSPMMigration/TUICardViewEventHandlerContext.h>

@class NSString, NSURL, TFNTwitterAccount, UIViewController;
@protocol TFCCardDataSource;

@interface TUICardViewEventHandlerContext (T1CardPresentable)
@property(readonly, nonatomic) NSURL *appDisplayURL;
@property(readonly, nonatomic) NSURL *appURL;
@property(readonly, nonatomic) NSString *appID;

// Remaining properties
@property(readonly, nonatomic) TFNTwitterAccount *account;
@property(readonly, nonatomic) id <TFCCardDataSource> cardDataSource;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIViewController *presentingViewController;
@property(readonly) Class superclass;
@end

