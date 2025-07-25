//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, PTVAuthErrorObserver, PTVBatteryStats, PTVBroadcastController, PTVGuestRoomControllerObservers, PTVGuestRoomLiveVideoView, PTVGuestRoomParticipants, PTVPublishLifecycleManager, PTVPublishingPipeline, PTVTAVVideoViewController;
@protocol PTVGuestCoordinator, PTVLoggedInUserProtocol, TAVPlayback, TAVScribe;

@interface PTVGuestRoomBroadcastController : NSObject
{
    _Bool _locked;
    _Bool _muted;
    _Bool _availableForReplay;
    _Bool _availableForClipping;
    _Bool _playAudio;
    _Bool _noIncognito;
    _Bool _isPreviewing;
    _Bool _observingPublishingGuestCoordinator;
    _Bool _shouldAutomaticallyTryToJoinAsSpeaker;
    _Bool _shouldDisconnectFromPreviousSession;
    _Bool _hasJoinedAsSpeaker;
    _Bool _hasAddedLogListener;
    _Bool _isIgnoringMetadataAfterTransitioningFromPublishingToWatching;
    unsigned long long _totalUsersCount;
    NSString *_title;
    long long _narrowCastType;
    long long _conversationControlType;
    long long _contentType;
    NSArray *_mentionedTwitterUserIDs;
    NSArray *_topicIDs;
    double _replayStartTime;
    id <TAVScribe> _scribe;
    NSDictionary *_sourceParameters;
    long long _initialPinnedTweetID;
    NSString *_communityID;
    id <PTVLoggedInUserProtocol> _loggedInUser;
    PTVBroadcastController *_broadcastController;
    NSObject<PTVGuestCoordinator> *_guestCoordinator;
    PTVTAVVideoViewController *_mainPlayer;
    PTVGuestRoomParticipants *_participants;
    PTVGuestRoomControllerObservers *_observers;
    NSString *_channelID;
    NSArray *_preferredLanguages;
    PTVAuthErrorObserver *_authErrorObserver;
    PTVBatteryStats *_batteryStats;
    unsigned long long _ntpForLastTransitionFromPublishingToWatching;
    PTVPublishLifecycleManager *_publishLifecycleManager;
    PTVPublishingPipeline *_sourcePipeline;
    PTVGuestRoomLiveVideoView *_liveVideoView;
    CDStruct_08766ad0 _features;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PTVGuestRoomLiveVideoView *liveVideoView; // @synthesize liveVideoView=_liveVideoView;
@property(retain, nonatomic) PTVPublishingPipeline *sourcePipeline; // @synthesize sourcePipeline=_sourcePipeline;
@property(retain, nonatomic) PTVPublishLifecycleManager *publishLifecycleManager; // @synthesize publishLifecycleManager=_publishLifecycleManager;
@property(nonatomic) _Bool isIgnoringMetadataAfterTransitioningFromPublishingToWatching; // @synthesize isIgnoringMetadataAfterTransitioningFromPublishingToWatching=_isIgnoringMetadataAfterTransitioningFromPublishingToWatching;
@property(nonatomic) unsigned long long ntpForLastTransitionFromPublishingToWatching; // @synthesize ntpForLastTransitionFromPublishingToWatching=_ntpForLastTransitionFromPublishingToWatching;
@property(retain, nonatomic) PTVBatteryStats *batteryStats; // @synthesize batteryStats=_batteryStats;
@property(nonatomic) _Bool hasAddedLogListener; // @synthesize hasAddedLogListener=_hasAddedLogListener;
@property(nonatomic) _Bool hasJoinedAsSpeaker; // @synthesize hasJoinedAsSpeaker=_hasJoinedAsSpeaker;
@property(retain, nonatomic) PTVAuthErrorObserver *authErrorObserver; // @synthesize authErrorObserver=_authErrorObserver;
@property(nonatomic) _Bool shouldDisconnectFromPreviousSession; // @synthesize shouldDisconnectFromPreviousSession=_shouldDisconnectFromPreviousSession;
@property(nonatomic) _Bool shouldAutomaticallyTryToJoinAsSpeaker; // @synthesize shouldAutomaticallyTryToJoinAsSpeaker=_shouldAutomaticallyTryToJoinAsSpeaker;
@property(retain, nonatomic) NSArray *preferredLanguages; // @synthesize preferredLanguages=_preferredLanguages;
@property(retain, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
@property(retain, nonatomic) PTVGuestRoomControllerObservers *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) PTVGuestRoomParticipants *participants; // @synthesize participants=_participants;
@property(retain, nonatomic) PTVTAVVideoViewController *mainPlayer; // @synthesize mainPlayer=_mainPlayer;
@property(nonatomic, getter=isObservingPublishingGuestCoordinator) _Bool observingPublishingGuestCoordinator; // @synthesize observingPublishingGuestCoordinator=_observingPublishingGuestCoordinator;
@property(retain, nonatomic) NSObject<PTVGuestCoordinator> *guestCoordinator; // @synthesize guestCoordinator=_guestCoordinator;
@property(retain, nonatomic) PTVBroadcastController *broadcastController; // @synthesize broadcastController=_broadcastController;
@property(readonly, nonatomic) CDStruct_08766ad0 features; // @synthesize features=_features;
@property(readonly, nonatomic) id <PTVLoggedInUserProtocol> loggedInUser; // @synthesize loggedInUser=_loggedInUser;
@property(readonly, nonatomic) _Bool isPreviewing; // @synthesize isPreviewing=_isPreviewing;
@property(nonatomic) _Bool noIncognito; // @synthesize noIncognito=_noIncognito;
@property(copy, nonatomic) NSString *communityID; // @synthesize communityID=_communityID;
@property(nonatomic) long long initialPinnedTweetID; // @synthesize initialPinnedTweetID=_initialPinnedTweetID;
@property(nonatomic) _Bool playAudio; // @synthesize playAudio=_playAudio;
@property(copy, nonatomic) NSDictionary *sourceParameters; // @synthesize sourceParameters=_sourceParameters;
@property(retain, nonatomic) id <TAVScribe> scribe; // @synthesize scribe=_scribe;
@property(nonatomic) double replayStartTime; // @synthesize replayStartTime=_replayStartTime;
@property(nonatomic, getter=isAvailableForClipping) _Bool availableForClipping; // @synthesize availableForClipping=_availableForClipping;
@property(nonatomic, getter=isAvailableForReplay) _Bool availableForReplay; // @synthesize availableForReplay=_availableForReplay;
@property(copy, nonatomic) NSArray *topicIDs; // @synthesize topicIDs=_topicIDs;
@property(copy, nonatomic) NSArray *mentionedTwitterUserIDs; // @synthesize mentionedTwitterUserIDs=_mentionedTwitterUserIDs;
@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) long long contentType; // @synthesize contentType=_contentType;
@property(nonatomic) long long conversationControlType; // @synthesize conversationControlType=_conversationControlType;
@property(nonatomic) long long narrowCastType; // @synthesize narrowCastType=_narrowCastType;
@property(nonatomic, getter=isLocked) _Bool locked; // @synthesize locked=_locked;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (_Bool)publishingPipelineDefaultsInFrontPosition;
- (void)cameraRuntimeError;
- (void)publishingPipelineDidUpdateInterruptState:(id)arg1;
- (void)publishingPipeline:(id)arg1 didReceiveLogEntry:(id)arg2;
- (void)updateVideoOrientation;
- (void)onCameraTypeChange:(long long)arg1;
- (void)noteCameraChange;
- (void)imageRotation:(double)arg1 immediate:(_Bool)arg2;
- (void)publishingPipeline:(id)arg1 willProcessVisualFrame:(struct opaqueCMSampleBuffer *)arg2 captureOrientation:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)didChangeLocalAudioSource:(_Bool)arg1 isUsingHeadphones:(_Bool)arg2;
- (void)cameraStartFailed;
- (void)cameraStartComplete;
- (void)attemptReconnect;
@property(readonly) PTVPublishingPipeline *sourcePipelineIfLoaded;
- (id)janusURL;
- (id)ownedViewControllers;
- (id)debugViewController;
- (void)logWatchingEvent:(id)arg1;
- (void)logVoiceRoomEvent:(id)arg1;
- (void)lhls_logWithLevel:(long long)arg1 file:(id)arg2 line:(int)arg3 message:(id)arg4;
- (void)_ptv_resumeListenerPlayback;
- (void)_ptv_handleReplayAudioChangeWithReason:(long long)arg1;
- (void)_ptv_handleLiveSpaceAudioChangeWithReason:(long long)arg1;
- (void)_ptv_handleAudioChangeWithReason:(long long)arg1;
- (void)_ptv_handleAudioSessionRouteChange:(id)arg1;
- (void)_ptv_handleAudioSessionInterruption:(id)arg1;
- (void)_ptv_handleApplicationDidBecomeActive:(id)arg1;
- (void)_ptv_unobserveAppAndAudioEvents;
- (void)_ptv_observeAppAndAudioEvents;
- (void)authErrorObserver:(id)arg1 didObserveAuthError:(id)arg2;
- (void)_ptv_readAndCancelGuestCallerSessionID;
- (void)_ptv_writeGuestCallerSessionID;
- (void)viewerCountdownWasCancelledByBroadcaster;
- (void)viewerRequestToAutomaticallyJoinAsGuestWasCancelled;
- (void)viewerDidGetHungUpOnByBroadcaster;
- (void)viewerDidTransitionToAdmin:(_Bool)arg1;
- (void)viewerDidCancelRequestToCallIn;
- (void)viewerRequestToCallInWasAcceptedWithConfiguration:(id)arg1;
- (void)videoPlayerDidChangePlayerStatus:(unsigned long long)arg1;
- (void)resetChatToCurrentTime;
- (id)chatReplayModel;
- (void)videoPlayerDidReachEndOfVideo;
- (void)videoPlayerDidReceiveTimedMetadataWithDescription:(id)arg1 value:(id)arg2;
- (void)_ptv_handleLowerHandMessage:(id)arg1;
- (void)_ptv_handleRaiseHandMessage:(id)arg1;
- (void)_ptv_handleRemoveAdminMessage:(id)arg1;
- (void)_ptv_handleMuteSpaceMessage:(id)arg1 muted:(_Bool)arg2;
- (void)_ptv_handleMuteGuestMessage:(id)arg1 muted:(_Bool)arg2;
- (void)_ptv_handleMessage:(id)arg1;
- (_Bool)_ptv_isValidMessage:(id)arg1 fromSender:(id)arg2;
- (void)chatController:(id)arg1 loggedInUserBlockedByBroadcasterInMessage:(id)arg2;
- (void)chatController:(id)arg1 didReceiveFinalMessages:(id)arg2;
- (void)chatController:(id)arg1 didSendMessage:(id)arg2;
- (void)chatController:(id)arg1 didReceiveQueuedMessage:(id)arg2 deliveryQueueSize:(unsigned long long)arg3;
- (void)broadcastWatcher:(id)arg1 willTransitionToWatchBroadcastState:(long long)arg2;
- (_Bool)broadcastWatcherShouldLog:(id)arg1;
- (double)broadcastControllerReplayDuration:(id)arg1;
- (double)broadcastControllerCurrentReplayTimeInterval:(id)arg1;
- (id)broadcastControllerProgramDateTime:(id)arg1;
- (unsigned long long)broadcastControllerNTPForNow:(id)arg1;
- (unsigned long long)broadcastControllerNTPForCurrentFrame:(id)arg1;
- (_Bool)broadcastController:(id)arg1 didReceiveMessage:(id)arg2 isForReplay:(_Bool)arg3;
- (id)broadcastController:(id)arg1 deliveryDateForMessage:(id)arg2 isForReplay:(_Bool)arg3;
- (_Bool)isWatchingTimeBehindLastKnownPublishingTime;
- (unsigned long long)ntpToSeekTo;
- (_Bool)isSeekingToNTPTime;
- (id)deliveryDateForNTP:(unsigned long long)arg1;
- (id)programDateTime;
- (unsigned long long)ntpForNow;
- (unsigned long long)ntpForCurrentFrame;
- (void)guestCoordinatorCameraStartDidComplete:(id)arg1;
- (void)guestCoordinator:(id)arg1 updateVideoOrientationWithCameraPreferredOrientation:(long long)arg2;
- (void)guestCoordinator:(id)arg1 updateCameraPreviewView:(id)arg2;
- (void)guestCoordinator:(id)arg1 didUpdateGuestCallerSession:(id)arg2;
- (void)guestCoordinator:(id)arg1 didUpdateFullyConnected:(_Bool)arg2 forUserID:(id)arg3;
- (void)guestCoordinator:(id)arg1 didChangeLocallyMuted:(_Bool)arg2;
- (void)guestCoordinatorFailedToJoinBroadcast:(id)arg1;
- (void)guestCoordinatorDidDetectEndOfBroadcast:(id)arg1;
- (void)guestCoordinator:(id)arg1 didLogEntry:(id)arg2;
- (void)guestCoordinator:(id)arg1 didCollectPeriodicPublishingStats:(id)arg2;
- (void)guestCoordinator:(id)arg1 didCollectPeriodicPlaybackStats:(id)arg2;
- (void)guestCoordinator:(id)arg1 didCollectEndOfStreamStats:(id)arg2;
- (_Bool)guestCoordinator:(id)arg1 canAddGuestWithUserID:(id)arg2;
- (id)guestCoordinator:(id)arg1 guestViewWithUserID:(id)arg2;
- (void)guestCoordinator:(id)arg1 removeGuestViewWithUserID:(id)arg2 shouldReshuffleGuestViews:(_Bool)arg3;
- (void)guestCoordinator:(id)arg1 reconcileAndRemoveUserIDs:(id)arg2;
- (void)guestCoordinator:(id)arg1 addGuestView:(id)arg2;
- (void)guestView:(id)arg1 videoSizeDidChange:(struct CGSize)arg2;
- (_Bool)_ptv_useDTX;
- (long long)_ptv_guestRoomBehavior;
- (_Bool)_ptv_hasVideoContentType;
- (void)_ptv_updateCurrentUserSpeakerStatus;
- (void)guestRoomParticipantsDidUpdateAudioLevels:(id)arg1;
- (void)guestRoomParticipantsDidUpdateUsers:(id)arg1;
- (void)fetchParticipantsWithProviderContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) unsigned long long totalUsersCount; // @synthesize totalUsersCount=_totalUsersCount;
@property(readonly, nonatomic) NSArray *users;
- (id)_ptv_generateBroadcastFromGuestRoom:(id)arg1;
@property(readonly, nonatomic) id <TAVPlayback> playback;
- (void)_ptv_playWithVideoAccess:(id)arg1;
- (void)broadcastWatcher:(id)arg1 didFailToFetchVideoAccessWithError:(id)arg2;
- (void)broadcastWatcher:(id)arg1 didUpdateVideoAccess:(id)arg2 previousVideoAccess:(id)arg3;
- (void)_ptv_handleBroadcastWithPublishingAccess:(id)arg1 speedTestSize:(long long)arg2 speedTestDuration:(double)arg3 janusSessionID:(id)arg4 guestServicesSessionUUID:(id)arg5 error:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_ptv_clearPublishingAccess;
- (id)_ptv_readGuestServicesSessionUUID;
- (void)_ptv_writeGuestServicesSessionUUID:(id)arg1;
- (id)_ptv_readJanusSessionID;
- (id)_ptv_readPublishingAccess;
- (void)_ptv_writePublishingAccess:(id)arg1 withJanusSessionID:(id)arg2;
- (void)_ptv_writePublishingAccess;
- (id)_ptv_defaultsKeyWithKeyPrefix:(id)arg1;
- (void)_ptv_handleStartBroadcastWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)_ptv_accessScheduledBroadcastWithBroadcastID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_ptv_startBroadcastWithBroadcast:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_ptv_reconnectHostBroadcastWithBroadcastID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_ptv_createBroadcastWithRegion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_ptv_performSpeedTestWithCompletion:(CDUnknownBlockType)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_ptv_unobservePublishingGuestCoordinator;
- (void)_ptv_observePublishingGuestCoordinator;
- (void)_ptv_didTransitionFromGuestCoordinator:(id)arg1;
- (void)_ptv_willTransitionToGuestCoordinator:(id)arg1;
- (id)watchingGuestCoordinator;
- (id)publishingGuestCoordinator;
- (id)guestCallerController;
- (id)chatController;
- (id)publisher;
- (id)watcher;
- (void)updateReplayStartTime:(double)arg1;
- (void)updateAvailableForClipping:(_Bool)arg1;
- (void)updateAvailableForReplay:(_Bool)arg1;
- (void)updateTopicIDs:(id)arg1;
- (void)updateMentionedTwitterUserIDs:(id)arg1;
- (void)updateConversationControlType:(long long)arg1;
- (void)updateLocked:(_Bool)arg1;
- (void)_ptv_editBroadcastWithUpdatedSettingsWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateSettingsWithTitle:(id)arg1 availableForReplay:(_Bool)arg2 availableForClipping:(_Bool)arg3 replayStartTime:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (void)updateTitle:(id)arg1;
- (void)locallyHideGuestRoomWithID:(id)arg1;
- (void)_ptv_reportWithReportedUserID:(id)arg1 withType:(id)arg2 roomID:(id)arg3 fromFeed:(_Bool)arg4;
- (void)reportGuestRoomWithType:(id)arg1 roomID:(id)arg2 fromFeed:(_Bool)arg3;
- (void)reportUser:(id)arg1 withType:(id)arg2 roomID:(id)arg3;
- (id)reportTypesForUser:(id)arg1;
- (id)reportTypesForGuestRoom;
- (void)allowlistWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeUserFromAllowlist:(id)arg1;
- (void)addUsersToAllowlist:(id)arg1;
- (void)denylistWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeUserFromDenylist:(id)arg1;
- (void)addUserToDenylist:(id)arg1;
- (void)setRaisedHandEmoji:(id)arg1 forUser:(id)arg2;
- (void)_ptv_setUserMuted:(_Bool)arg1 user:(id)arg2 updateAPI:(_Bool)arg3 forceUpdate:(_Bool)arg4;
- (void)setUserMuted:(_Bool)arg1 user:(id)arg2;
- (void)requestGuestRoomMuted:(_Bool)arg1;
@property(readonly, nonatomic) double currentPlaybackTime;
- (void)createClipWithBroadcastID:(id)arg1 startTime:(double)arg2 endTime:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getClipWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendSharingEventString:(id)arg1;
- (void)sendText:(id)arg1 language:(id)arg2;
- (void)sendPrivateEmoji:(id)arg1 toUser:(id)arg2;
- (void)sendEmoji:(id)arg1;
- (void)updateInterfaceOrientation;
- (void)shutdownCamera;
- (void)setUserCameraDisabled:(_Bool)arg1 user:(id)arg2;
- (_Bool)isCameraDisabledForUser:(id)arg1;
- (_Bool)isPhoneCameraInFrontPosition;
- (void)selectNextPhoneCamera;
- (id)localCameraView;
- (void)_ptv_updateLiveVideoView;
- (void)removeUserAsAdmin:(id)arg1 isPending:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)switchAsAdmin;
- (void)inviteUserAsAdmin:(id)arg1;
- (void)inviteUserAsSpeaker:(id)arg1;
- (void)removeUserAsSpeaker:(id)arg1;
- (void)rejectUserAsSpeaker:(id)arg1;
- (void)acceptUserAsSpeaker:(id)arg1;
- (_Bool)canAcceptMoreSpeakers;
- (void)switchAsListener;
- (void)cancelSwitchAsSpeaker;
- (void)switchAsSpeaker;
- (void)shutdown;
- (void)playClipWithGuestRoom:(id)arg1 videoAccessManager:(id)arg2 sourceParameters:(id)arg3;
- (void)_ptv_createPublisherAndStartPipelineIfNeeded;
- (void)_ptv_initializeWatcher:(id)arg1 broadcast:(id)arg2 videoAccessManager:(id)arg3;
- (void)joinExistingRoomWithGuestRoom:(id)arg1 joinMode:(unsigned long long)arg2 videoAccessManager:(id)arg3 sourceParameters:(id)arg4;
- (void)previewRoomWithGuestRoom:(id)arg1 videoAccessManager:(id)arg2;
- (void)startPublishLifecycleWithVideoAccessManager:(id)arg1;
- (void)publishScheduledRoomWithRoomID:(id)arg1;
- (void)prepareReconnectHostWithBroadcastID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reconnectHostWithBroadcastID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createNewRoomWithChannelID:(id)arg1;
- (id)_ptv_loggedInGuestRoomUser;
- (_Bool)_ptv_isLoggedInGuestRoomUser:(id)arg1;
- (void)removeGuestRoomControllerObserver:(id)arg1;
- (void)addGuestRoomControllerObserver:(id)arg1;
- (void)dealloc;
- (id)initWithLoggedInUser:(id)arg1 preferredLanguages:(id)arg2 features:(CDStruct_08766ad0)arg3 scribe:(id)arg4 participantsProvider:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

