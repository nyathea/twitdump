//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableSet;

@interface TFSScribeFlushResponseOperation
{
    id _notificationObject;
    NSMutableSet *_thisFlushEventKeysAwaitingResponse;
    NSMutableSet *_allFlushedEventKeysAwaitingResponse;
    NSArray *_eventKeysFlushedThisBatch;
    unsigned long long _behavior;
    CDUnknownBlockType _didFlushBatch;
    CDUnknownBlockType _didFlushAllBatches;
    NSArray *_eventsFlushedThisBatchSoLongAsThisIsStillNecessary;
    NSArray *_eventsToRetry;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *eventsToRetry; // @synthesize eventsToRetry=_eventsToRetry;
@property(readonly, nonatomic) NSArray *eventsFlushedThisBatchSoLongAsThisIsStillNecessary; // @synthesize eventsFlushedThisBatchSoLongAsThisIsStillNecessary=_eventsFlushedThisBatchSoLongAsThisIsStillNecessary;
@property(readonly, copy, nonatomic) CDUnknownBlockType didFlushAllBatches; // @synthesize didFlushAllBatches=_didFlushAllBatches;
@property(readonly, copy, nonatomic) CDUnknownBlockType didFlushBatch; // @synthesize didFlushBatch=_didFlushBatch;
@property(readonly, nonatomic) unsigned long long behavior; // @synthesize behavior=_behavior;
@property(readonly, copy, nonatomic) NSArray *eventKeysFlushedThisBatch; // @synthesize eventKeysFlushedThisBatch=_eventKeysFlushedThisBatch;
@property(readonly, nonatomic) NSMutableSet *allFlushedEventKeysAwaitingResponse; // @synthesize allFlushedEventKeysAwaitingResponse=_allFlushedEventKeysAwaitingResponse;
@property(readonly, nonatomic) NSMutableSet *thisFlushEventKeysAwaitingResponse; // @synthesize thisFlushEventKeysAwaitingResponse=_thisFlushEventKeysAwaitingResponse;
@property(readonly, nonatomic) __weak id notificationObject; // @synthesize notificationObject=_notificationObject;
- (void)main;
- (id)initWithApplicationLink:(id)arg1 databaseProvider:(id)arg2 thisFlushEventKeysAwaitingResponse:(id)arg3 allFlushedEventKeysAwaitingResponse:(id)arg4 eventKeysFlushedThisBatch:(id)arg5 completionBehavior:(unsigned long long)arg6 eventsToRetry:(id)arg7 didFlushBatch:(CDUnknownBlockType)arg8 didFlushAllBatches:(CDUnknownBlockType)arg9 eventsFlushedThisBatch:(id)arg10;

@end

