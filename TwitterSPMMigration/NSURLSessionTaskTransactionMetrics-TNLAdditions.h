//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURLSessionTaskTransactionMetrics.h>

@class NSDate;

@interface NSURLSessionTaskTransactionMetrics (TNLAdditions)
- (id)tnl_ttlbDuration;
- (id)tnl_ttfbDuration;
- (id)tnl_secureConnectionDurationExt;
- (id)tnl_totalDuration;
- (id)tnl_responseReceiveDuration;
- (id)tnl_serverTimeDuration;
- (id)tnl_requestSendDuration;
- (id)tnl_secureConnectionDuration;
- (id)tnl_transportConnectionDuration;
- (id)tnl_connectDuration;
- (id)tnl_domainLookupDuration;
@property(readonly, nonatomic) NSDate *tnl_transportConnectionEndDate;
@property(readonly, nonatomic) NSDate *tnl_transportConnectionStartDate;
- (double)tnl_knownDuration;
- (id)tnl_latestDate;
- (id)tnl_earliestDate;
- (id)tnl_timingDescription;
- (id)tnl_resourceFetchTypeDebugString;
- (id)tnl_medadata;
- (id)tnl_dictionaryDescription;
- (id)tnl_dictionaryValue;
@end

