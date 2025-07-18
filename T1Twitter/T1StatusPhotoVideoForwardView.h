//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class HFSensitiveTweetBlurredInterstitialView, NSNumber, NSString, T1InlineMediaContainerView, T1InlineMediaView, T1InlineVideoFacadeView, T1PrerollCTAModel, T1StatusPhotoVideoDetailsView, T1StatusPhotoVideoForwardViewRevealedContentStore, T1VoiceView, TAVPlaybackState, TFNTwitterAccount, TFSTwitterScribeContext, TUIImageViewFetchHelper, _TtC21TweetMediaAttachments14MultiMediaView;
@protocol T1InlineVideoViewProtocol, T1StatusPhotoVideoForwardViewDelegate, TTACoreStatusViewModel, TVPPlayerSessionSource;

@interface T1StatusPhotoVideoForwardView : UIView
{
    unsigned long long _imageState;
    UIView *_possiblySensitiveView;
    TUIImageViewFetchHelper *_fetchHelper;
    _Bool _playerWasPlaying;
    HFSensitiveTweetBlurredInterstitialView *_blurredInterstitialView;
    T1StatusPhotoVideoForwardViewRevealedContentStore *_revealedContentStore;
    _Bool _borderHidden;
    _Bool _watchAgainButtonEnabled;
    _Bool _showingAd;
    TFSTwitterScribeContext *_scribeContext;
    id <TTACoreStatusViewModel> _viewModel;
    unsigned long long _options;
    TFNTwitterAccount *_account;
    unsigned long long _attachmentType;
    T1InlineMediaView *_inlineMediaView;
    UIView<T1InlineVideoViewProtocol> *_inlineVideoView;
    T1InlineVideoFacadeView *_inlineVideoFacadeView;
    T1VoiceView *_voiceView;
    double _cornerRadius;
    NSString *_adDisplayLocation;
    id <T1StatusPhotoVideoForwardViewDelegate> _delegate;
    _TtC21TweetMediaAttachments14MultiMediaView *_multiMediaView;
    long long _displayType;
    T1StatusPhotoVideoDetailsView *_videoDetailsView;
    T1InlineMediaContainerView *_mediaContainerView;
    NSNumber *__t1_altTextBadgeEnabled;
    NSNumber *__t1_multiMediaGutterWidth;
    TAVPlaybackState *_lastPlaybackState;
}

