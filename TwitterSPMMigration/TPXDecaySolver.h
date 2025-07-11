//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TPXDecaySolver : NSObject
{
    double _position;
    double _velocity;
    double _decayRate;
    double _stabilityTimestep;
    double _stabilityPrecision;
}

+ (id)keyPathsForValuesAffectingDecayRate;
+ (id)keyPathsForValuesAffectingFinalPosition;
+ (id)keyPathsForValuesAffectingTimeUntilStable;
+ (id)decay;
@property double stabilityPrecision; // @synthesize stabilityPrecision=_stabilityPrecision;
@property double stabilityTimestep; // @synthesize stabilityTimestep=_stabilityTimestep;
@property double decayRate; // @synthesize decayRate=_decayRate;
@property double velocity; // @synthesize velocity=_velocity;
@property double position; // @synthesize position=_position;
- (double)velocityAtTime:(double)arg1;
- (double)positionAtTime:(double)arg1;
- (_Bool)isStableAtTime:(double)arg1;
- (_Bool)isStable;
@property double timeUntilStable;
- (double)timeUntilStableWithDecay:(double)arg1;
- (double)derivativeOfTimeUntilStableWithDecay:(double)arg1;
@property double finalPosition;
- (double)finalPositionWithDecay:(double)arg1;
- (id)init;

@end

