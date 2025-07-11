//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURLRequest, TNLRequestOperation;
@protocol OS_dispatch_queue, OS_dispatch_source, TIPImageFetchDownloadContext;

@interface TNUImageFetchDownload : NSObject
{
    long long _priority;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timeoutTimerSource;
    struct {
        unsigned int stub:1;
        unsigned int cancelled:1;
    } _flags;
    id <TIPImageFetchDownloadContext> _context;
    TNLRequestOperation *_operation;
}

+ (id)imageRequestOperationQueue;
+ (double)stallTimeoutDuration;
+ (void)setStallTimeoutDuration:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) TNLRequestOperation *operation; // @synthesize operation=_operation;
@property(readonly, nonatomic) id <TIPImageFetchDownloadContext> context; // @synthesize context=_context;
- (id)tnl_delegateQueueForRequestOperation:(id)arg1;
- (id)tnl_completionQueueForRequestOperation:(id)arg1;
- (void)tnl_requestOperation:(id)arg1 didCompleteWithResponse:(id)arg2;
- (void)tnl_requestOperation:(id)arg1 didStartRetryFromResponse:(id)arg2 policyProvider:(id)arg3;
- (void)tnl_requestOperation:(id)arg1 willStartRetryFromResponse:(id)arg2 policyProvider:(id)arg3 afterDelay:(double)arg4;
- (void)tnl_requestOperation:(id)arg1 didReceiveData:(id)arg2;
- (void)tnl_requestOperation:(id)arg1 didReceiveURLResponse:(id)arg2;
- (void)tnl_requestOperation:(id)arg1 didTransitionFromState:(long long)arg2 toState:(long long)arg3;
- (void)tnl_requestOperation:(id)arg1 authorizeURLRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)tnl_requestOperation:(id)arg1 hydrateRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) NSURLRequest *finalURLRequest;
@property(readonly, nonatomic) id downloadMetrics;
// Preceding property had unknown attributes: ?
// Original attribute string: T@,?,R,N

@property(nonatomic) long long priority;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

- (void)discardContext;
- (void)cancelWithDescription:(id)arg1;
- (void)start;
- (id)initWithContext:(id)arg1 stubbingEnabled:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

