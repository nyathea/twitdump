//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString, TFSTwitterPromotedAdMetadataContainer, TFSTwitterPromotedClickTrackingInfo, _TtC14TFSTwitterCore29TFSTwitterPromotedSSPMetadata;

@interface _TtC14TFSTwitterCore25TFSTwitterPromotedContent : NSObject
{
    MISSING_TYPE *impressionID;
    MISSING_TYPE *disclosureType;
    MISSING_TYPE *socialContextUserReferences;
    MISSING_TYPE *socialContextType;
    MISSING_TYPE *advertiserName;
    MISSING_TYPE *advertiserUsername;
    MISSING_TYPE *advertiserID;
    MISSING_TYPE *promotedTrendName;
    MISSING_TYPE *promotedTrendQueryTerm;
    MISSING_TYPE *adMetadataContainer;
    MISSING_TYPE *clickTrackingInfo;
    MISSING_TYPE *rtbCreativeID;
    MISSING_TYPE *dedupeIds;
    MISSING_TYPE *sspMetadata;
    MISSING_TYPE *isPromotedAccountInTimeline;
}

+ (id)promotedContentWithImpressionID:(id)arg1 disclosureType:(long long)arg2;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(void *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic, readonly) long long hash;
- (id)initWithJSONDictionary:(id)arg1 users:(id)arg2;
@property(nonatomic, readonly) _Bool isPromotedAccountInTimeline; // @synthesize isPromotedAccountInTimeline;
@property(nonatomic, readonly) _Bool isRTBCreative;
@property(nonatomic, readonly) _Bool isPromotedTrend;
@property(nonatomic, readonly) _Bool isPromoted;
@property(nonatomic, readonly) _Bool isEarned;
@property(nonatomic, readonly) _Bool isPoliticalAd;
@property(nonatomic, readonly) _Bool isIssueAd;
@property(nonatomic, readonly) long long unifiedDisclosureType;
@property(nonatomic, readonly) _TtC14TFSTwitterCore29TFSTwitterPromotedSSPMetadata *sspMetadata; // @synthesize sspMetadata;
@property(nonatomic, readonly) NSArray *dedupeIds;
@property(nonatomic, readonly) NSString *rtbCreativeID;
@property(nonatomic, readonly) TFSTwitterPromotedClickTrackingInfo *clickTrackingInfo; // @synthesize clickTrackingInfo;
@property(nonatomic, readonly) TFSTwitterPromotedAdMetadataContainer *adMetadataContainer; // @synthesize adMetadataContainer;
@property(nonatomic, readonly) NSString *promotedTrendQueryTerm;
@property(nonatomic, readonly) NSString *promotedTrendName;
@property(nonatomic, readonly) NSString *advertiserID;
@property(nonatomic, readonly) NSString *advertiserUsername;
@property(nonatomic, readonly) NSString *advertiserName;
@property(nonatomic, readonly) long long socialContextType; // @synthesize socialContextType;
@property(nonatomic, readonly) NSArray *socialContextUserReferences;
@property(nonatomic, readonly) NSString *disclosureType;
@property(nonatomic, readonly) NSString *impressionID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

