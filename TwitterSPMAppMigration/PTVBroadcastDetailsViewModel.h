//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSIndexPath, NSString, PTVBroadcast, PTVBroadcastController, PTVBroadcastStats, PTVWorkClientWithCompletion;
@protocol PTVBroadcastDetailsViewModelDelegate;

@interface PTVBroadcastDetailsViewModel : NSObject
{
    PTVBroadcastDetailsViewModel *_weakSelf;
    _Bool _hasLoadedViewersAndStats;
    PTVWorkClientWithCompletion *_workClientModerationReportCount;
    _Bool _hasLoadedModerationCount;
    _Bool _hasLoadedStarTotal;
    id <PTVBroadcastDetailsViewModelDelegate> _delegate;
    long long _indexOfParticipantGraphSection;
    unsigned long long _moderationCount;
    long long _totalStarsEarned;
    PTVBroadcastController *_broadcastController;
    NSArray *_sections;
}

+ (_Bool)CanLoadMapForBroadcastController:(id)arg1;
+ (_Bool)CanLoadModerationActionCountForBroadcastController:(id)arg1;
+ (_Bool)CanLoadReplayViewersForBroadcastController:(id)arg1;
+ (_Bool)CanLoadLiveViewersForBroadcastController:(id)arg1;
+ (_Bool)ShouldShowBroadcastDetailsWithBroadcastController:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(readonly, nonatomic) PTVBroadcastController *broadcastController; // @synthesize broadcastController=_broadcastController;
@property(readonly, nonatomic) _Bool hasLoadedStarTotal; // @synthesize hasLoadedStarTotal=_hasLoadedStarTotal;
@property(nonatomic) long long totalStarsEarned; // @synthesize totalStarsEarned=_totalStarsEarned;
@property(readonly, nonatomic) _Bool hasLoadedModerationCount; // @synthesize hasLoadedModerationCount=_hasLoadedModerationCount;
@property(readonly, nonatomic) unsigned long long moderationCount; // @synthesize moderationCount=_moderationCount;
@property(readonly, nonatomic) long long indexOfParticipantGraphSection; // @synthesize indexOfParticipantGraphSection=_indexOfParticipantGraphSection;
@property(nonatomic) __weak id <PTVBroadcastDetailsViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didUpdateReplayViewerWithID:(id)arg1;
- (long long)numberOfHeartsSentByReplayViewer:(id)arg1;
- (id)replayViewersSectionTitle;
@property(readonly, nonatomic) NSString *titleForTruncatedReplayViewers;
- (_Bool)isIndexPathOfReplayViewer:(id)arg1;
- (_Bool)isIndexPathOfTruncatedReplayViewers:(id)arg1;
@property(readonly, nonatomic) long long numberOfTruncatedReplayViewers;
- (id)indexPathOfReplayViewerWithID:(id)arg1;
- (long long)indexOfReplayViewerWithRemoteID:(id)arg1;
- (id)replayViewerAtIndexPath:(id)arg1;
@property(readonly, nonatomic) long long numberOfReplayHearts;
- (id)replayViewers;
- (long long)numberOfItemsInReplayViewersSection;
- (long long)indexOfReplayViewersSection;
- (_Bool)shouldShowReplayViewers;
- (void)didUpdateLiveViewerWithID:(id)arg1;
- (long long)numberOfHeartsSentByLiveViewer:(id)arg1;
- (id)liveViewersSectionTitle;
- (_Bool)isIndexPathOfLiveViewer:(id)arg1;
- (_Bool)isIndexPathOfTruncatedLiveViewers:(id)arg1;
@property(readonly, nonatomic) NSString *titleForTruncatedLiveViewers;
@property(readonly, nonatomic) long long numberOfTruncatedLiveViewers;
- (id)indexPathOfLiveViewerWithID:(id)arg1;
- (long long)indexOfLiveViewerWithRemoteID:(id)arg1;
- (id)liveViewerAtIndexPath:(id)arg1;
- (id)liveViewers;
- (long long)numberOfItemsInLiveViewersSection;
- (long long)indexOfLiveViewersSection;
- (_Bool)shouldShowLiveViewers;
@property(readonly, nonatomic) long long numberOfCommentsReceived;
@property(readonly, nonatomic) PTVBroadcastStats *broadcastStats;
@property(readonly, nonatomic) NSIndexPath *statisticsIndexPath;
@property(readonly, nonatomic) long long indexOfStatisticsSection;
- (_Bool)shouldShowStatistics;
@property(readonly, nonatomic) NSIndexPath *participantGraphIndexPath;
@property(readonly, nonatomic) long long presentOccupancy;
- (void)didUpdateViewerCounts;
- (_Bool)shouldShowViewerCounts;
@property(readonly, nonatomic) long long replayViewersCount;
@property(readonly, nonatomic) long long liveViewersCount;
@property(readonly, nonatomic) long long totalViewersCount;
@property(readonly, nonatomic) NSIndexPath *totalViewersIndexPath;
@property(readonly, nonatomic) long long indexOfTotalViewersSection;
- (_Bool)shouldShowMap;
- (id)titleForSection:(long long)arg1;
- (_Bool)isLastIndexPathInSection:(id)arg1;
- (_Bool)containsSectionType:(long long)arg1;
- (long long)indexOfSectionOfType:(long long)arg1;
- (id)calculateSections;
- (void)recalculateSections;
@property(readonly, nonatomic) _Bool shouldShowModerationActions;
@property(readonly, nonatomic) _Bool shouldShowStars;
- (long long)numberOfItemsInSectionAtIndex:(long long)arg1;
- (long long)sectionTypeAtIndex:(long long)arg1;
@property(readonly, nonatomic) long long numberOfSections;
- (void)didUpdateNumberOfCommentsReceived;
- (void)didUpdateOccupancyMetrics;
- (void)didUpdateViewerWithID:(id)arg1;
- (void)didSendMessage:(id)arg1;
- (void)didReceiveMessage:(id)arg1;
- (void)didRecalculateSections;
@property(readonly, nonatomic) NSDate *broadcastStartDate;
@property(readonly, nonatomic) _Bool isLive;
- (void)didReceiveBroadcastViewersAndStats:(id)arg1;
- (_Bool)failedToLoadViewersAndStats;
@property(readonly, nonatomic, getter=isLoadingViewersAndStats) _Bool loadingViewersAndStats;
@property(readonly, nonatomic) _Bool isShowingPlaceholderData;
@property(readonly, nonatomic) NSArray *occupancyMetrics;
@property(readonly, nonatomic) _Bool canShowModerationReport;
- (void)processModerationReportCountResults:(id)arg1;
- (void)loadModerationCount;
@property(readonly, nonatomic) _Bool shouldShowFollowButtonsForContributors;
- (id)constructLeaderboard;
- (void)loadStarsEarned;
@property(readonly, nonatomic) _Bool hasViewersAndStatsData;
- (id)viewersAndStats;
- (_Bool)shouldLoadData;
- (void)loadDataIfNeeded;
- (void)loadData;
@property(readonly, nonatomic) _Bool loggedInUserIsBroadcaster;
- (_Bool)isLoggedInUserFollowingUserID:(id)arg1;
- (_Bool)isLoggedInUser:(id)arg1;
- (id)loggedInUser;
- (id)chatController;
@property(readonly, nonatomic) PTVBroadcast *broadcast;
- (id)initWithBroadcastController:(id)arg1;
- (void)chatControllerDidUpdateOccupancyMetrics:(id)arg1;
- (void)chatController:(id)arg1 didSendMessage:(id)arg2;
- (void)chatController:(id)arg1 didReceiveQueuedMessage:(id)arg2 deliveryQueueSize:(unsigned long long)arg3;
- (void)chatController:(id)arg1 didReceiveBroadcastViewersAndStats:(id)arg2;
- (void)chatController:(id)arg1 didReceiveChatRoomPresenceEvent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

