//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TASToaster : NSObject
{
}

+ (id)defaultToaster;
- (void).cxx_destruct;
- (id)init;
- (void)notifyConferenceJoinRequest:(id)arg1 approveHandler:(CDUnknownBlockType)arg2;
- (void)notifyRecordingSavedWithActionHandler:(CDUnknownBlockType)arg1;
- (void)notifyHostTimedOut;
- (void)notifyPotentialHostTimeout;
- (void)notifyReconnectError;
- (void)notifyReplayStartTimeUpdated:(id)arg1;
- (void)notifyFollowing:(id)arg1 imagePipeline:(id)arg2 seeProfileHandler:(CDUnknownBlockType)arg3;
- (void)notifyFollowing:(id)arg1 imagePipeline:(id)arg2 unfollowHandler:(CDUnknownBlockType)arg3;
- (void)notifyFinishedSpaceWithLeaveHandler:(CDUnknownBlockType)arg1;
- (void)notifyFinishedConferenceWithLeaveHandler:(CDUnknownBlockType)arg1;
- (void)notifyAdminInviteLimitReachedForUser:(id)arg1;
- (void)notifyAdminInviteLimitReached:(unsigned long long)arg1;
- (void)notifyAdminRemovedByUser:(id)arg1;
- (void)notifyAdminRemovedForUser:(id)arg1;
- (void)notifyAddedAsAdminForUser:(id)arg1;
- (void)notifyAdminInviteDeclinedByUser:(id)arg1;
- (void)notifyAdminInviteCancelled;
- (void)notifyRequestedSpeakerRoleToAdmin:(id)arg1;
- (void)notifyAcceptedAsSpeaker;
- (void)notifyAcceptedAsAdmin;
- (void)notifyInvitedAsAdminByUser:(id)arg1 imagePipeline:(id)arg2 requestHandler:(CDUnknownBlockType)arg3;
- (void)notifyAdminInviteSentForUsers:(id)arg1 imagePipeline:(id)arg2;
- (void)notifySpeakerInvitesSentForUsers:(id)arg1;
- (void)notifyInvitedAsSpeakerByAdminUser:(id)arg1 isRecordingEnabled:(_Bool)arg2 requestHandler:(CDUnknownBlockType)arg3;
- (void)notifyBlockedUserJoinedAsSpeakerWithLeaveHandler:(CDUnknownBlockType)arg1;
- (void)notifyAdminMutedRoom:(_Bool)arg1;
- (void)notifySpeakerAdminMutedYou;
- (void)notifySpeakerAdminMutedForUser:(id)arg1;
- (void)notifyRemovedFromSpeakersForUser:(id)arg1;
- (void)notifyAddedAsSpeakerForUser:(id)arg1;
- (void)notifyRemovedByAdmin;
- (void)notifyBlockForUser:(id)arg1 addedToDenylist:(_Bool)arg2 unblockHandler:(CDUnknownBlockType)arg3 leaveHandler:(CDUnknownBlockType)arg4;
- (void)notifySharedTweetDeleted;
- (void)notifySharedTweetWithSpaceTitle:(id)arg1;
- (void)notifySharedViaDMToUsers:(id)arg1;
- (void)notifyReportForUser:(id)arg1 addedToDenylist:(_Bool)arg2 leaveHandler:(CDUnknownBlockType)arg3;
- (void)notifyReportForRoomWithLeaveHandler:(CDUnknownBlockType)arg1;
- (void)notifyAddedToDenylistForUser:(id)arg1;
- (void)notifyError:(id)arg1 actionTitle:(id)arg2 actionHandler:(CDUnknownBlockType)arg3;
- (void)notifyError:(id)arg1 tapHandler:(CDUnknownBlockType)arg2;

@end

