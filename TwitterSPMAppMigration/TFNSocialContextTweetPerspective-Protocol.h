//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterAppSPMMigration/_TtP8TAPTweet19TAPTweetPerspective_-Protocol.h>

@class TFNTwitterUser;
@protocol TFNTwitterStatusBanner, TFNTwitterStatusSocialContext, _TtP8TAPTweet19TAPTweetPerspective_;

@protocol TFNSocialContextTweetPerspective <_TtP8TAPTweet19TAPTweetPerspective_>
@property(retain, nonatomic) id <TFNTwitterStatusBanner> banner;
@property(nonatomic) _Bool isReplyPinnedByAuthor;
@property(readonly, nonatomic) _Bool isConversationStatus;
@property(nonatomic) _Bool isPinned;
@property(readonly, nonatomic) _Bool isPromoted;
@property(readonly, nonatomic) _Bool isReply;
@property(retain, nonatomic) id <_TtP8TAPTweet19TAPTweetPerspective_> retweetedStatus;
@property(readonly, nonatomic) _Bool isRetweet;
@property(retain, nonatomic) id <TFNTwitterStatusSocialContext> socialContext;
@property(readonly, nonatomic) long long inReplyToUserID;
@property(retain, nonatomic) TFNTwitterUser *fromUser;
@end

