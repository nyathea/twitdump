//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, TAVPerformanceState, TAVPlayerTechnologyControlState, TAVPlayerTechnologyState, TAVPlaylistItem, TAVVideoQualityEndpoint;
@protocol TAVPlayerTechnology;

@interface TAVTechnologicalPlayerInternalItem : NSObject
{
    _Bool _hasTimeControlStatusEverBeenPlaying;
    _Bool _didEngageUser;
    unsigned int _numberOfAutomaticRetryAttemptsInitiated;
    TAVPlaylistItem *_config;
    id <TAVPlayerTechnology> _tech;
    TAVPlayerTechnologyState *_lastKnownState;
    TAVPlayerTechnologyControlState *_lastAppliedControlState;
    unsigned long long _status;
    TAVVideoQualityEndpoint *_resetQualityEndpoint;
    NSMutableArray *_errorsToReportQueue;
    TAVPerformanceState *_aggregatedPerformanceStateFromDiscardedTechs;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TAVPerformanceState *aggregatedPerformanceStateFromDiscardedTechs; // @synthesize aggregatedPerformanceStateFromDiscardedTechs=_aggregatedPerformanceStateFromDiscardedTechs;
@property(retain, nonatomic) NSMutableArray *errorsToReportQueue; // @synthesize errorsToReportQueue=_errorsToReportQueue;
@property(nonatomic) unsigned int numberOfAutomaticRetryAttemptsInitiated; // @synthesize numberOfAutomaticRetryAttemptsInitiated=_numberOfAutomaticRetryAttemptsInitiated;
@property(nonatomic) _Bool didEngageUser; // @synthesize didEngageUser=_didEngageUser;
@property(nonatomic) _Bool hasTimeControlStatusEverBeenPlaying; // @synthesize hasTimeControlStatusEverBeenPlaying=_hasTimeControlStatusEverBeenPlaying;
@property(retain, nonatomic) TAVVideoQualityEndpoint *resetQualityEndpoint; // @synthesize resetQualityEndpoint=_resetQualityEndpoint;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(retain, nonatomic) TAVPlayerTechnologyControlState *lastAppliedControlState; // @synthesize lastAppliedControlState=_lastAppliedControlState;
@property(retain, nonatomic) TAVPlayerTechnologyState *lastKnownState; // @synthesize lastKnownState=_lastKnownState;
@property(retain, nonatomic) id <TAVPlayerTechnology> tech; // @synthesize tech=_tech;
@property(readonly, nonatomic) TAVPlaylistItem *config; // @synthesize config=_config;
- (id)init;
- (void)dealloc;
@property(readonly, nonatomic) TAVPerformanceState *aggregatedPerformanceStateIncludingCurrentTech;
- (id)description;
- (id)initWithConfig:(id)arg1;

@end

