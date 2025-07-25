//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1TweetComposeViewController;

@protocol T1TweetComposeViewControllerDelegate <NSObject>

@optional
- (NSString * (^)(void))windowFrameStringBlockForTweetComposeViewController:(T1TweetComposeViewController *)arg1;
- (void)tweetComposeViewControllerDidCompleteComposing:(T1TweetComposeViewController *)arg1;
- (void)tweetComposeViewControllerDidCancelComposing:(T1TweetComposeViewController *)arg1;
- (void)tweetComposeViewControllerDidLiveBroadcast:(T1TweetComposeViewController *)arg1;
@end

