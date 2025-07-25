//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, TFNTwitterAccount, TFNTwitterUser;

@interface T1PeriscopeFollowPromptViewController : UIViewController
{
    TFNTwitterAccount *_account;
    TFNTwitterUser *_user;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TFNTwitterUser *user; // @synthesize user=_user;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (id)scribeComponent;
- (id)scribeSection;
- (id)scribePage;
@property(nonatomic) double avatarWidth;
@property(nonatomic) double leftMargin;
@property(nonatomic) double leftOffset;
@property(nonatomic) unsigned long long variant;
- (_Bool)followPromptViewCanShowLiveFollowButton:(id)arg1;
- (void)followLiveFollowButtonsView:(id)arg1 didTapLiveFollowForUser:(id)arg2;
- (void)followLiveFollowButtonsView:(id)arg1 didTapFollowForUser:(id)arg2;
- (void)userUpdated:(id)arg1;
- (void)loadView;
- (void)dispose;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 user:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

