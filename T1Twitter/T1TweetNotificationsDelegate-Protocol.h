//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1AccountNotificationSettingsProperty;
@protocol TFSTwitterCanonicalUser;

@protocol T1TweetNotificationsDelegate <NSObject>
- (void)handleNotificationButtonTapForUser:(id <TFSTwitterCanonicalUser>)arg1 notificationSettingsProperty:(T1AccountNotificationSettingsProperty *)arg2 tweetNotificationsRelationshipState:(long long)arg3;
@end

