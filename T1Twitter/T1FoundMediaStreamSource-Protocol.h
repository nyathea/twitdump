//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/NSObject-Protocol.h>

@class TFNTwitterAccount, TTMFoundMediaFetchOperation, TTMFoundMediaFetchOptions;

@protocol T1FoundMediaStreamSource <NSObject>
- (TTMFoundMediaFetchOperation *)loadWithOptions:(TTMFoundMediaFetchOptions *)arg1 account:(TFNTwitterAccount *)arg2 completion:(void (^)(TFSTwitterFoundMediaResult *, NSError *))arg3;
@end

