//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface TAVScribeThriftVideoQualityDetails : NSObject
{
    NSNumber *_bufferingDurationMillis;
    NSNumber *_sampledBitrate;
    NSNumber *_dataUsageBytes;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *dataUsageBytes; // @synthesize dataUsageBytes=_dataUsageBytes;
@property(copy, nonatomic) NSNumber *sampledBitrate; // @synthesize sampledBitrate=_sampledBitrate;
@property(copy, nonatomic) NSNumber *bufferingDurationMillis; // @synthesize bufferingDurationMillis=_bufferingDurationMillis;
- (id)marshallerDictionary;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBufferingDurationMillis:(id)arg1 sampledBitrate:(id)arg2 dataUsageBytes:(id)arg3;

@end

