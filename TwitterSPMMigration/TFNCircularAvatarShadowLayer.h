//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@interface TFNCircularAvatarShadowLayer : CALayer
{
}

+ (id)shadowLayer;
+ (_Bool)useGradientLayerShadows;
+ (void)setUseGradientLayerShadowsBlock:(CDUnknownBlockType)arg1;
+ (id)useGradientLayerShadowsFeatureSwitch;
- (void)_updateShadowInContext:(struct CGContext *)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)init;

@end

