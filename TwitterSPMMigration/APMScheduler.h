//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface APMScheduler : NSObject
{
    NSObject<OS_dispatch_queue> *_workerQueue;
}

+ (_Bool)checkOnBackgroundThreadWithMethodName:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workerQueue; // @synthesize workerQueue=_workerQueue;
- (void)dispatchSyncOnWorkerQueueBlockID:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)scheduleOnWorkerQueueBlockID:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)initWithWorkerQueueLabel:(id)arg1;

@end

