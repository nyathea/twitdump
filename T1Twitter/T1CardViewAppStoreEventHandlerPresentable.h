//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL, TFNTwitterAccount, TUICardViewEvent, TUICardViewEventHandlerContext, UIViewController;
@protocol TFCCardDataSource;

@interface T1CardViewAppStoreEventHandlerPresentable : NSObject
{
    TUICardViewEventHandlerContext *_context;
    TUICardViewEvent *_event;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TUICardViewEvent *event; // @synthesize event=_event;
@property(readonly, nonatomic) TUICardViewEventHandlerContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) UIViewController *presentingViewController;
@property(readonly, nonatomic) id <TFCCardDataSource> cardDataSource;
@property(readonly, nonatomic) TFNTwitterAccount *account;
@property(readonly, nonatomic) NSURL *appURL;
@property(readonly, nonatomic) NSURL *appDisplayURL;
@property(readonly, nonatomic) NSString *appID;
- (id)initWithContext:(id)arg1 event:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

