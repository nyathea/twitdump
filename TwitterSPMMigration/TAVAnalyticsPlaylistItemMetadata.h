//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSURL, TAVAnalyticsBroadcastMetadata, TAVAnalyticsPromotedMetadata, TVDIAnalyticsOwnerIdentifier;

@interface TAVAnalyticsPlaylistItemMetadata : NSObject
{
    _Bool _isAd;
    int _videoType;
    TVDIAnalyticsOwnerIdentifier *_ownerID;
    NSString *_videoID;
    NSString *_scribeElement;
    TAVAnalyticsPromotedMetadata *_promotedContent;
    NSURL *_mediaURL;
    NSNumber *_mediaTimecodeMillis;
    TAVAnalyticsBroadcastMetadata *_broadcastMetadata;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) TAVAnalyticsBroadcastMetadata *broadcastMetadata; // @synthesize broadcastMetadata=_broadcastMetadata;
@property(copy, nonatomic) NSNumber *mediaTimecodeMillis; // @synthesize mediaTimecodeMillis=_mediaTimecodeMillis;
@property(copy, nonatomic) NSURL *mediaURL; // @synthesize mediaURL=_mediaURL;
@property(copy, nonatomic) TAVAnalyticsPromotedMetadata *promotedContent; // @synthesize promotedContent=_promotedContent;
@property(readonly, copy, nonatomic) NSString *scribeElement; // @synthesize scribeElement=_scribeElement;
@property(nonatomic) int videoType; // @synthesize videoType=_videoType;
@property(copy, nonatomic) NSString *videoID; // @synthesize videoID=_videoID;
@property(retain, nonatomic) TVDIAnalyticsOwnerIdentifier *ownerID; // @synthesize ownerID=_ownerID;
@property(nonatomic) _Bool isAd; // @synthesize isAd=_isAd;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIsAd:(_Bool)arg1 ownerID:(id)arg2 videoID:(id)arg3 videoType:(int)arg4 scribeElement:(id)arg5 promotedContent:(id)arg6 mediaURL:(id)arg7 mediaTimecodeMillis:(id)arg8 broadcastMetadata:(id)arg9;
- (id)init;
- (int)tav_videoDetailsVideoType;
@property(readonly, nonatomic) long long broadcastState;

@end

