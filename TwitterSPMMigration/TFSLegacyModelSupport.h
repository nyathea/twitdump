//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface TFSLegacyModelSupport : NSObject
{
    MISSING_TYPE *modelContext;
}

- (void).cxx_destruct;
- (id)init;
- (void)statusesForStatusIDs:(id)arg1 enforceQoS:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)usersForUserIDs:(id)arg1 enforceQoS:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)userForUsername:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)userForUserID:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithModelContext:(id)arg1;

@end

