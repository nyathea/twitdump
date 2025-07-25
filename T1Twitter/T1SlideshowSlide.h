//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, T1ImageDisplayView, T1SlideshowSeekView, T1SlideshowSlideViewModel, TAVPlaybackState, TAVPlayerSessionProducer, TAVPlayerView, TFNButton, TMAPlayableMediaAttachment, UIActivityIndicatorView, UIView;
@protocol T1SlideshowSlideDelegate, TVPPlayerSessionSource;

@interface T1SlideshowSlide : NSObject
{
    UIView *_contentView;
    T1ImageDisplayView *_imageDisplayView;
    TAVPlayerView *_tavPlayerView;
    UIView *_overlayView;
    T1SlideshowSeekView *_seekView;
    T1SlideshowSlideViewModel *_viewModel;
    TMAPlayableMediaAttachment *_playableMediaAttachment;
    TAVPlaybackState *_previousPlaybackState;
    UIActivityIndicatorView *_spinner;
    id <T1SlideshowSlideDelegate> _delegate;
    TFNButton *_watchAgainButton;
    struct UIEdgeInsets _safeAreaInsets;
}

- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets safeAreaInsets; // @synthesize safeAreaInsets=_safeAreaInsets;
@property(readonly, nonatomic) TFNButton *watchAgainButton; // @synthesize watchAgainButton=_watchAgainButton;
@property(nonatomic) __weak id <T1SlideshowSlideDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) TAVPlaybackState *previousPlaybackState; // @synthesize previousPlaybackState=_previousPlaybackState;
@property(retain, nonatomic) TMAPlayableMediaAttachment *playableMediaAttachment; // @synthesize playableMediaAttachment=_playableMediaAttachment;
@property(retain, nonatomic) T1SlideshowSlideViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) T1SlideshowSeekView *seekView; // @synthesize seekView=_seekView;
@property(readonly, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(readonly, nonatomic) TAVPlayerView *tavPlayerView; // @synthesize tavPlayerView=_tavPlayerView;
@property(readonly, nonatomic) T1ImageDisplayView *imageDisplayView; // @synthesize imageDisplayView=_imageDisplayView;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)imageDisplayViewDidReset:(id)arg1;
- (void)imageDisplayView:(id)arg1 didFailToLoadImageWithError:(id)arg2;
- (void)imageDisplayViewDidSuccessfullyLoadImage:(id)arg1;
- (void)player:(id)arg1 didUpdatePlaybackState:(id)arg2;
- (void)_updateTAVPlayerViewFrame;
- (void)_updateTAVPlayerViewWithVideoGravity:(long long)arg1 animated:(_Bool)arg2;
- (void)_didTapWatchAgainButton;
- (void)_updateVisibility;
- (void)_updateSpinnerVisibility;
- (void)_showSpinner;
- (void)_addSpinnerToView:(id)arg1;
- (void)_hideSpinner;
- (_Bool)_canShowSpinner;
- (void)_updateAccessibility;
- (void)showOverlay:(_Bool)arg1;
- (void)togglePlayerZoomScale;
- (void)setZoomScale:(double)arg1 animated:(_Bool)arg2 includePlayers:(_Bool)arg3;
@property(readonly, nonatomic) double zoomScale;
@property(readonly, nonatomic) _Bool isPlayable;
@property(readonly, nonatomic) _Bool isLoading;
@property(readonly, nonatomic, getter=isLoadingIndicator) _Bool loadingIndicator;
- (void)resumePlayerIfNeeded;
- (void)pausePlayerIfNeeded;
@property(readonly, nonatomic) id <TVPPlayerSessionSource> playerSessionSource;
@property(readonly, nonatomic) TAVPlayerSessionProducer *playerSessionProducer;
- (void)setContentFrame:(struct CGRect)arg1 withSafeAreaInsets:(struct UIEdgeInsets)arg2 inScrollView:(id)arg3 includePlayers:(_Bool)arg4;
@property(readonly, nonatomic) struct CGRect contentFrame;
- (id)initWithSlideshow:(id)arg1 configuration:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

