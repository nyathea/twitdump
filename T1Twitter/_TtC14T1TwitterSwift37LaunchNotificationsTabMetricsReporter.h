//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC14T1TwitterSwift37LaunchNotificationsTabMetricsReporter : _TtCs12_SwiftObject
{
    MISSING_TYPE *launchDestination;
    MISSING_TYPE *appLaunchState;
    MISSING_TYPE *canReportMetrics;
    MISSING_TYPE *createTimestamp;
    MISSING_TYPE *launchCompletion;
    MISSING_TYPE *panelID;
    MISSING_TYPE *metricReporter;
    MISSING_TYPE *unreportedTimestamp;
}

@property(nonatomic, readonly) long long launchDestination; // @synthesize launchDestination;
- (_Bool)shouldCancelMetricReportingWhenViewWillFullyDisappear:(id)arg1 uiInspector:(id)arg2;
- (_Bool)canReportMetricsForTimelineIn:(long long)arg1;
- (_Bool)canMetricsBeReportedWithUiInspector:(id)arg1;
- (void)timelineInitializedForPanelID:(long long)arg1;
- (void)didNotBecomeLaunchDestination;
- (void)didBecomeColdLaunchDestination;

@end

