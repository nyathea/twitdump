//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol TPSFeatureSwitchesAccess;

@interface T1SearchFeatures : NSObject
{
    id <TPSFeatureSwitchesAccess> _featureSwitches;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <TPSFeatureSwitchesAccess> featureSwitches; // @synthesize featureSwitches=_featureSwitches;
@property(readonly, nonatomic) _Bool advancedSearchUpsellEnabled;
@property(readonly, nonatomic) _Bool searchNewNavigationEnabled;
@property(readonly, nonatomic) double hashfettiParticleCount;
@property(readonly, nonatomic) double hashfettiDuration;
@property(readonly, nonatomic) _Bool hashfettiEnabled;
@property(readonly, nonatomic) _Bool communityTopSearchTabEnabled;
@property(readonly, nonatomic) _Bool communityTweetSearchEnabled;
@property(readonly, nonatomic) _Bool communityHashtagsEnabled;
@property(readonly, nonatomic) _Bool feedbackPromptModalPresentationEnabled;
@property(readonly, nonatomic) _Bool recentSearchReranking;
@property(readonly, nonatomic) _Bool typeaheadEmptyTopicPromptEnabled;
@property(readonly, nonatomic) unsigned long long maximumNumberOfRecentSearches;
@property(readonly, nonatomic) NSString *emptySearchResultsSearchSettingsLinkURLString;
- (id)init;
- (id)initWithFeatureSwitches:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

