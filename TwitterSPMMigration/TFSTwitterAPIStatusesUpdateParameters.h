//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface TFSTwitterAPIStatusesUpdateParameters : NSObject
{
    _Bool _longform;
    _Bool _earned;
    _Bool _periscopeBroadcastIsLive;
    _Bool _nudgeEnabled;
    _Bool _nudgeTestingKeywordEnabled;
    NSString *_status;
    NSNumber *_inReplyToStatusID;
    NSArray *_excludeReplyUserIDs;
    NSNumber *_previousTweetId;
    NSNumber *_latitude;
    NSNumber *_longitude;
    NSString *_placeID;
    NSString *_geotaggingMode;
    NSString *_geoSearchRequestID;
    NSString *_attachmentURL;
    NSArray *_mediaIDs;
    NSDictionary *_mediaTagsDictionary;
    NSString *_mediaTags;
    NSString *_cardURI;
    NSString *_impressionID;
    NSString *_engagementMetadata;
    NSString *_semanticAnnotationIds;
    NSString *_periscopeBroadcastID;
    NSString *_periscopeBroadcastCreatorID;
    NSString *_previousNudgeID;
    NSArray *_nudgeTypes;
    unsigned long long _batchMode;
    unsigned long long _conversationControlType;
    NSString *_comparisonID;
    long long _exclusiveTweetControlType;
    NSArray *_richTextTags;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *richTextTags; // @synthesize richTextTags=_richTextTags;
@property(nonatomic) long long exclusiveTweetControlType; // @synthesize exclusiveTweetControlType=_exclusiveTweetControlType;
@property(copy, nonatomic) NSString *comparisonID; // @synthesize comparisonID=_comparisonID;
@property(nonatomic) unsigned long long conversationControlType; // @synthesize conversationControlType=_conversationControlType;
@property(nonatomic) unsigned long long batchMode; // @synthesize batchMode=_batchMode;
@property(copy, nonatomic) NSArray *nudgeTypes; // @synthesize nudgeTypes=_nudgeTypes;
@property(copy, nonatomic) NSString *previousNudgeID; // @synthesize previousNudgeID=_previousNudgeID;
@property(nonatomic, getter=isNudgeTestingKeywordEnabled) _Bool nudgeTestingKeywordEnabled; // @synthesize nudgeTestingKeywordEnabled=_nudgeTestingKeywordEnabled;
@property(nonatomic, getter=isNudgeEnabled) _Bool nudgeEnabled; // @synthesize nudgeEnabled=_nudgeEnabled;
@property(nonatomic) _Bool periscopeBroadcastIsLive; // @synthesize periscopeBroadcastIsLive=_periscopeBroadcastIsLive;
@property(copy, nonatomic) NSString *periscopeBroadcastCreatorID; // @synthesize periscopeBroadcastCreatorID=_periscopeBroadcastCreatorID;
@property(copy, nonatomic) NSString *periscopeBroadcastID; // @synthesize periscopeBroadcastID=_periscopeBroadcastID;
@property(copy, nonatomic) NSString *semanticAnnotationIds; // @synthesize semanticAnnotationIds=_semanticAnnotationIds;
@property(copy, nonatomic) NSString *engagementMetadata; // @synthesize engagementMetadata=_engagementMetadata;
@property(nonatomic, getter=isEarned) _Bool earned; // @synthesize earned=_earned;
@property(copy, nonatomic) NSString *impressionID; // @synthesize impressionID=_impressionID;
@property(copy, nonatomic) NSString *cardURI; // @synthesize cardURI=_cardURI;
@property(copy, nonatomic) NSString *mediaTags; // @synthesize mediaTags=_mediaTags;
@property(copy, nonatomic) NSDictionary *mediaTagsDictionary; // @synthesize mediaTagsDictionary=_mediaTagsDictionary;
@property(copy, nonatomic) NSArray *mediaIDs; // @synthesize mediaIDs=_mediaIDs;
@property(copy, nonatomic) NSString *attachmentURL; // @synthesize attachmentURL=_attachmentURL;
@property(copy, nonatomic) NSString *geoSearchRequestID; // @synthesize geoSearchRequestID=_geoSearchRequestID;
@property(copy, nonatomic) NSString *geotaggingMode; // @synthesize geotaggingMode=_geotaggingMode;
@property(copy, nonatomic) NSString *placeID; // @synthesize placeID=_placeID;
@property(retain, nonatomic) NSNumber *longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSNumber *latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSNumber *previousTweetId; // @synthesize previousTweetId=_previousTweetId;
@property(nonatomic, getter=isLongform) _Bool longform; // @synthesize longform=_longform;
@property(copy, nonatomic) NSArray *excludeReplyUserIDs; // @synthesize excludeReplyUserIDs=_excludeReplyUserIDs;
@property(retain, nonatomic) NSNumber *inReplyToStatusID; // @synthesize inReplyToStatusID=_inReplyToStatusID;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)APIParameters;

@end

