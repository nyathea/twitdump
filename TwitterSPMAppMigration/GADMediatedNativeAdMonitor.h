//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GADInternalNativeAd, GADObserverCollection, UIView;

@interface GADMediatedNativeAdMonitor : NSObject
{
    id _mediatedNativeAd;
    GADInternalNativeAd *_internalNativeAd;
    GADObserverCollection *_observers;
    struct atomic_flag _clickEventReceived;
    UIView *_trackedView;
}

- (void).cxx_destruct;
- (id)internalVideoController;
- (void)handleMediatedNativeAdDidUnmuteVideo;
- (void)handleMediatedNativeAdDidMuteVideo;
- (void)handleMediatedNativeAdDidEndVideoPlayback;
- (void)handleMediatedNativeAdDidPauseVideo;
- (void)handleMediatedNativeAdDidPlayVideo;
- (void)handleUntrackViewNotification:(id)arg1;
- (void)handleTrackViewNotification:(id)arg1;
- (void)handleDidDismissScreenEvent;
- (void)handleWillDismissScreenEvent;
- (void)handleWillPresentScreenEvent;
- (void)handleThirdPartyClickEvent;
- (void)handleFirstPartyClickEvent:(id)arg1;
- (void)handleThirdPartyImpressionEvent;
- (void)handleFirstPartyImpressionEvent;
- (void)dealloc;
- (id)initWithInternalNativeAd:(id)arg1 mediatedNativeAd:(id)arg2 adapterHandlesImpressions:(_Bool)arg3 adapterHandlesClicks:(_Bool)arg4;

@end

