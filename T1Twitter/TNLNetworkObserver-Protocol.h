//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSURLRequest, TNLAttemptMetrics, TNLRequestOperation, TNLResponse;

@protocol TNLNetworkObserver <NSObject>

@optional
- (void)tnl_requestOperation:(TNLRequestOperation *)arg1 didCompleteWithResponse:(TNLResponse *)arg2;
- (void)tnl_requestOperation:(TNLRequestOperation *)arg1 didCompleteAttemptWithIntermediateResponse:(TNLResponse *)arg2 disposition:(long long)arg3;
- (void)tnl_requestOperation:(TNLRequestOperation *)arg1 didStartAttemptRequest:(NSURLRequest *)arg2 metrics:(TNLAttemptMetrics *)arg3;
- (void)tnl_requestOperationDidStart:(TNLRequestOperation *)arg1;
@end

