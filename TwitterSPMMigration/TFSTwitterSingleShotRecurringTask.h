//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TFSTwitterSingleShotRecurringTask : NSObject
{
    CDUnknownBlockType _block;
    long long _priority;
}

- (void).cxx_destruct;
- (void)tfs_triggerFromService:(id)arg1 event:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)tfs_errorDomain;
- (id)tfs_taskState;
- (void)tfs_priorityForEvent:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (id)initWithPriority:(long long)arg1 block:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

