//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TFSDirectMessageDeduplicationRetryRequestPolicy : NSObject
{
}

- (void)tnl_requestOperation:(id)arg1 didStartRetryFromResponse:(id)arg2;
- (void)tnl_requestOperation:(id)arg1 willStartRetryFromResponse:(id)arg2 afterDelay:(double)arg3;
- (double)tnl_delayBeforeRetryForRequestOperation:(id)arg1 withResponse:(id)arg2;
- (_Bool)tnl_shouldRetryRequestOperation:(id)arg1 withResponse:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

