//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TAVMediaCastPlayerMetadata, TIPImagePipeline;

@interface T1PlayerMediaCastSessionProducible : NSObject
{
    TAVMediaCastPlayerMetadata *_mediaCastPlayerMetadata;
    TIPImagePipeline *_imagePipeline;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TIPImagePipeline *imagePipeline; // @synthesize imagePipeline=_imagePipeline;
@property(readonly, nonatomic) TAVMediaCastPlayerMetadata *mediaCastPlayerMetadata; // @synthesize mediaCastPlayerMetadata=_mediaCastPlayerMetadata;
- (id)produceSessionForConfiguration:(id)arg1 account:(id)arg2 playbackObservers:(id)arg3 initialScribeContext:(id)arg4;
- (_Bool)canProducePlayerSessionWithAccount:(id)arg1;
- (id)init;
- (id)initWithMediaCastPlayerMetadata:(id)arg1 imagePipeline:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

