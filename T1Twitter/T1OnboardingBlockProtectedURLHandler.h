//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface T1OnboardingBlockProtectedURLHandler : NSObject
{
    CDUnknownBlockType _predicateBlock;
    CDUnknownBlockType _handlerBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType handlerBlock; // @synthesize handlerBlock=_handlerBlock;
@property(copy, nonatomic) CDUnknownBlockType predicateBlock; // @synthesize predicateBlock=_predicateBlock;
- (void)handleURL:(id)arg1;
- (_Bool)shouldHandleURL:(id)arg1;
- (id)initWithPredicateBlock:(CDUnknownBlockType)arg1 handlerBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

