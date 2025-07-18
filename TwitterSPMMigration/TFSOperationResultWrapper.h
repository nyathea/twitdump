//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSOperation, TFSConcurrentOperation;
@protocol OS_dispatch_queue;

@interface TFSOperationResultWrapper : NSObject
{
    TFSConcurrentOperation *_operation;
    NSObject<OS_dispatch_queue> *_completionQueue;
    id _result;
    NSError *_error;
}

+ (id)join:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSOperation *operation; // @synthesize operation=_operation;
- (id)concurrentContinuationOperationWithBlock:(CDUnknownBlockType)arg1;
- (id)continuationOperationWithBlock:(CDUnknownBlockType)arg1;
- (id)continuationOperationWrapperWithBlock:(CDUnknownBlockType)arg1;
- (void)completeWithError:(id)arg1;
- (void)completeWithResult:(id)arg1;
- (id)initWithCompletedOperationResult:(id)arg1;
- (id)initWithOperationRunBlock:(CDUnknownBlockType)arg1;

@end

