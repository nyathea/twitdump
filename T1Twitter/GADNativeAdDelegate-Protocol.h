//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/NSObject-Protocol.h>

@class GADNativeAd;

@protocol GADNativeAdDelegate <NSObject>

@optional
- (void)nativeAdIsMuted:(GADNativeAd *)arg1;
- (void)nativeAdDidDismissScreen:(GADNativeAd *)arg1;
- (void)nativeAdWillDismissScreen:(GADNativeAd *)arg1;
- (void)nativeAdWillPresentScreen:(GADNativeAd *)arg1;
- (void)nativeAdDidRecordSwipeGestureClick:(GADNativeAd *)arg1;
- (void)nativeAdDidRecordClick:(GADNativeAd *)arg1;
- (void)nativeAdDidRecordImpression:(GADNativeAd *)arg1;
@end

