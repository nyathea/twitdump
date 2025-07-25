//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GrokURLParams, NSArray, NSString, RadarURLParams;

@interface TFNTwitterURLParserResult : NSObject
{
    long long _type;
    long long _searchType;
    NSString *_nativeURLString;
    NSString *_screenName;
    long long _tweetId;
    NSString *_query;
    NSString *_src;
    NSString *_universalLinkURLString;
    NSString *_eventID;
    NSString *_slug;
    NSString *_timelineID;
    NSString *_title;
    NSString *_directMessageConversationID;
    NSString *_highlightsStoryID;
    NSString *_productId;
    NSString *_stickerID;
    NSString *_stickerTabID;
    NSString *_topicID;
    NSString *_topicImpressionID;
    NSString *_topicTaxonomyKey;
    NSString *_topicTaxonomyValue;
    NSString *_momentID;
    NSString *_reportingFollowupURLString;
    NSString *_communityNotesURLString;
    NSString *_listID;
    NSArray *_pinnedTweetIDs;
    NSString *_broadcastID;
    NSString *_spaceID;
    NSString *_sourceID;
    long long _noteID;
    NSString *_communityID;
    NSString *_referringEvent;
    NSString *_creatorID;
    NSString *_alias;
    NSString *_articleID;
    NSString *_jobID;
    NSString *_trackingID;
    NSString *_key;
    GrokURLParams *_grokInfo;
    RadarURLParams *_radarInfo;
    NSString *_jfPath;
    NSString *_jfUrl;
    long long _aiTrendID;
    NSString *_aiTrendMode;
    NSString *_flow;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *flow; // @synthesize flow=_flow;
@property(copy, nonatomic) NSString *aiTrendMode; // @synthesize aiTrendMode=_aiTrendMode;
@property(nonatomic) long long aiTrendID; // @synthesize aiTrendID=_aiTrendID;
@property(copy, nonatomic) NSString *jfUrl; // @synthesize jfUrl=_jfUrl;
@property(copy, nonatomic) NSString *jfPath; // @synthesize jfPath=_jfPath;
@property(retain, nonatomic) RadarURLParams *radarInfo; // @synthesize radarInfo=_radarInfo;
@property(retain, nonatomic) GrokURLParams *grokInfo; // @synthesize grokInfo=_grokInfo;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(copy, nonatomic) NSString *trackingID; // @synthesize trackingID=_trackingID;
@property(copy, nonatomic) NSString *jobID; // @synthesize jobID=_jobID;
@property(copy, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
@property(copy, nonatomic) NSString *alias; // @synthesize alias=_alias;
@property(copy, nonatomic) NSString *creatorID; // @synthesize creatorID=_creatorID;
@property(copy, nonatomic) NSString *referringEvent; // @synthesize referringEvent=_referringEvent;
@property(copy, nonatomic) NSString *communityID; // @synthesize communityID=_communityID;
@property(nonatomic) long long noteID; // @synthesize noteID=_noteID;
@property(copy, nonatomic) NSString *sourceID; // @synthesize sourceID=_sourceID;
@property(copy, nonatomic) NSString *spaceID; // @synthesize spaceID=_spaceID;
@property(copy, nonatomic) NSString *broadcastID; // @synthesize broadcastID=_broadcastID;
@property(copy, nonatomic) NSArray *pinnedTweetIDs; // @synthesize pinnedTweetIDs=_pinnedTweetIDs;
@property(copy, nonatomic) NSString *listID; // @synthesize listID=_listID;
@property(copy, nonatomic) NSString *communityNotesURLString; // @synthesize communityNotesURLString=_communityNotesURLString;
@property(copy, nonatomic) NSString *reportingFollowupURLString; // @synthesize reportingFollowupURLString=_reportingFollowupURLString;
@property(copy, nonatomic) NSString *momentID; // @synthesize momentID=_momentID;
@property(copy, nonatomic) NSString *topicTaxonomyValue; // @synthesize topicTaxonomyValue=_topicTaxonomyValue;
@property(copy, nonatomic) NSString *topicTaxonomyKey; // @synthesize topicTaxonomyKey=_topicTaxonomyKey;
@property(copy, nonatomic) NSString *topicImpressionID; // @synthesize topicImpressionID=_topicImpressionID;
@property(copy, nonatomic) NSString *topicID; // @synthesize topicID=_topicID;
@property(copy, nonatomic) NSString *stickerTabID; // @synthesize stickerTabID=_stickerTabID;
@property(copy, nonatomic) NSString *stickerID; // @synthesize stickerID=_stickerID;
@property(copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(copy, nonatomic) NSString *highlightsStoryID; // @synthesize highlightsStoryID=_highlightsStoryID;
@property(copy, nonatomic) NSString *directMessageConversationID; // @synthesize directMessageConversationID=_directMessageConversationID;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *timelineID; // @synthesize timelineID=_timelineID;
@property(copy, nonatomic) NSString *slug; // @synthesize slug=_slug;
@property(copy, nonatomic) NSString *eventID; // @synthesize eventID=_eventID;
@property(copy, nonatomic) NSString *universalLinkURLString; // @synthesize universalLinkURLString=_universalLinkURLString;
@property(copy, nonatomic) NSString *src; // @synthesize src=_src;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(nonatomic) long long tweetId; // @synthesize tweetId=_tweetId;
@property(copy, nonatomic) NSString *screenName; // @synthesize screenName=_screenName;
@property(copy, nonatomic) NSString *nativeURLString; // @synthesize nativeURLString=_nativeURLString;
@property(nonatomic) long long searchType; // @synthesize searchType=_searchType;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) _Bool shouldUseHTMLTitleForWebView;
@property(readonly, copy, nonatomic) NSString *displayTitleForWebView;

@end

