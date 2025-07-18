//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol T1ListCopyStringsProvider;

@interface T1ListFeatures : NSObject
{
    MISSING_TYPE *stringsProvider;
    MISSING_TYPE *featureSwitches;
    MISSING_TYPE *kDefaultBackendStorageColdstartTTLInterval;
    MISSING_TYPE *kDefaultBackendStorageWriteDelayInterval;
    MISSING_TYPE *kDefaultUserRecommendationRemovalInterval;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) _Bool isLevelUpPromptEnabled;
@property(nonatomic, readonly) _Bool isDetailPageMutingEnabledUnsafePeek;
@property(nonatomic, readonly) _Bool isDetailPageMutingEnabled;
@property(nonatomic, readonly) double userRecommendationRemovalInterval;
@property(nonatomic, readonly) _Bool isDetailsPageSearchEnabled;
@property(nonatomic, readonly) _Bool isRankingModeControlEnabled;
@property(nonatomic, readonly) _Bool isDetailsPageReportListEnabled;
@property(nonatomic, readonly) _Bool isDetailsPageSharingEnabled;
@property(nonatomic, readonly) _Bool isListsCellRedesignEnabled;
@property(nonatomic, readonly) _Bool isSearchManagementPageEnabled;
@property(nonatomic, readonly) _Bool isSearchDescriptionEnabled;
- (id)initWithFeatureSwitches:(id)arg1;
@property(nonatomic, retain) id <T1ListCopyStringsProvider> stringsProvider; // @synthesize stringsProvider;

@end

