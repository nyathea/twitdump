//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol GDTCORStoragePromiseProtocol;

@interface GDTCORMetricsController : NSObject
{
    id <GDTCORStoragePromiseProtocol> _storage;
}

+ (id)sharedInstance;
+ (void)load;
- (void).cxx_destruct;
@property(retain, nonatomic) id <GDTCORStoragePromiseProtocol> storage; // @synthesize storage=_storage;
- (void)storage:(id)arg1 didDropEvent:(id)arg2;
- (void)storage:(id)arg1 didRemoveExpiredEvents:(id)arg2;
- (id)offerMetrics:(id)arg1;
- (id)getAndResetMetrics;
- (id)logEventsDroppedForReason:(long long)arg1 events:(id)arg2;
- (id)initWithStorage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

