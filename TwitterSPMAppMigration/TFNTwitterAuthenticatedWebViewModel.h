//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL, TFCImageSpec;
@protocol TFCCardDataSource;

@interface TFNTwitterAuthenticatedWebViewModel : NSObject
{
    _Bool _shouldPresentInExternalBrowser;
    NSURL *_webViewUrl;
    NSString *_webViewTitle;
    NSString *_title;
    NSString *_byline;
    NSString *_callToAction;
    NSString *_badgeText;
    TFCImageSpec *_imageSpec;
    id <TFCCardDataSource> _cardDataSource;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <TFCCardDataSource> cardDataSource; // @synthesize cardDataSource=_cardDataSource;
@property(readonly, nonatomic) TFCImageSpec *imageSpec; // @synthesize imageSpec=_imageSpec;
@property(readonly, nonatomic) _Bool shouldPresentInExternalBrowser; // @synthesize shouldPresentInExternalBrowser=_shouldPresentInExternalBrowser;
@property(readonly, nonatomic) NSString *badgeText; // @synthesize badgeText=_badgeText;
@property(readonly, nonatomic) NSString *callToAction; // @synthesize callToAction=_callToAction;
@property(readonly, nonatomic) NSString *byline; // @synthesize byline=_byline;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *webViewTitle; // @synthesize webViewTitle=_webViewTitle;
@property(readonly, nonatomic) NSURL *webViewUrl; // @synthesize webViewUrl=_webViewUrl;
- (id)webViewUrlWithTweetParams;
- (id)initWithCardContext:(id)arg1;
- (id)init;

@end

