//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TPXSpringSolver : NSObject
{
    _Bool _updatingConstants;
    double _zeta;
    double _omega0;
    double _position;
    double _velocity;
    double _springPosition;
    double _springConstant;
    double _dampingConstant;
    double _mass;
    double _stabilityTimeStep;
    double _stabilityPrecision;
}

+ (id)spring;
@property(nonatomic) double stabilityPrecision; // @synthesize stabilityPrecision=_stabilityPrecision;
@property(nonatomic) double stabilityTimeStep; // @synthesize stabilityTimeStep=_stabilityTimeStep;
@property(nonatomic) double mass; // @synthesize mass=_mass;
@property(nonatomic) double dampingConstant; // @synthesize dampingConstant=_dampingConstant;
@property(nonatomic) double springConstant; // @synthesize springConstant=_springConstant;
@property(nonatomic) double springPosition; // @synthesize springPosition=_springPosition;
@property(nonatomic) double velocity; // @synthesize velocity=_velocity;
@property(nonatomic) double position; // @synthesize position=_position;
- (double)accelerationAtTime:(double)arg1;
- (double)velocityAtTime:(double)arg1;
- (double)positionAtTime:(double)arg1;
- (double)potentialEnergyAtTime:(double)arg1;
- (double)kineticEnergyAtTime:(double)arg1;
- (double)timeUntilStable;
- (_Bool)isStableAtTime:(double)arg1;
- (_Bool)isStable;
@property(nonatomic) double naturalFrequency;
@property(nonatomic) double dampingRatio;
- (void)updatePhysicalConstants;
- (void)updateSpringConstants;
- (id)init;

@end

