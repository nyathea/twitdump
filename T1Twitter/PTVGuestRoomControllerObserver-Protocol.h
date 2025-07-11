//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSArray, NSError, NSString, PTVAPIResponseErrorInfo, PTVGuestRoomUser;
@protocol PTVGuestRoomController, TAVPlayback;

@protocol PTVGuestRoomControllerObserver <NSObject>

@optional
- (void)guestRoomController:(id <PTVGuestRoomController>)arg1 didReceiveConferenceJoinRequestFromUser:(PTVGuestRoomUser *)arg2;
- (void)guestRoomControllerDidUpdateLiveVideoView:(id <PTVGuestRoomController>)arg1;
- (void)guestRoomController:(id <PTVGuestRoomController>)arg1 didUpdatePlayback:(id <TAVPlayback>)arg2;
- (void)guestRoomControllerDidDetectUserAudioSessionDeviceRemoved:(id <PTVGuestRoomController>)arg1;
- (void)guestRoomController:(id <PTVGuestRoomController>)arg1 didObserveAuthError:(PTVAPIResponseErrorInfo *)arg2;
- (void)guestRoomControllerDidDetectRoomMutedByAdmin:(id <PTVGuestRoomController>)arg1 muted:(_Bool)arg2;
- (void)guestRoomControllerDidDetectUserMutedByAdmin:(id <PTVGuestRoomController>)arg1;
- (void)guestRoomControllerDidDetectUserTransitionedToAdmin:(id <PTVGuestRoomController>)arg1 withSuccess:(_Bool)arg2;
- (void)guestRoomControllerDidDetectUserCancelledRequestToCallIn:(id <PTVGuestRoomController>)arg1;
- (void)guestRoomControllerDidDetectUserRemovedByAdmin:(id <PTVGuestRoomController>)arg1;
- (void)guestRoomControllerDidDetectRoomDestroyed:(id <PTVGuestRoomController>)arg1;
- (void)guestRoomController:(id <PTVGuestRoomController>)arg1 didReceiveAdminRemovalFromUser:(PTVGuestRoomUser *)arg2;
- (void)guestRoomController:(id <PTVGuestRoomController>)arg1 didReceiveAdminCancellationFromUser:(PTVGuestRoomUser *)arg2;
- (void)guestRoomController:(id <PTVGuestRoomController>)arg1 didReceiveAdminDeclinationFromUser:(PTVGuestRoomUser *)arg2;
- (void)guestRoomController:(id <PTVGuestRoomController>)arg1 didReceiveAdminAcceptanceFromUser:(PTVGuestRoomUser *)arg2;
- (void)guestRoomController:(id <PTVGuestRoomController>)arg1 didReceiveAdminInvitationFromUser:(PTVGuestRoomUser *)arg2;
- (void)guestRoomController:(id <PTVGuestRoomController>)arg1 didReceiveInvitationToSpeakFromUser:(PTVGuestRoomUser *)arg2;
- (void)guestRoomController:(id <PTVGuestRoomController>)arg1 didReceiveSharingEventString:(NSString *)arg2 fromUser:(PTVGuestRoomUser *)arg3;
- (void)guestRoomController:(id <PTVGuestRoomController>)arg1 didReceiveFinalTranscriptions:(NSArray *)arg2;
- (void)guestRoomController:(id <PTVGuestRoomController>)arg1 didReceiveTranscription:(NSString *)arg2 isTranscriptionFinal:(_Bool)arg3 language:(NSString *)arg4 fromUser:(PTVGuestRoomUser *)arg5;
- (void)guestRoomController:(id <PTVGuestRoomController>)arg1 didReceiveText:(NSString *)arg2 language:(NSString *)arg3 fromUser:(PTVGuestRoomUser *)arg4;
- (void)guestRoomController:(id <PTVGuestRoomController>)arg1 didReceiveEmoji:(NSString *)arg2 privately:(_Bool)arg3 fromUser:(PTVGuestRoomUser *)arg4;
- (void)guestRoomControllerDidUpdateAudioLevels:(id <PTVGuestRoomController>)arg1;
- (void)guestRoomController:(id <PTVGuestRoomController>)arg1 didUpdateUsers:(NSArray *)arg2 totalUsersCount:(unsigned long long)arg3;
- (void)guestRoomControllerDidSwitchWithSuccess:(id <PTVGuestRoomController>)arg1 asSpeaker:(_Bool)arg2;
- (void)guestRoomController:(id <PTVGuestRoomController>)arg1 didFailToPublishScheduledRoomWithError:(NSError *)arg2;
- (void)guestRoomController:(id <PTVGuestRoomController>)arg1 didFailToJoinRoomWithError:(NSError *)arg2;
- (void)guestRoomControllerDidJoinRoomWithSuccess:(id <PTVGuestRoomController>)arg1 asSpeaker:(_Bool)arg2;
- (void)guestRoomController:(id <PTVGuestRoomController>)arg1 didFailToStartRoomWithError:(NSError *)arg2;
- (void)guestRoomControllerDidStartRoomWithSuccess:(id <PTVGuestRoomController>)arg1 mediaKey:(NSString *)arg2;
- (void)guestRoomController:(id <PTVGuestRoomController>)arg1 didFailToCreateRoomWithError:(NSError *)arg2;
- (void)guestRoomController:(id <PTVGuestRoomController>)arg1 didCreateRoomWithSuccessWithRoomID:(NSString *)arg2;
@end

