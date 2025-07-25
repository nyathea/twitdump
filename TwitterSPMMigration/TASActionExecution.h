//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSOperation, NSUUID;
@protocol TASAction;

@interface TASActionExecution : NSObject
{
    MISSING_TYPE *uuid;
    MISSING_TYPE *typeErasedAction;
    MISSING_TYPE *objCAction;
    MISSING_TYPE *typeErasedOperation;
    MISSING_TYPE *observer;
    MISSING_TYPE *submittedAt;
    MISSING_TYPE *actionsQueue;
    MISSING_TYPE *actionsQueue_backgroundTaskHandle;
    MISSING_TYPE *actionsQueue_beginExecutingTimeoutTimer;
    MISSING_TYPE *actionsQueue_startedAt;
    MISSING_TYPE *actionsQueue_beganExecutingAt;
    MISSING_TYPE *actionsQueue_cancelledAt;
    MISSING_TYPE *actionsQueue_finishedAt;
    MISSING_TYPE *actionType;
    MISSING_TYPE *performEnqueue;
    MISSING_TYPE *operationIsReadyObserver;
    MISSING_TYPE *operationIsExecutingObserver;
    MISSING_TYPE *operationIsCancelledObserver;
    MISSING_TYPE *operationIsFinishedObserver;
    MISSING_TYPE *delegate;
}

+ (id)simulatedExecutionForAction:(id)arg1;
- (void).cxx_destruct;
- (id)init;
- (void)start;
- (void)dealloc;
@property(nonatomic, readonly) NSOperation *operation; // @synthesize operation=typeErasedOperation;
@property(nonatomic, readonly) id <TASAction> action; // @synthesize action=objCAction;
@property(nonatomic, readonly) NSUUID *uuid;

@end

