//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GADNativeAdContext, GADNativeAdFeatures, GADNativeAdImage, GADNativeAssetViewTracker, GADObserverCollection, GADOverlayView, NSObject, NSString, UIView;
@protocol GADNativeAdAssetsDataSource, OS_dispatch_queue;

@interface GADInternalNativeAd
{
    GADObserverCollection *_clickConfirmingViewObservers;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
    _Atomic _Bool _viewAwareAPIUsed;
    _Atomic _Bool _customOnePointFiveClickImplementedByPublisher;
    _Bool _clickConfirmationRequired;
    double _unconfirmedClickTimestamp;
    NSString *_unconfirmedClickIdentifier;
    _Atomic _Bool _customClickGestureEnabledByPublisher;
    NSString *_adConfigurationAdType;
    GADNativeAdFeatures *_nativeAdFeatures;
    Class _publicAdClass;
    GADOverlayView *_overlayView;
    GADNativeAssetViewTracker *_assetViewTracker;
    GADNativeAdContext *_nativeAdContext;
    GADNativeAdImage *_adChoicesIcon;
    UIView *_clickConfirmingView;
    UIView *_watermarkView;
    id <GADNativeAdAssetsDataSource> _assets;
}

+ (id)adTypeFromSingleNativeAdConfiguration:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) id <GADNativeAdAssetsDataSource> assets; // @synthesize assets=_assets;
@property(retain, nonatomic) UIView *watermarkView; // @synthesize watermarkView=_watermarkView;
@property(readonly, nonatomic) __weak UIView *clickConfirmingView; // @synthesize clickConfirmingView=_clickConfirmingView;
@property(retain, nonatomic) GADNativeAdImage *adChoicesIcon; // @synthesize adChoicesIcon=_adChoicesIcon;
@property(retain, nonatomic) GADNativeAdContext *nativeAdContext; // @synthesize nativeAdContext=_nativeAdContext;
@property(retain, nonatomic) GADNativeAssetViewTracker *assetViewTracker; // @synthesize assetViewTracker=_assetViewTracker;
@property(retain, nonatomic) GADOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(readonly, nonatomic) Class publicAdClass; // @synthesize publicAdClass=_publicAdClass;
@property(readonly, nonatomic) GADNativeAdFeatures *nativeAdFeatures; // @synthesize nativeAdFeatures=_nativeAdFeatures;
@property(readonly, nonatomic) NSString *adConfigurationAdType; // @synthesize adConfigurationAdType=_adConfigurationAdType;
- (double)confirmationClickTimeInterval;
- (void)resetUnconfirmedClick;
- (void)handleAssociatedNativeAd:(id)arg1;
- (void)unregisterClickConfirmingView;
- (void)registerClickConfirmingView:(id)arg1;
@property(readonly, nonatomic, getter=isCustomClickGestureEnabled) _Bool customClickGestureEnabled;
@property(nonatomic) _Bool customClickGestureEnabledByPublisher;
@property(copy, nonatomic) NSString *unconfirmedClickIdentifier;
@property(nonatomic) double unconfirmedClickTimestamp;
@property(nonatomic) _Bool clickConfirmationRequired;
@property(readonly, nonatomic, getter=isCustomOnePointFiveClickEnabled) _Bool customOnePointFiveClickEnabled;
@property(nonatomic) _Bool customOnePointFiveClickImplementedByPublisher;
@property(readonly, nonatomic) _Bool customMuteThisAdAvailable;
@property(nonatomic) _Bool viewAwareAPIUsed;
- (long long)adFormat;
- (id)initWithContext:(id)arg1 rootViewControllerProvider:(id)arg2;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 adType:(id)arg2 nativeAdFeatures:(id)arg3 rootViewControllerProvider:(id)arg4;
- (id)initWithContext:(id)arg1 adType:(id)arg2 nativeAdFeatures:(id)arg3;
- (void)commonInitWithAdType:(id)arg1 nativeAdFeatures:(id)arg2;

@end

