//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface APMAdExposureReporter : NSObject
{
    NSMutableDictionary *_adUnitCounts;
    NSMutableDictionary *_adUnitStartTimes;
    double _adExposureStartTime;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _reportingEnabled;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic, getter=isReportingEnabled) _Bool reportingEnabled; // @synthesize reportingEnabled=_reportingEnabled;
- (void)handleAppWillResignActiveWithScreen:(id)arg1;
- (void)handleAppDidBecomeActive;
- (void)handleEngagementTimer:(id)arg1;
- (void)handleScreenDidChangeFromScreen:(id)arg1 toScreen:(id)arg2;
- (void)logAdUnitExposureEventOnSerialQueueWithID:(id)arg1 endTime:(double)arg2 screenParameters:(id)arg3;
- (void)logAdExposureEventOnSerialQueueWithEndTime:(double)arg1 screenParameters:(id)arg2;
- (void)logExposureEventsOnSerialQueueWithEndTime:(double)arg1 screenParameters:(id)arg2;
- (void)logExposureEventsWithScreenParameters:(id)arg1;
- (void)updateStartTimesOnSerialQueue:(double)arg1;
- (double)currentTime;
- (void)endAdUnitExposure:(id)arg1;
- (void)beginAdUnitExposure:(id)arg1;
- (void)dealloc;
- (id)init;

@end

