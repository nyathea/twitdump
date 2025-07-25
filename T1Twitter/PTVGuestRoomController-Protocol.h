//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSNumber, NSString, PTVGuestRoom, PTVGuestRoomLiveVideoView, PTVGuestRoomReportType, PTVGuestRoomUser, PTVVideoAccessManager, UIView, UIViewController;
@protocol PTVGuestRoomControllerObserver, PTVGuestRoomParticipantsProviderContext, TAVPlayback;

@protocol PTVGuestRoomController <NSObject>
- (NSString *)janusURL;
- (NSArray *)ownedViewControllers;
- (UIViewController *)debugViewController;
- (void)logVoiceRoomEvent:(NSString *)arg1;
- (void)fetchParticipantsWithProviderContext:(id <PTVGuestRoomParticipantsProviderContext>)arg1 completion:(void (^)(NSArray *, unsigned long long))arg2;
- (void)updateInterfaceOrientation;
- (void)shutdownCamera;
- (void)setUserCameraDisabled:(_Bool)arg1 user:(PTVGuestRoomUser *)arg2;
- (_Bool)isCameraDisabledForUser:(PTVGuestRoomUser *)arg1;
- (_Bool)isPhoneCameraInFrontPosition;
- (void)selectNextPhoneCamera;
- (UIView *)localCameraView;
- (PTVGuestRoomLiveVideoView *)liveVideoView;
- (void)locallyHideGuestRoomWithID:(NSString *)arg1;
- (void)reportGuestRoomWithType:(PTVGuestRoomReportType *)arg1 roomID:(NSString *)arg2 fromFeed:(_Bool)arg3;
- (void)reportUser:(PTVGuestRoomUser *)arg1 withType:(PTVGuestRoomReportType *)arg2 roomID:(NSString *)arg3;
- (NSArray *)reportTypesForGuestRoom;
- (NSArray *)reportTypesForUser:(PTVGuestRoomUser *)arg1;
- (void)allowlistWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)removeUserFromAllowlist:(NSNumber *)arg1;
- (void)addUsersToAllowlist:(NSArray *)arg1;
- (void)denylistWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)removeUserFromDenylist:(NSNumber *)arg1;
- (void)addUserToDenylist:(PTVGuestRoomUser *)arg1;
- (void)setRaisedHandEmoji:(NSString *)arg1 forUser:(PTVGuestRoomUser *)arg2;
- (void)setUserMuted:(_Bool)arg1 user:(PTVGuestRoomUser *)arg2;
- (void)requestGuestRoomMuted:(_Bool)arg1;
- (void)resetChatToCurrentTime;
- (void)sendSharingEventString:(NSString *)arg1;
- (void)sendText:(NSString *)arg1 language:(NSString *)arg2;
- (void)sendPrivateEmoji:(NSString *)arg1 toUser:(PTVGuestRoomUser *)arg2;
- (void)sendEmoji:(NSString *)arg1;
- (void)removeUserAsAdmin:(PTVGuestRoomUser *)arg1 isPending:(_Bool)arg2 completion:(void (^)(_Bool))arg3;
- (void)switchAsAdmin;
- (void)inviteUserAsAdmin:(PTVGuestRoomUser *)arg1;
- (void)inviteUserAsSpeaker:(PTVGuestRoomUser *)arg1;
- (void)removeUserAsSpeaker:(PTVGuestRoomUser *)arg1;
- (void)rejectUserAsSpeaker:(PTVGuestRoomUser *)arg1;
- (void)acceptUserAsSpeaker:(PTVGuestRoomUser *)arg1;
- (_Bool)canAcceptMoreSpeakers;
- (void)switchAsListener;
- (void)cancelSwitchAsSpeaker;
- (void)switchAsSpeaker;
- (void)shutdown;
- (void)reconnectHostWithBroadcastID:(NSString *)arg1 completion:(void (^)(_Bool))arg2;
- (void)prepareReconnectHostWithBroadcastID:(NSString *)arg1 completion:(void (^)(_Bool))arg2;
- (void)createClipWithBroadcastID:(NSString *)arg1 startTime:(double)arg2 endTime:(double)arg3 completion:(void (^)(id, NSError *))arg4;
- (void)getClipWithID:(NSString *)arg1 completion:(void (^)(id, NSError *))arg2;
- (void)playClipWithGuestRoom:(PTVGuestRoom *)arg1 videoAccessManager:(PTVVideoAccessManager *)arg2 sourceParameters:(NSDictionary *)arg3;
- (void)startPublishLifecycleWithVideoAccessManager:(PTVVideoAccessManager *)arg1;
- (void)publishScheduledRoomWithRoomID:(NSString *)arg1;
- (void)joinExistingRoomWithGuestRoom:(PTVGuestRoom *)arg1 joinMode:(unsigned long long)arg2 videoAccessManager:(PTVVideoAccessManager *)arg3 sourceParameters:(NSDictionary *)arg4;
- (void)previewRoomWithGuestRoom:(PTVGuestRoom *)arg1 videoAccessManager:(PTVVideoAccessManager *)arg2;
- (void)createNewRoomWithChannelID:(NSString *)arg1;
- (void)removeGuestRoomControllerObserver:(id <PTVGuestRoomControllerObserver>)arg1;
- (void)addGuestRoomControllerObserver:(id <PTVGuestRoomControllerObserver>)arg1;
@property(nonatomic, readonly) id <TAVPlayback> playback;
@property(nonatomic, readonly) NSArray *users;
@property(nonatomic, readonly) unsigned long long totalUsersCount;
- (void)updateSettingsWithTitle:(NSString *)arg1 availableForReplay:(_Bool)arg2 availableForClipping:(_Bool)arg3 replayStartTime:(double)arg4 completion:(void (^)(id, NSError *))arg5;
- (void)updateReplayStartTime:(double)arg1;
- (void)updateAvailableForClipping:(_Bool)arg1;
- (void)updateAvailableForReplay:(_Bool)arg1;
- (void)updateTopicIDs:(NSArray *)arg1;
- (void)updateMentionedTwitterUserIDs:(NSArray *)arg1;
- (void)updateConversationControlType:(long long)arg1;
- (void)updateLocked:(_Bool)arg1;
- (void)updateTitle:(NSString *)arg1;
@property(nonatomic, readonly) _Bool isPreviewing;
@property(nonatomic) _Bool noIncognito;
@property(nonatomic, copy) NSString *communityID;
@property(nonatomic, readonly) double currentPlaybackTime;
@property(nonatomic) _Bool playAudio;
@property(nonatomic, copy) NSDictionary *sourceParameters;
@property(nonatomic) double replayStartTime;
@property(nonatomic) _Bool availableForClipping;
- (_Bool)isAvailableForClipping;
@property(nonatomic) _Bool availableForReplay;
- (_Bool)isAvailableForReplay;
@property(nonatomic) long long initialPinnedTweetID;
@property(nonatomic, copy) NSArray *topicIDs;
@property(nonatomic, copy) NSArray *mentionedTwitterUserIDs;
@property(nonatomic) _Bool muted;
- (_Bool)isMuted;
@property(nonatomic) long long contentType;
@property(nonatomic) long long conversationControlType;
@property(nonatomic) long long narrowCastType;
@property(nonatomic) _Bool locked;
- (_Bool)isLocked;
@property(nonatomic, copy) NSString *title;
@end

