//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol _TtP26TwitterHomePinnedTimelines33PinnedTimelinesRepositoryDelegate_;

@interface _TtC32TwitterHomeFeatureImplementation31CachedPinnedTimelinesRepository : NSObject
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *account;
    MISSING_TYPE *rankingModeIdentifier;
    MISSING_TYPE *timeFilterIdentifier;
    MISSING_TYPE *viewFilterIdentifier;
    MISSING_TYPE *$__lazy_storage_$_actionService;
    MISSING_TYPE *persistentPinnedListsObserver;
    MISSING_TYPE *pinnedTimelines;
}

- (void).cxx_destruct;
- (id)init;
- (void)persistTimelineViewFilter:(id)arg1;
- (void)persistTimelineTimeFilter:(id)arg1;
- (void)persistTimelineRanking:(id)arg1;
- (void)loadInitialPinnedTimelines;
- (void)fetchPinnedTimelinesWithThrottleEnabled:(_Bool)arg1;
- (void)updatePinnedTimelines:(id)arg1;
- (void)unpinTimelineWithTimelineInput:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unpinTimelineWithTimeline:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pinTimelineWithTimelineInput:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pinTimelineWithTimeline:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic) __weak id <_TtP26TwitterHomePinnedTimelines33PinnedTimelinesRepositoryDelegate_> delegate; // @synthesize delegate;

@end

