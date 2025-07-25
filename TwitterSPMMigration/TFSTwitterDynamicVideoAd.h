//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSNumber, NSString, TFSTwitterDynamicVideoAdVideo, _TtC14TFSTwitterCore25TFSTwitterPromotedContent;

@interface TFSTwitterDynamicVideoAd : NSObject
{
    MISSING_TYPE *adId;
    MISSING_TYPE *adStatusId;
    MISSING_TYPE *adType;
    MISSING_TYPE *adVideo;
    MISSING_TYPE *promotedContent;
    MISSING_TYPE *liveEventId;
    MISSING_TYPE *impressionId;
    MISSING_TYPE *videoAnalyticsScribePassthrough;
}

- (void).cxx_destruct;
- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(void *)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithAdId:(id)arg1 adStatusId:(id)arg2 adType:(id)arg3 adVideo:(id)arg4 promotedContent:(id)arg5 liveEventId:(id)arg6 impressionId:(id)arg7 videoAnalyticsScribePassthrough:(id)arg8;
@property(nonatomic, readonly) long long hash;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) _Bool isMarketplace;
@property(nonatomic, readonly) _Bool isAmplify;
@property(nonatomic, readonly) NSString *videoAnalyticsScribePassthrough;
@property(nonatomic, readonly) NSString *impressionId;
@property(nonatomic, readonly) NSString *liveEventId;
@property(nonatomic, readonly) _TtC14TFSTwitterCore25TFSTwitterPromotedContent *promotedContent; // @synthesize promotedContent;
@property(nonatomic, readonly) TFSTwitterDynamicVideoAdVideo *adVideo; // @synthesize adVideo;
@property(nonatomic, readonly) NSNumber *adType; // @synthesize adType;
@property(nonatomic, readonly) NSNumber *adStatusId; // @synthesize adStatusId;
@property(nonatomic, readonly) NSString *adId;

@end

