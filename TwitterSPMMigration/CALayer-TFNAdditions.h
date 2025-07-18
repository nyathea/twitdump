//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@interface CALayer (TFNAdditions)
- (void)tfn_removeAllAnimationsFromLayerHierarchy;
- (void)tfn_resumeAnimation;
- (void)tfn_pauseAnimation;
- (void)tfn_applyFinalStateOfAnimation:(id)arg1;
- (void)tfn_animateKeyPath:(id)arg1 fromValue:(id)arg2 withDuration:(double)arg3 mediaTimingFunctionName:(id)arg4;
- (void)tfn_addAnimation:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)dynamicColorView;
- (void)setTfn_shadowColor:(id)arg1;
- (id)tfn_shadowColor;
- (void)setTfn_borderColor:(id)arg1;
- (id)tfn_borderColor;
- (void)setTfn_backgroundColor:(id)arg1;
- (id)tfn_backgroundColor;
@end

