//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TFNTwitterPushRegistrationManager, TFSTwitterFeatureRegistry;
@protocol TFNTwitterAccountService;

@interface T1AccountController : NSObject
{
    _Bool _teamsAccountUpdateNeeded;
    _Bool _updatingTeamsAccount;
    id <TFNTwitterAccountService> _accountService;
    TFNTwitterPushRegistrationManager *_pushRegistrationManager;
    TFSTwitterFeatureRegistry *_featureRegistry;
}

+ (id)defaultController;
- (void).cxx_destruct;
@property(readonly, nonatomic) TFSTwitterFeatureRegistry *featureRegistry; // @synthesize featureRegistry=_featureRegistry;
@property(readonly, nonatomic) TFNTwitterPushRegistrationManager *pushRegistrationManager; // @synthesize pushRegistrationManager=_pushRegistrationManager;
@property(readonly, nonatomic) id <TFNTwitterAccountService> accountService; // @synthesize accountService=_accountService;
@property(nonatomic) _Bool updatingTeamsAccount; // @synthesize updatingTeamsAccount=_updatingTeamsAccount;
@property(nonatomic) _Bool teamsAccountUpdateNeeded; // @synthesize teamsAccountUpdateNeeded=_teamsAccountUpdateNeeded;
- (void)_t1_regenerateLoginVerificationBackupCodeWithAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_t1_unregisterPushVerificationWithAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_t1_unregisterLoginVerificationWithAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_t1_logoutOauthSessionWithAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_t1_finishedRemovingAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_t1_prepareToRemoveAccount:(id)arg1 notifyAccountsDidChange:(_Bool)arg2;
- (void)_t1_removeAccount:(id)arg1 notifyAccountsDidChange:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_t1_addAccount:(id)arg1 shouldNotifyAccountsDidChange:(_Bool)arg2;
- (void)_t1_updateOwnerAccountContributeeUserIDs:(id)arg1 contributor:(id)arg2;
- (_Bool)_t1_isAccountEligibleForTeamsUpdate:(id)arg1;
- (void)_t1_updateTeamsAccountWithContributeesDict:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_t1_updateEntry:(id)arg1 inContributeesIndex:(id)arg2;
- (_Bool)_t1_didFinishTeamsAccountUpdateWithBlock:(CDUnknownBlockType)arg1;
- (void)_t1_postTeamsNotification:(long long)arg1 accountsDidChange:(_Bool)arg2;
- (_Bool)_t1_shouldReplaceEntry:(id)arg1 withEntry:(id)arg2;
- (_Bool)_t1_removeStrandedTeamsAccounts;
- (_Bool)_t1_isFatalError:(id)arg1;
- (void)_t1_updateTeamsAccountsForAll:(long long)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)removeAllTeamsAccount;
- (void)removeTeamsAccount:(id)arg1;
- (id)getContributorAccountFromTeamsAccount:(id)arg1;
- (_Bool)updateTeamsAccount:(id)arg1 withTeamsAccount:(id)arg2;
- (void)updateTeamsAccountsForAll:(long long)arg1 withDelay:(_Bool)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)updateTeamsAccountsCredentialWithOwnerAccount:(id)arg1;
- (_Bool)shouldUpdateTeamsAccount:(id)arg1 withTeamsAccount:(id)arg2;
- (_Bool)addOrUpdateTeamsAccount:(id)arg1;
- (void)removeAccount:(id)arg1 withAccountRemovalCompletionHandler:(CDUnknownBlockType)arg2;
- (id)addOrUpdateAccount:(id)arg1;
- (void)addAccount:(id)arg1;
- (id)initWithAccountService:(id)arg1 pushRegistrationManager:(id)arg2 featureRegistry:(id)arg3;

@end

