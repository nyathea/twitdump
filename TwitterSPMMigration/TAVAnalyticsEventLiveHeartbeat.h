//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSDictionary, NSString, NSUUID, TAVAnalyticsSessionState, TVDIHeartbeatMetrics;

@interface TAVAnalyticsEventLiveHeartbeat
{
    NSDate *_startDate;
    NSDate *_endDate;
    long long _timeSpentWaiting;
    double _indicatedBitrate;
    long long _numberOfBytesTransferred;
    TVDIHeartbeatMetrics *_heartbeatMetrics;
    long long _audibleDuration;
}

+ (id)private_valueKeys;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long audibleDuration; // @synthesize audibleDuration=_audibleDuration;
@property(readonly, nonatomic) TVDIHeartbeatMetrics *heartbeatMetrics; // @synthesize heartbeatMetrics=_heartbeatMetrics;
@property(readonly, nonatomic) long long numberOfBytesTransferred; // @synthesize numberOfBytesTransferred=_numberOfBytesTransferred;
@property(readonly, nonatomic) double indicatedBitrate; // @synthesize indicatedBitrate=_indicatedBitrate;
@property(readonly, nonatomic) long long timeSpentWaiting; // @synthesize timeSpentWaiting=_timeSpentWaiting;
@property(readonly, copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAnalyticsSessionState:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 timeSpentWaiting:(long long)arg4 indicatedBitrate:(double)arg5 numberOfBytesTransferred:(long long)arg6 heartbeatMetrics:(id)arg7 audibleDuration:(long long)arg8;
- (id)initWithPlaylistItemKey:(id)arg1 analyticsSessionState:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 timeSpentWaiting:(long long)arg5 indicatedBitrate:(double)arg6 numberOfBytesTransferred:(long long)arg7 heartbeatMetrics:(id)arg8 audibleDuration:(long long)arg9;
- (void)updateScribeParameters:(id)arg1;
@property(readonly, copy, nonatomic) NSString *clientEventCategory;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N

@property(readonly, copy, nonatomic) NSString *clientEventAction;

// Remaining properties
@property(readonly, copy, nonatomic) TAVAnalyticsSessionState *analyticsSessionState;
@property(readonly, copy, nonatomic) NSDictionary *clientEventParameters;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSDictionary",?,R,C,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *playlistItemKey;
@property(readonly) Class superclass;

@end

