//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1TweetComposeTextEditorViewURLPasteObserver, TFNTwitterStatus;

@protocol T1TweetComposeTextEditorViewURLPasteObserverDelegate <NSObject>
- (_Bool)tweetComposeTextEditorViewURLPasteObserverCanAddQuotedTweet:(T1TweetComposeTextEditorViewURLPasteObserver *)arg1;

@optional
- (void)tweetComposeTextEditorViewURLPasteObserverDidPasteURL:(T1TweetComposeTextEditorViewURLPasteObserver *)arg1;
- (void)tweetComposeTextEditorViewURLPasteObserver:(T1TweetComposeTextEditorViewURLPasteObserver *)arg1 addQuotedTweet:(TFNTwitterStatus *)arg2;
@end

