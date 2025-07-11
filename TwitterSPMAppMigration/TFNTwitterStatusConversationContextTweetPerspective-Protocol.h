//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterAppSPMMigration/_TtP8TAPTweet19TAPTweetPerspective_-Protocol.h>

@class NSArray, NSString, TFNTwitterUser, TFSTwitterEntitySet, TFSTwitterVoiceInfo;
@protocol TFNTwitterStatusConversationContextTweetPerspective;

@protocol TFNTwitterStatusConversationContextTweetPerspective <_TtP8TAPTweet19TAPTweetPerspective_>
@property(readonly, nonatomic) NSString *statusItemViewModelDidUpdateNotificationName;
@property(readonly, nonatomic) NSArray *hiddenMentionEntities;
@property(readonly, nonatomic) NSArray *unmentionedIDs;
@property(readonly, nonatomic) TFSTwitterVoiceInfo *voiceInfo;
@property(readonly, nonatomic) id <TFNTwitterStatusConversationContextTweetPerspective> representedStatus;
@property(readonly, nonatomic) long long inReplyToStatusID;
@property(readonly, nonatomic) NSString *inReplyToUsername;
@property(readonly, nonatomic) long long inReplyToUserID;
@property(readonly, nonatomic) TFSTwitterEntitySet *entities;
@property(readonly, nonatomic) _Bool isReply;
@property(retain, nonatomic) TFNTwitterUser *fromUser;
@end

