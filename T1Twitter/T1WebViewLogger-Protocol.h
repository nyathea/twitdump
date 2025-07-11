//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSDictionary, NSURL;

@protocol T1WebViewLogger <NSObject>
- (void)webViewDidPuntToApp;
- (void)updateWebViewLoggerWithScribeParams:(NSDictionary *)arg1 currentURL:(NSURL *)arg2 rootURL:(NSURL *)arg3;
- (void)webViewProgressValueDidChange:(double)arg1 afterMillis:(unsigned long long)arg2;
- (void)webViewDidFailLoadingAfterMillis:(unsigned long long)arg1;
- (void)webViewRedirectsHaveEnded;
- (void)webViewWasDismissedByUserInteraction;
- (void)webViewBrowsingSessionDidStart:(_Bool)arg1;
- (void)webViewClosedAfterMillis:(unsigned long long)arg1;
- (void)webViewDidScrollAfterMillis:(unsigned long long)arg1;
@end

