//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol TASSpacesContext;

@interface T1VoiceRoomScheduledSpaceViewModel : NSObject
{
    MISSING_TYPE *context;
    MISSING_TYPE *title;
    MISSING_TYPE *scheduledDate;
    MISSING_TYPE *topicIDs;
    MISSING_TYPE *narrowCastType;
    MISSING_TYPE *contentType;
    MISSING_TYPE *isAvailableForReplay;
    MISSING_TYPE *isAvailableForClipping;
    MISSING_TYPE *isAvailableForTweetSharing;
    MISSING_TYPE *schedulerViewModel;
    MISSING_TYPE *spaceModel;
    MISSING_TYPE *authorizationManager;
    MISSING_TYPE *needsLoading;
    MISSING_TYPE *communityID;
    MISSING_TYPE *noIncognito;
    MISSING_TYPE *delegate;
}

- (void).cxx_destruct;
- (id)init;
- (void)unsubscribe;
- (void)subscribeWithAutomaticToast:(_Bool)arg1;
- (void)scheduleSpace;
- (void)dealloc;
- (id)initWithSpaceModel:(id)arg1;
- (id)initWithContext:(id)arg1 title:(id)arg2 scheduledDate:(id)arg3 isAvailableForReplay:(_Bool)arg4 isAvailableForClipping:(_Bool)arg5 authorizationManager:(id)arg6 topicIDs:(id)arg7 narrowCastType:(long long)arg8 contentType:(long long)arg9 isAvailableForTweetSharing:(_Bool)arg10 communityID:(id)arg11 noIncognito:(_Bool)arg12;
@property(nonatomic, readonly) id <TASSpacesContext> context; // @synthesize context;
- (void)spaceModel:(id)arg1 didUpdateSettings:(id)arg2;
- (void)spaceModelDidChangeConnectionState:(id)arg1 fromState:(long long)arg2;
- (void)spaceModel:(id)arg1 didFailToUnsubscribeScheduledSpaceWithError:(id)arg2 sender:(id)arg3;
- (void)spaceModel:(id)arg1 didUnsubscribeScheduledSpaceWithSpaceID:(id)arg2 sender:(id)arg3;
- (void)spaceModel:(id)arg1 didFailToSubscribeScheduledSpaceWithError:(id)arg2 sender:(id)arg3 automaticToast:(_Bool)arg4;
- (void)spaceModel:(id)arg1 didSubscribeScheduledSpaceWithSpaceID:(id)arg2 sender:(id)arg3 automaticToast:(_Bool)arg4;
- (void)spaceModel:(id)arg1 didUpdateLoggedInUserModel:(id)arg2;

@end

