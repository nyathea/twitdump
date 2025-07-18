//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, PTVAudioVisualizerVideoRenderer, PTVSketchEngine, PTVSwitchboardEntity, PTVVideoProcessorContext;

@interface PTVVideoProcessorPipeline : NSObject
{
    PTVVideoProcessorPipeline *_weakSelf;
    PTVVideoProcessorContext *_context;
    NSArray *_entities;
    PTVSwitchboardEntity *_switchboardEntity;
    PTVSketchEngine *_sketchEngine;
    PTVAudioVisualizerVideoRenderer *_audioVisualizerVideoRenderer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PTVAudioVisualizerVideoRenderer *audioVisualizerVideoRenderer; // @synthesize audioVisualizerVideoRenderer=_audioVisualizerVideoRenderer;
@property(readonly, nonatomic) PTVSketchEngine *sketchEngine; // @synthesize sketchEngine=_sketchEngine;
@property(readonly, nonatomic) PTVSwitchboardEntity *switchboardEntity; // @synthesize switchboardEntity=_switchboardEntity;
@property(readonly, nonatomic) NSArray *entities; // @synthesize entities=_entities;
@property(readonly, nonatomic) PTVVideoProcessorContext *context; // @synthesize context=_context;
- (void)didCreateSwitchboardImage:(id)arg1 withAttributes:(struct PTVSwitchboardAssetAttributes)arg2;
- (void)removeSwitchboardAsset;
- (void)updateSwitchboardAssetAttributes:(struct PTVSwitchboardAssetAttributes)arg1;
- (void)displaySwitchboardAsset:(id)arg1 withAttributes:(struct PTVSwitchboardAssetAttributes)arg2;
- (void)clearCanvasAnimated:(_Bool)arg1;
- (void)enqueueSketchPoints:(id)arg1;
- (_Bool)shouldDrawEntitiesOmittingVideo:(_Bool)arg1;
- (void)renderPassDidComplete;
- (void)tickWithPassageOfTime:(double)arg1;
- (id)initWithContext:(id)arg1 audioVisualizerModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

