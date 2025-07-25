//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterAppSPMMigration/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSError, NSString, PTVBroadcastViewersAndStats, PTVChatController, PTVMergeParticipantUser, PTVMessage;

@protocol PTVChatControllerObserver <NSObject>

@optional
- (void)chatController:(PTVChatController *)arg1 broadcasterDidReceiveCancelCountdownMessage:(PTVMessage *)arg2;
- (void)chatController:(PTVChatController *)arg1 broadcasterDidReceiveCancelledRequestToCallInMessage:(PTVMessage *)arg2;
- (void)chatController:(PTVChatController *)arg1 broadcasterDidReceiveRequestToCallInMessage:(PTVMessage *)arg2;
- (void)chatController:(PTVChatController *)arg1 viewerDidReceiveMotionDataFromMessage:(PTVMessage *)arg2;
- (void)chatController:(PTVChatController *)arg1 viewerDidReceiveCallInsListEnabledDisabledMessage:(PTVMessage *)arg2;
- (void)chatController:(PTVChatController *)arg1 viewerDidReceiveGuestWasRemovedMessage:(PTVMessage *)arg2;
- (void)chatController:(PTVChatController *)arg1 viewerCountdownWasCancelledByBroadcaster:(PTVMessage *)arg2;
- (void)chatController:(PTVChatController *)arg1 audioRoomListenerDidCompleteTransitionToSpeakerFromMessage:(PTVMessage *)arg2;
- (void)chatController:(PTVChatController *)arg1 viewerVideoOrAudioFeedIsConnected:(PTVMessage *)arg2;
- (void)chatController:(PTVChatController *)arg1 viewerRequestToCallInWasAccepted:(PTVMessage *)arg2;
- (void)chatController:(PTVChatController *)arg1 viewerDidObserveOtherViewerRequestToCallInMessage:(PTVMessage *)arg2;
- (void)chatController:(PTVChatController *)arg1 didReceiveBroadcastEndedMessage:(PTVMessage *)arg2;
- (void)chatController:(PTVChatController *)arg1 messageWasUnmuted:(PTVMessage *)arg2;
- (void)chatController:(PTVChatController *)arg1 messageWasMuted:(PTVMessage *)arg2;
- (void)chatControllerDidEndPunishment:(PTVChatController *)arg1;
- (void)chatControllerDidBeginPunishment:(PTVChatController *)arg1;
- (void)chatControllerChatReplayTimerDidFire:(PTVChatController *)arg1;
- (void)chatControllerDidUpdateCurrentGift:(PTVChatController *)arg1;
- (void)chatControllerDidLoadAmplifyPrograms:(PTVChatController *)arg1;
- (void)chatControllerDidUpdateOccupancyMetrics:(PTVChatController *)arg1;
- (void)chatController:(PTVChatController *)arg1 didSendMessage:(PTVMessage *)arg2;
- (void)chatController:(PTVChatController *)arg1 didReceiveFinalMessages:(NSArray *)arg2;
- (void)chatController:(PTVChatController *)arg1 loggedInUserBlockedByBroadcasterInMessage:(PTVMessage *)arg2;
- (void)chatController:(PTVChatController *)arg1 didReceiveJuryDutyTimeout:(PTVMessage *)arg2;
- (void)chatController:(PTVChatController *)arg1 didReceiveJuryDutyVerdict:(PTVMessage *)arg2;
- (void)chatController:(PTVChatController *)arg1 wasSelectedForJuryDuty:(PTVMessage *)arg2;
- (void)chatController:(PTVChatController *)arg1 didReceiveBlockMessage:(PTVMessage *)arg2;
- (void)chatController:(PTVChatController *)arg1 didReceiveBanType:(unsigned long long)arg2 duration:(double)arg3;
- (void)chatController:(PTVChatController *)arg1 didReceiveModerationSentenceType:(unsigned long long)arg2 duration:(double)arg3;
- (void)chatController:(PTVChatController *)arg1 didReceiveBroadcastViewersAndStats:(PTVBroadcastViewersAndStats *)arg2;
- (void)chatController:(PTVChatController *)arg1 userDidLeaveChat:(PTVMergeParticipantUser *)arg2;
- (void)chatController:(PTVChatController *)arg1 userDidJoinChat:(PTVMergeParticipantUser *)arg2;
- (void)chatController:(PTVChatController *)arg1 didChangeChatState:(unsigned long long)arg2 error:(NSError *)arg3;
- (void)chatController:(PTVChatController *)arg1 didSubscribeWithSuccess:(_Bool)arg2;
- (void)chatControllerDidJoinChatRoom:(PTVChatController *)arg1;
- (void)chatController:(PTVChatController *)arg1 didLogEvent:(NSString *)arg2;
- (void)chatController:(PTVChatController *)arg1 didReceiveAuthenticationError:(NSError *)arg2;
- (void)chatControllerConnectionDidFail:(PTVChatController *)arg1;
- (void)chatController:(PTVChatController *)arg1 didReceiveChatRoomPresenceEvent:(NSDictionary *)arg2;
- (void)chatControllerDidChangeChatRoomAccess:(PTVChatController *)arg1;
- (void)chatControllerDidDropChatMessage:(PTVChatController *)arg1;
- (void)chatController:(PTVChatController *)arg1 didReceiveQueuedMessage:(PTVMessage *)arg2 deliveryQueueSize:(unsigned long long)arg3;
@end

