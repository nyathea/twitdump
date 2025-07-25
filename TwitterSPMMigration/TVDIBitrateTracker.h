//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TAVPlaybackState, TVDIBitrateMetrics;

@interface TVDIBitrateTracker : NSObject
{
    double _runningTotal;
    double _totalTimeElapsed;
    TAVPlaybackState *_lastKnownState;
    double _minimum;
    double _maximum;
}

- (void).cxx_destruct;
@property(nonatomic) double maximum; // @synthesize maximum=_maximum;
@property(nonatomic) double minimum; // @synthesize minimum=_minimum;
@property(retain, nonatomic) TAVPlaybackState *lastKnownState; // @synthesize lastKnownState=_lastKnownState;
@property(nonatomic) double totalTimeElapsed; // @synthesize totalTimeElapsed=_totalTimeElapsed;
@property(nonatomic) double runningTotal; // @synthesize runningTotal=_runningTotal;
@property(readonly, copy, nonatomic) TVDIBitrateMetrics *metrics;
- (void)updateWithPlaybackState:(id)arg1;
- (id)init;

@end

