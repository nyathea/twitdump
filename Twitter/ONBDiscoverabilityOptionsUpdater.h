//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TFNTwitterAccount;

@interface ONBDiscoverabilityOptionsUpdater : NSObject
{
    TFNTwitterAccount *_account;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void)setDiscoverableByPhone:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)setDiscoverableByEmail:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)discoverableByPhone;
- (_Bool)discoverableByEmail;
- (id)discoverabilityOptionsTitle;
- (id)init;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

