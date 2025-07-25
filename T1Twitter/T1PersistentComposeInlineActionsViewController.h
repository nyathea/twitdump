//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNViewController.h>

@class NSString, TFNTwitterAccount;
@protocol T1PersistentComposeInlineActionsViewControllerDelegate, TTACoreStatusViewModel;

@interface T1PersistentComposeInlineActionsViewController : TFNViewController
{
    id <T1PersistentComposeInlineActionsViewControllerDelegate> _delegate;
    TFNTwitterAccount *_account;
    id <TTACoreStatusViewModel> _statusViewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <TTACoreStatusViewModel> statusViewModel; // @synthesize statusViewModel=_statusViewModel;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(nonatomic) __weak id <T1PersistentComposeInlineActionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_t1_handleEventType:(id)arg1 forInlineActionsView:(id)arg2 inlineActionType:(unsigned long long)arg3;
- (void)_t1_updateViewModel;
- (void)statusItemDidUpdate:(id)arg1;
- (void)inlineActionsView:(id)arg1 didStartBrandedAnimationFromInlineActionWithType:(unsigned long long)arg2;
- (void)inlineActionsView:(id)arg1 didLongPressInlineActionWithType:(unsigned long long)arg2;
- (void)inlineActionsView:(id)arg1 didTapInlineActionWithType:(unsigned long long)arg2;
- (void)viewDidLoad;
- (void)loadView;
- (id)internalView;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

