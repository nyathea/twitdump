//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSMutableArray, NSNumber, NSSet, NSString, T1CardMediaViewModel, TFCCardPersistedStateManager, TFNTwitterCardContext;

@interface T1PollingCardViewModel : NSObject
{
    _Bool _countsAreFinal;
    _Bool _refreshing;
    TFNTwitterCardContext *_cardContext;
    unsigned long long _numberOfChoices;
    T1CardMediaViewModel *_mediaViewModel;
    NSString *_capiURI;
    TFCCardPersistedStateManager *_cardStateManager;
    long long _cardName;
    NSArray *_pollChoiceLabels;
    NSMutableArray *_pollChoiceCounts;
    NSMutableArray *_cachedPercentages;
    NSString *_cardURL;
    NSNumber *_selectedChoice;
    long long _audienceType;
    NSDate *_pollEnd;
}

+ (id)_audienceStringForType:(long long)arg1;
+ (long long)_pollingCardAudienceTypeForValue:(id)arg1;
+ (id)_sharedCountFormatter;
+ (id)_sharedPercentFormatter;
+ (id)_sharedDateFormatter;
+ (unsigned long long)_numberOfChoicesFromCardName:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic, getter=isRefreshing) _Bool refreshing; // @synthesize refreshing=_refreshing;
@property(retain, nonatomic) NSDate *pollEnd; // @synthesize pollEnd=_pollEnd;
@property(nonatomic) long long audienceType; // @synthesize audienceType=_audienceType;
@property(retain, nonatomic) NSNumber *selectedChoice; // @synthesize selectedChoice=_selectedChoice;
@property(copy, nonatomic) NSString *cardURL; // @synthesize cardURL=_cardURL;
@property(retain, nonatomic) NSMutableArray *cachedPercentages; // @synthesize cachedPercentages=_cachedPercentages;
@property(retain, nonatomic) NSMutableArray *pollChoiceCounts; // @synthesize pollChoiceCounts=_pollChoiceCounts;
@property(retain, nonatomic) NSArray *pollChoiceLabels; // @synthesize pollChoiceLabels=_pollChoiceLabels;
@property(nonatomic) long long cardName; // @synthesize cardName=_cardName;
@property(retain, nonatomic) TFCCardPersistedStateManager *cardStateManager; // @synthesize cardStateManager=_cardStateManager;
@property(nonatomic) _Bool countsAreFinal; // @synthesize countsAreFinal=_countsAreFinal;
@property(copy, nonatomic) NSString *capiURI; // @synthesize capiURI=_capiURI;
@property(readonly, nonatomic) T1CardMediaViewModel *mediaViewModel; // @synthesize mediaViewModel=_mediaViewModel;
@property(nonatomic) unsigned long long numberOfChoices; // @synthesize numberOfChoices=_numberOfChoices;
@property(retain, nonatomic) TFNTwitterCardContext *cardContext; // @synthesize cardContext=_cardContext;
- (id)themeForDisplayMode:(long long)arg1;
- (_Bool)_updateFromNotificationCardData:(id)arg1;
- (void)_voteResponseNotification:(id)arg1;
- (void)_refreshResponse:(id)arg1;
- (void)stopRefresh;
- (void)startRefresh;
- (void)setLastUpdate:(id)arg1;
- (id)lastUpdate;
@property(readonly, nonatomic) NSSet *winningIndices;
- (id)capiRequestForVote;
@property(readonly, nonatomic) NSString *textForPollStatus;
- (_Bool)_isPollAuthor;
@property(readonly, nonatomic) _Bool shouldDisplayResults;
@property(readonly, nonatomic) _Bool hasVoted;
@property(nonatomic) unsigned long long voteIndex;
- (void)_clearVoteIndex;
- (id)verifiedEligibilityInlineCalloutConfiguration;
@property(readonly, nonatomic) NSString *axUserRunningPoll;
- (id)_timeIntervalString:(double)arg1;
@property(readonly, nonatomic) NSString *remainingTimeText;
- (id)_voteText;
@property(readonly, nonatomic) long long totalCount;
- (id)_choiceCountForIndex:(unsigned long long)arg1;
- (id)_fractionForIndex:(unsigned long long)arg1;
- (double)percentageForIndex:(unsigned long long)arg1;
- (id)percentageStringForIndex:(unsigned long long)arg1;
- (id)choiceStringForIndex:(unsigned long long)arg1;
@property(readonly, nonatomic, getter=isVerifiedOnlyPoll) _Bool verifiedOnlyPoll;
@property(readonly, nonatomic, getter=isEligibleToVote) _Bool eligibleToVote;
- (void)dealloc;
- (id)initWithCardContext:(id)arg1;

@end

