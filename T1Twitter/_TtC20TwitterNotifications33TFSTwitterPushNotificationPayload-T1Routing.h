//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterNotifications/_TtC20TwitterNotifications33TFSTwitterPushNotificationPayload.h>

@interface _TtC20TwitterNotifications33TFSTwitterPushNotificationPayload (T1Routing)
- (_Bool)_shouldDecryptXChatNotification;
- (_Bool)_shouldHydrateTargetStatus;
- (void)_decryptXChatMessageIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)_hydrateTargetStatusIfNeededWithAccount:(id)arg1 source:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_hydrateSenderUserIfNeededWithAccount:(id)arg1 source:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isLoggedOutPush;
- (void)hydrateFromModelSource:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
@end

