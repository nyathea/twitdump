//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface GDTCORLogSourceMetrics : NSObject
{
    NSDictionary *_droppedEventCounterByLogSource;
}

+ (_Bool)supportsSecureCoding;
+ (id)dictionaryByMergingDictionary:(id)arg1 withOtherDictionary:(id)arg2 uniquingKeysWithBlock:(CDUnknownBlockType)arg3;
+ (id)metricsWithEvents:(id)arg1 droppedForReason:(long long)arg2;
+ (id)metrics;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *droppedEventCounterByLogSource; // @synthesize droppedEventCounterByLogSource=_droppedEventCounterByLogSource;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToLogSourceMetrics:(id)arg1;
- (id)logSourceMetricsByMergingWithLogSourceMetrics:(id)arg1;
- (id)initWithDroppedEventCounterByLogSource:(id)arg1;

@end

