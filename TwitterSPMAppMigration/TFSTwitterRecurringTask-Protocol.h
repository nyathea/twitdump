//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterAppSPMMigration/NSObject-Protocol.h>

@class NSString, TFSTwitterRecurringTaskEvent, TFSTwitterRecurringTaskService;

@protocol TFSTwitterRecurringTask <NSObject>
- (NSString *)tfs_errorDomain;
- (NSString *)tfs_taskState;
- (void)tfs_triggerFromService:(TFSTwitterRecurringTaskService *)arg1 event:(TFSTwitterRecurringTaskEvent *)arg2 completion:(void (^)(void))arg3;

@optional
- (void)tfs_priorityForEvent:(TFSTwitterRecurringTaskEvent *)arg1 complete:(void (^)(long long))arg2;
@end

