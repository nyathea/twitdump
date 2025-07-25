//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface T1AuthorizedServiceOncePerSessionAfterLoggedInRequestPolicy : NSObject
{
    NSMutableDictionary *_requestStateByService;
    NSMutableDictionary *_numberOfSoftLaunchesByAccountID;
}

- (void).cxx_destruct;
- (id)_t1_scribeParametersWithNumberOfSoftLaunches:(unsigned long long)arg1 isRequestPolicyStateAllowedAfterSoftLaunch:(_Bool)arg2;
- (void)_t1_removeNumberOfSoftLaunchesEntryForAccountID:(id)arg1;
- (void)_t1_setNumberOFSoftLaunches:(unsigned long long)arg1 forAccountID:(id)arg2;
- (unsigned long long)_t1_numberOFSoftLaunchesForAccountID:(id)arg1;
- (void)_t1_setState:(long long)arg1 forType:(long long)arg2;
- (long long)_t1_stateForType:(long long)arg1;
- (void)_t1_appDidEnterBackground;
- (void)_t1_didRemoveAccountWithNotification:(id)arg1;
- (_Bool)shouldExecuteRequest:(id)arg1 withRequestLogEntries:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