+ (_Bool)_t1_shouldShowVideoDetailsForStatusViewModel:(id)arg1 options:(unsigned long long)arg2 displayType:(long long)arg3;
+ (unsigned long long)_t1_imageStateForViewModel:(id)arg1 account:(id)arg2 options:(unsigned long long)arg3 attachmentType:(unsigned long long)arg4;
+ (struct CGSize)preferredSizeForWidth:(double)arg1 viewModel:(id)arg2 options:(unsigned long long)arg3 mediaParameters:(id)arg4 attachmentType:(unsigned long long)arg5 displayType:(long long)arg6;
+ (long long)_t1_displayContextForViewModel:(id)arg1 options:(unsigned long long)arg2 displayType:(long long)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) TAVPlaybackState *lastPlaybackState; // @synthesize lastPlaybackState=_lastPlaybackState;
@property(nonatomic, getter=isShowingAd) _Bool showingAd; // @synthesize showingAd=_showingAd;
@property(retain, nonatomic) NSNumber *_t1_multiMediaGutterWidth; // @synthesize _t1_multiMediaGutterWidth=__t1_multiMediaGutterWidth;
@property(retain, nonatomic) NSNumber *_t1_altTextBadgeEnabled; // @synthesize _t1_altTextBadgeEnabled=__t1_altTextBadgeEnabled;
@property(retain, nonatomic) T1InlineMediaContainerView *mediaContainerView; // @synthesize mediaContainerView=_mediaContainerView;
@property(retain, nonatomic) T1StatusPhotoVideoDetailsView *videoDetailsView; // @synthesize videoDetailsView=_videoDetailsView;
@property(nonatomic) long long displayType; // @synthesize displayType=_displayType;
@property(retain, nonatomic) _TtC21TweetMediaAttachments14MultiMediaView *multiMediaView; // @synthesize multiMediaView=_multiMediaView;
@property(nonatomic) __weak id <T1StatusPhotoVideoForwardViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *adDisplayLocation; // @synthesize adDisplayLocation=_adDisplayLocation;
@property(nonatomic, getter=isWatchAgainButtonEnabled) _Bool watchAgainButtonEnabled; // @synthesize watchAgainButtonEnabled=_watchAgainButtonEnabled;
@property(nonatomic, getter=isBorderHidden) _Bool borderHidden; // @synthesize borderHidden=_borderHidden;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) T1VoiceView *voiceView; // @synthesize voiceView=_voiceView;
@property(readonly, nonatomic) T1InlineVideoFacadeView *inlineVideoFacadeView; // @synthesize inlineVideoFacadeView=_inlineVideoFacadeView;
@property(readonly, nonatomic) UIView<T1InlineVideoViewProtocol> *inlineVideoView; // @synthesize inlineVideoView=_inlineVideoView;
@property(readonly, nonatomic) T1InlineMediaView *inlineMediaView; // @synthesize inlineMediaView=_inlineMediaView;
@property(readonly, nonatomic) unsigned long long attachmentType; // @synthesize attachmentType=_attachmentType;
@property(readonly, nonatomic) __weak TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) id <TTACoreStatusViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
- (void)tui_fetchHelper:(id)arg1 readyToConfigureView:(id)arg2 state:(long long)arg3;
- (long long)tui_scaleAspectFillFocusModeForFetchHelper:(id)arg1;
- (id)tui_focusRectanglesForFocusMode:(long long)arg1 inBounds:(struct CGRect)arg2 forFetchHelper:(id)arg3;
- (void)tui_fetchHelper:(id)arg1 didLoadInitialImageFromSource:(long long)arg2;
- (void)_t1_updateVideoDetailsWithVideoContext:(id)arg1;
- (void)_t1_updateForAdDisplay:(id)arg1 animated:(_Bool)arg2;
- (void)player:(id)arg1 didUpdatePlaybackState:(id)arg2;
- (void)inlineMediaContainerView:(id)arg1 didTapCTAButtonWithModel:(id)arg2;
- (void)_t1_mediaAltTextTapActionOnBadge:(id)arg1 altText:(id)arg2;
- (void)_t1_imageTapAction;
- (void)_t1_mediaTapActionAtIndex:(unsigned long long)arg1;
- (void)_t1_mediaLoadedAtIndex:(unsigned long long)arg1 source:(long long)arg2 success:(_Bool)arg3;
- (void)statusPhotoVideoDetailsView:(id)arg1 didTapAttributionForMediaEntity:(id)arg2;
- (_Bool)inlineMediaViewShouldShowVideoDetailsInOverlay:(id)arg1;
- (void)mediaView:(id)arg1 didStopPresentingPlayerView:(id)arg2;
- (void)mediaView:(id)arg1 willPresentPlayerView:(id)arg2;
- (void)inlineMediaView:(id)arg1 wasLongPressedWithGestureRecognizer:(id)arg2;
- (void)inlineMediaViewWasTapped:(id)arg1 withEvent:(id)arg2;
- (void)sensitiveTweetVisibilityDidUpdate:(id)arg1;
- (void)blurViewVisibilityDidChange:(_Bool)arg1;
- (void)voiceViewWasTapped:(id)arg1;
- (void)_t1_setupPrerollContainer;
- (void)_t1_updateAccessoryViews;
- (void)_t1_layout_blurredInterstitialView;
- (void)_t1_layoutMediaSubview:(id)arg1;
- (void)layoutSubviews;
- (id)statusViewEventForLocation:(struct CGPoint)arg1 view:(id)arg2 photoEventType:(id)arg3 playerEventType:(id)arg4 attachmentType:(unsigned long long)arg5 inStatusView:(id)arg6;
- (long long)_t1_displayContext;
- (void)_t1_handleStatusViewModelUpdateNotification:(id)arg1;
- (void)_t1_updateForVoice;
- (_Bool)_t1_isVoiceTweet;
- (void)_t1_updateBlurredInterstitialView;
- (void)_t1_updateForImageStateSensitive;
- (void)_t1_updateForMixedMedia;
- (void)_t1_updateForImageStateMulti;
@property(readonly, nonatomic) T1PrerollCTAModel *prerollCTAModel;
- (void)_t1_updateForImageStateSingle;
@property(readonly, nonatomic) UIView *mediaGridView;
@property(readonly, nonatomic) id <TVPPlayerSessionSource> currentPlayerSessionSource;
@property(nonatomic) double multiMediaGutterWidth;
@property(nonatomic, getter=isAltTextBadgeEnabled) _Bool altTextBadgeEnabled;
- (void)setIsAccessibilityElement:(_Bool)arg1;
- (void)_t1_updateContent;
- (long long)_t1_imageContentMode;
- (long long)mediaItemContentModeAtIndex:(long long)arg1;
- (struct CGRect)_t1_imageContentsRect;
- (struct CGRect)mediaItemContentsRectAtIndex:(long long)arg1;
- (id)mediaViewAtIndex:(long long)arg1;
- (id)imageAtIndex:(long long)arg1;
- (id)mediaInfoAtIndex:(long long)arg1;
@property(readonly, nonatomic) long long numberOfMediaItems;
- (void)_t1_updateBorderDisplay;
- (void)removeObservers;
- (void)setViewModel:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3 scribeContext:(id)arg4 attachmentType:(unsigned long long)arg5 displayType:(long long)arg6;
- (unsigned long long)currentImageState;
- (void)_t1_cleanup;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

