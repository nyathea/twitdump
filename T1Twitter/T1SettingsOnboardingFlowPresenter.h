//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TFNTwitterAccount;
@protocol _TtP24TwitterOnboardingFeature26TwitterOnboardingPresenter_, _TtP24TwitterOnboardingFeature30TwitterOnboardingFlowAssistant_;

@interface T1SettingsOnboardingFlowPresenter : NSObject
{
    TFNTwitterAccount *_account;
    id <_TtP24TwitterOnboardingFeature30TwitterOnboardingFlowAssistant_> _flowAssistant;
    id <_TtP24TwitterOnboardingFeature26TwitterOnboardingPresenter_> _presenter;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <_TtP24TwitterOnboardingFeature26TwitterOnboardingPresenter_> presenter; // @synthesize presenter=_presenter;
@property(retain, nonatomic) id <_TtP24TwitterOnboardingFeature30TwitterOnboardingFlowAssistant_> flowAssistant; // @synthesize flowAssistant=_flowAssistant;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void)private_dismissPreviousFlowIfNeededsWithCompletion:(CDUnknownBlockType)arg1;
- (void)private_presentFlowWithPresenter:(id)arg1 flowSpec:(id)arg2 fromViewController:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)present2faUnenrollFlowForMethodType:(long long)arg1 fromViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)present2faFlow:(long long)arg1 fromViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentAutomationOptInFromViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentRenameSecurityKeySettingsWithMethodID:(long long)arg1 fromViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentDeleteSecurityKeySettingsWithMethodID:(long long)arg1 fromViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentEnterEmailFlowFromViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentPhoneNumberSettingsFromViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentVerifyPasswordFlowFromViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentChangePasswordFlowFromViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentConfirmationForCountryCode:(id)arg1 fromViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentAppAndContentLanguageSelectorFromNavigationController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentLanguageSelectorFromNavigationController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithAccount:(id)arg1;

@end

