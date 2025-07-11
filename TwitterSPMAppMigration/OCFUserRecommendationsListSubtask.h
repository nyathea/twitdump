//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, OCFNavigationLink, OCFRichText;

@interface OCFUserRecommendationsListSubtask
{
    OCFRichText *_primaryText;
    OCFRichText *_secondaryText;
    NSString *_searchHint;
    OCFRichText *_nextLinkLabelEnabledText;
    OCFRichText *_nextLinkLabelDisabledText;
    NSArray *_nextLinkThresholdText;
    NSArray *_groups;
    long long _style;
    long long _followButtonType;
    long long _fetchUserRecommendationsLocation;
    long long _minFollowCount;
    OCFNavigationLink *_nextLink;
    OCFNavigationLink *_skipLink;
    OCFRichText *_categoryTooltipText;
    OCFRichText *_userTooltipText;
    OCFRichText *_progressIndicatorText;
}

+ (long long)version;
+ (id)remainingFollowCountSubtaskDataKey;
+ (id)completedFollowCountSubtaskDataKey;
+ (id)typeNames;
- (void).cxx_destruct;
@property(readonly, nonatomic) OCFRichText *progressIndicatorText; // @synthesize progressIndicatorText=_progressIndicatorText;
@property(readonly, nonatomic) OCFRichText *userTooltipText; // @synthesize userTooltipText=_userTooltipText;
@property(readonly, nonatomic) OCFRichText *categoryTooltipText; // @synthesize categoryTooltipText=_categoryTooltipText;
@property(readonly, nonatomic) OCFNavigationLink *skipLink; // @synthesize skipLink=_skipLink;
@property(readonly, nonatomic) OCFNavigationLink *nextLink; // @synthesize nextLink=_nextLink;
@property(readonly, nonatomic) long long minFollowCount; // @synthesize minFollowCount=_minFollowCount;
@property(readonly, nonatomic) long long fetchUserRecommendationsLocation; // @synthesize fetchUserRecommendationsLocation=_fetchUserRecommendationsLocation;
@property(readonly, nonatomic) long long followButtonType; // @synthesize followButtonType=_followButtonType;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(readonly, nonatomic) NSArray *groups; // @synthesize groups=_groups;
@property(retain, nonatomic) NSArray *nextLinkThresholdText; // @synthesize nextLinkThresholdText=_nextLinkThresholdText;
@property(readonly, nonatomic) OCFRichText *nextLinkLabelDisabledText; // @synthesize nextLinkLabelDisabledText=_nextLinkLabelDisabledText;
@property(readonly, nonatomic) OCFRichText *nextLinkLabelEnabledText; // @synthesize nextLinkLabelEnabledText=_nextLinkLabelEnabledText;
@property(readonly, nonatomic) NSString *searchHint; // @synthesize searchHint=_searchHint;
@property(readonly, nonatomic) OCFRichText *secondaryText; // @synthesize secondaryText=_secondaryText;
@property(readonly, nonatomic) OCFRichText *primaryText; // @synthesize primaryText=_primaryText;
- (id)header;
- (id)initWithJSONDictionary:(id)arg1 subtaskID:(id)arg2 typeName:(id)arg3 backNavigationType:(long long)arg4 backNavigationLink:(id)arg5 error:(id *)arg6;

@end

