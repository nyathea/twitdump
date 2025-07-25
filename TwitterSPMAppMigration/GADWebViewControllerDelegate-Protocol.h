//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterAppSPMMigration/NSObject-Protocol.h>

@class GADWebViewController, NSError, NSURLRequest;

@protocol GADWebViewControllerDelegate <NSObject>
- (_Bool)webViewController:(GADWebViewController *)arg1 shouldStartLoadWithRequest:(NSURLRequest *)arg2 navigationType:(long long)arg3;
- (void)webViewController:(GADWebViewController *)arg1 openNewTabWithRequest:(NSURLRequest *)arg2;
- (void)webViewControllerWebContentProcessDidTerminate:(GADWebViewController *)arg1;
- (void)webViewController:(GADWebViewController *)arg1 didFailLoadWithError:(NSError *)arg2;
- (void)webViewControllerDidFinishLoad:(GADWebViewController *)arg1;
- (void)webViewControllerDidStartLoad:(GADWebViewController *)arg1;
@end

