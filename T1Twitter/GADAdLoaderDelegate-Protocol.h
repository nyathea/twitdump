//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/NSObject-Protocol.h>

@class GADAdLoader, NSError;

@protocol GADAdLoaderDelegate <NSObject>
- (void)adLoader:(GADAdLoader *)arg1 didFailToReceiveAdWithError:(NSError *)arg2;

@optional
- (void)adLoaderDidFinishLoading:(GADAdLoader *)arg1;
@end

