//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, RTCLegacyStatsReport;

@interface PTVWebRTCVideoBandwidthEstimateReport : NSObject
{
    RTCLegacyStatsReport *_statsReport;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) RTCLegacyStatsReport *statsReport; // @synthesize statsReport=_statsReport;
@property(readonly, nonatomic) NSNumber *targetEncodeBitrate;
@property(readonly, nonatomic) NSNumber *retransmissionsSent;
@property(readonly, nonatomic) NSNumber *availableSendBandwidth;
@property(readonly, nonatomic) NSNumber *availableReceiveBandwidth;
- (id)initWithStatsReport:(id)arg1;

@end

