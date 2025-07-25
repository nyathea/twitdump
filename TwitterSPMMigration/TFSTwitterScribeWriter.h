//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TFSScribe;

@interface TFSTwitterScribeWriter : NSObject
{
    TFSScribe *_scribe;
    NSString *_clientName;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(readonly, nonatomic) TFSScribe *scribe; // @synthesize scribe=_scribe;
- (id)_parametersForPerformanceEvent:(id)arg1 impressionID:(id)arg2;
- (id)_parametersForPerformanceEvent:(id)arg1;
- (void)_enqueueParameters:(id)arg1 group:(id)arg2;
- (void)writeEventWithParameters:(id)arg1 group:(id)arg2;
- (void)writeErrorWithType:(id)arg1 functionName:(id)arg2 group:(id)arg3;
- (void)writePerformanceEvent:(id)arg1 duration:(double)arg2 count:(long long)arg3 group:(id)arg4;
- (void)writePerformanceEvent:(id)arg1 size:(long long)arg2 group:(id)arg3;
- (void)writePerformanceEvent:(id)arg1 duration:(double)arg2 impressionID:(id)arg3 promotedImpressionID:(id)arg4 metadata:(id)arg5 size:(long long)arg6 group:(id)arg7;
- (void)writePerformanceEvent:(id)arg1 duration:(double)arg2 impressionID:(id)arg3 promotedImpressionID:(id)arg4 metadata:(id)arg5 group:(id)arg6;
- (void)writeNetworkOperationEvent:(id)arg1 group:(id)arg2;
- (void)writeClientEvent:(id)arg1 parameters:(id)arg2 group:(id)arg3;
- (id)parametersForEvent:(id)arg1 parameters:(id)arg2 group:(id)arg3;
- (id)eventSerializerForParameters:(id)arg1 group:(id)arg2;
- (void)enqueueEvent:(id)arg1;
- (id)initWithScribe:(id)arg1 clientName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

