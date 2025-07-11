//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/GDTCORStorageDelegate-Protocol.h>

@class FBLPromise, GDTCORMetrics, NSSet;

@protocol GDTCORMetricsControllerProtocol <GDTCORStorageDelegate>
- (FBLPromise *)offerMetrics:(GDTCORMetrics *)arg1;
- (FBLPromise *)getAndResetMetrics;
- (FBLPromise *)logEventsDroppedForReason:(long long)arg1 events:(NSSet *)arg2;
@end

