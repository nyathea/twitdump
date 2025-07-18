//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNLegacyFormViewController.h>

@class TFNTwitterAccount;

@interface T1AccountDeactivatePasswordFormController : TFNLegacyFormViewController
{
    TFNTwitterAccount *_account;
    unsigned long long _timespan;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long timespan; // @synthesize timespan=_timespan;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void)_t1_showAlertWithError:(id)arg1;
- (void)_t1_deactivate;
- (void)_t1_presentDeactivateConfirmationDialog;
- (void)_t1_cancel;
- (_Bool)tfn_logoTitleViewShown;
- (long long)tfn_preferredToolbarVisibility;
- (void)form:(id)arg1 didChangeSubmittability:(_Bool)arg2;
- (void)viewDidLoad;
- (id)initWithForm:(id)arg1 appearance:(id)arg2;
- (id)initWithAccount:(id)arg1 timespan:(unsigned long long)arg2;

@end

