//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNViewController.h>

@class CAGradientLayer, NSMutableArray, NSString, T1AmplifyUIEventHandler, T1MediaInlineComposeController, T1SlideshowMediaAssetRenderer, T1SlideshowScrollView, T1SlideshowSeekController, T1SlideshowSlide, T1SlideshowStatusView, T1VideoBitRateManager, T1VideoDockContainerViewController, TAVPlaybackState, TAVPlayerViewConfiguration, TDTBatteryMonitorHandle, TFNButton, TFNCustomHitTestView, TFNFullscreenMediaTransition, TFNTwitterAccount, TFSTimer, TFSTwitterScribeContext, TLPSubscription, UIColor, UIImageView, UIImpactFeedbackGenerator, UILabel, UINotificationFeedbackGenerator, UISelectionFeedbackGenerator, UIStackView, UIView, UIViewController, _TtC14T1TwitterSwift19T1SlideshowAdHeader, _TtC14T1TwitterSwift26T1VideoSettingsCoordinator;
@protocol T1SlideshowViewControllerDataSource, T1SlideshowViewControllerDelegate, T1SlideshowViewControllerLoadingDelegate, T1SlideshowViewPerspective, TFNMediaTransitionDelegate;

@interface T1SlideshowViewController : TFNViewController
{
    id <T1SlideshowViewControllerDataSource> _retainedDataSource;
    id <T1SlideshowViewControllerDelegate> _retainedDelegate;
    long long _slideCount;
    UIView *_backgroundView;
    UIView *_contentView;
    TFNButton *_closeButton;
    TFNButton *_moreButton;
    TFNButton *_dockButton;
    TFNButton *_settingsButton;
    TFNButton *_retryButton;
    TFNButton *_attributionButton;
    TFNButton *_editButton;
    TFNButton *_saveButton;
    TFNButton *_postButton;
    UIStackView *_buttonStackView;
    TFNCustomHitTestView *_topChromeView;
    UIView *_fullScreenRasterization;
    long long _fullScreenRasterizationOrientation;
    T1SlideshowSlide *_prevSlide;
    T1SlideshowSlide *_nextSlide;
    UIImageView *_chevronImageView;
    UILabel *_swipeToDismissLabel;
    double _verticalScrollTrackingPercentCentered;
    CAGradientLayer *_tutorialViewGradientLayer;
    double _lastZoomScale;
    _Bool _bottomChromeVisible;
    _Bool _canRequestLoadingMoreSlides;
    _Bool _slideActivated;
    UIViewController *_dismissingFromInHierarchyViewController;
    struct {
        unsigned int statusViewNeedsUpdate:1;
        unsigned int topChromeNeedsUpdate:1;
        unsigned int dismissing:1;
        unsigned int dismissingFromSwipe:1;
        unsigned int willProbablyDismissFromSwipe:1;
        unsigned int sizeTransitioning:1;
        unsigned int statusViewShownBeforeSizeTransition:1;
        unsigned int topChromeHiddenBeforeSizeTransition:1;
        unsigned int chromesShownBeforeVerticalScroll:1;
        unsigned int chromesShownBeforeReload:1;
    } _flags;
    _Bool _displaySlideStatus;
    _Bool _displaySlideStatusActions;
    _Bool _displayQuickReplyView;
    _Bool _chromeVisible;
    _Bool _topChromeVisible;
    _Bool _topChromeVisibleIsAnimating;
    _Bool _isDisplayedFromFocalTweet;
    _Bool _isInWindowScene;
    _Bool _lowPowerModeEnabled;
    _Bool _blurredVideoBackgroundImageViewInitialState;
    _Bool _playPauseOnControlBarWasTouchedForCurrentSlide;
    T1VideoBitRateManager *_videoBitrateManager;
    id <T1SlideshowViewControllerDelegate> _delegate;
    id <T1SlideshowViewControllerLoadingDelegate> _loadingDelegate;
    id <T1SlideshowViewControllerDataSource> _dataSource;
    long long _slideIndex;
    TFSTwitterScribeContext *_scribeContext;
    TFNTwitterAccount *_account;
    long long _cardDisplayMode;
    TFNTwitterAccount *_composingAccount;
    T1SlideshowSlide *_currentSlide;
    T1SlideshowStatusView *_statusView;
    TFNFullscreenMediaTransition *_transition;
    UIView *_tutorialView;
    T1MediaInlineComposeController *_quickReplyComposeController;
    T1SlideshowScrollView *_scrollView;
    T1AmplifyUIEventHandler *_amplifyActionHandler;
    T1SlideshowMediaAssetRenderer *_mediaAssetRenderer;
    TLPSubscription *_tlpSubscription;
    TAVPlaybackState *_previousPlaybackState;
    TAVPlayerViewConfiguration *_transitionTAVPlayerViewConfiguration;
    TDTBatteryMonitorHandle *_batteryMonitorHandle;
    UIView *_blurredVideoBackgroundImageView;
    NSMutableArray *_previousBlurredVideoBackgroundViews;
    TFSTimer *_videoImageCaptureTimer;
    T1VideoDockContainerViewController *_videoDockContainerViewController;
    T1SlideshowSeekController *_seekController;
    _TtC14T1TwitterSwift19T1SlideshowAdHeader *_adHeader;
    _TtC14T1TwitterSwift26T1VideoSettingsCoordinator *_videoSettingsCoordinator;
    struct CGSize _singleSlideMediaDimensions;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _TtC14T1TwitterSwift26T1VideoSettingsCoordinator *videoSettingsCoordinator; // @synthesize videoSettingsCoordinator=_videoSettingsCoordinator;
@property(retain, nonatomic) TFNButton *settingsButton; // @synthesize settingsButton=_settingsButton;
@property(nonatomic) _Bool playPauseOnControlBarWasTouchedForCurrentSlide; // @synthesize playPauseOnControlBarWasTouchedForCurrentSlide=_playPauseOnControlBarWasTouchedForCurrentSlide;
@property(retain, nonatomic) _TtC14T1TwitterSwift19T1SlideshowAdHeader *adHeader; // @synthesize adHeader=_adHeader;
@property(retain, nonatomic) T1SlideshowSeekController *seekController; // @synthesize seekController=_seekController;
@property(retain, nonatomic) T1VideoDockContainerViewController *videoDockContainerViewController; // @synthesize videoDockContainerViewController=_videoDockContainerViewController;
@property(retain, nonatomic) TFSTimer *videoImageCaptureTimer; // @synthesize videoImageCaptureTimer=_videoImageCaptureTimer;
@property(retain, nonatomic) NSMutableArray *previousBlurredVideoBackgroundViews; // @synthesize previousBlurredVideoBackgroundViews=_previousBlurredVideoBackgroundViews;
@property(retain, nonatomic) UIView *blurredVideoBackgroundImageView; // @synthesize blurredVideoBackgroundImageView=_blurredVideoBackgroundImageView;
@property(nonatomic) _Bool blurredVideoBackgroundImageViewInitialState; // @synthesize blurredVideoBackgroundImageViewInitialState=_blurredVideoBackgroundImageViewInitialState;
@property(retain, nonatomic) TDTBatteryMonitorHandle *batteryMonitorHandle; // @synthesize batteryMonitorHandle=_batteryMonitorHandle;
@property(readonly, nonatomic, getter=isLowPowerModeEnabled) _Bool lowPowerModeEnabled; // @synthesize lowPowerModeEnabled=_lowPowerModeEnabled;
@property(retain, nonatomic) TAVPlayerViewConfiguration *transitionTAVPlayerViewConfiguration; // @synthesize transitionTAVPlayerViewConfiguration=_transitionTAVPlayerViewConfiguration;
@property(retain, nonatomic) TAVPlaybackState *previousPlaybackState; // @synthesize previousPlaybackState=_previousPlaybackState;
@property(retain, nonatomic) TLPSubscription *tlpSubscription; // @synthesize tlpSubscription=_tlpSubscription;
@property(readonly, nonatomic) T1SlideshowMediaAssetRenderer *mediaAssetRenderer; // @synthesize mediaAssetRenderer=_mediaAssetRenderer;
@property(retain, nonatomic) T1AmplifyUIEventHandler *amplifyActionHandler; // @synthesize amplifyActionHandler=_amplifyActionHandler;
@property(retain, nonatomic) T1SlideshowScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) T1MediaInlineComposeController *quickReplyComposeController; // @synthesize quickReplyComposeController=_quickReplyComposeController;
@property(readonly, nonatomic) UIView *tutorialView; // @synthesize tutorialView=_tutorialView;
@property(readonly, nonatomic) TFNFullscreenMediaTransition *transition; // @synthesize transition=_transition;
@property(readonly, nonatomic) T1SlideshowStatusView *statusView; // @synthesize statusView=_statusView;
@property(readonly, nonatomic) T1SlideshowSlide *currentSlide; // @synthesize currentSlide=_currentSlide;
@property(nonatomic) _Bool isInWindowScene; // @synthesize isInWindowScene=_isInWindowScene;
@property(retain, nonatomic) TFNTwitterAccount *composingAccount; // @synthesize composingAccount=_composingAccount;
@property(nonatomic) _Bool isDisplayedFromFocalTweet; // @synthesize isDisplayedFromFocalTweet=_isDisplayedFromFocalTweet;
@property(nonatomic) _Bool topChromeVisibleIsAnimating; // @synthesize topChromeVisibleIsAnimating=_topChromeVisibleIsAnimating;
@property(nonatomic) _Bool topChromeVisible; // @synthesize topChromeVisible=_topChromeVisible;
@property(readonly, nonatomic) struct CGSize singleSlideMediaDimensions; // @synthesize singleSlideMediaDimensions=_singleSlideMediaDimensions;
@property(nonatomic, getter=isChromeVisible) _Bool chromeVisible; // @synthesize chromeVisible=_chromeVisible;
@property(nonatomic) long long cardDisplayMode; // @synthesize cardDisplayMode=_cardDisplayMode;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(nonatomic, getter=shouldDisplayQuickReplyView) _Bool displayQuickReplyView; // @synthesize displayQuickReplyView=_displayQuickReplyView;
@property(nonatomic, getter=shouldDisplaySlideStatusActions) _Bool displaySlideStatusActions; // @synthesize displaySlideStatusActions=_displaySlideStatusActions;
@property(nonatomic, getter=shouldDisplaySlideStatus) _Bool displaySlideStatus; // @synthesize displaySlideStatus=_displaySlideStatus;
@property(nonatomic) long long slideIndex; // @synthesize slideIndex=_slideIndex;
@property(nonatomic) __weak id <T1SlideshowViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <T1SlideshowViewControllerLoadingDelegate> loadingDelegate; // @synthesize loadingDelegate=_loadingDelegate;
@property(nonatomic) __weak id <T1SlideshowViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isGrokFullScreenImageActionsEnabled;
- (id)videoSettingsScribeContext;
- (void)logSettingsButtonTap:(id)arg1 additionalParameters:(id)arg2;
- (void)didUpdateWithShouldShowVideoSettingsButton:(_Bool)arg1;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (void)_t1_updateQuickReplyForComposition:(id)arg1;
- (id)_t1_newReplyTweetComposition;
- (id)_t1_replyTweetComposition;
- (void)inlineComposeControllerDidSwitchToFullscreen:(id)arg1;
- (void)inlineComposeControllerWillSwitchToFullscreen:(id)arg1;
- (id)inlineComposeControllerScribeParameters:(id)arg1;
- (void)inlineComposeController:(id)arg1 didSwitchToAccount:(id)arg2;
- (void)inlineComposeController:(id)arg1 didSendStatus:(id)arg2 forComposition:(id)arg3;
- (void)inlineComposeControllerDidEndEditing:(id)arg1;
- (id)inlineComposeControllerScribePage:(id)arg1;
- (id)inlineComposerControllerComposition:(id)arg1;
- (double)inlineComposeController:(id)arg1 autocompleteStartingPositionInContainer:(id)arg2;
- (id)inlineComposeControllerInitialComposeString:(id)arg1;
- (void)subscription:(id)arg1 didReceiveEvent:(id)arg2;
- (void)amplifyActionHandler:(id)arg1 dismissCurrentViewControllerAndOpenURL:(id)arg2;
- (void)amplifyActionHandler:(id)arg1 dismissAndPresentViewController:(id)arg2;
- (void)_t1_videoBitrateManagerDidUpdatePreferredBitrate:(id)arg1;
@property(readonly, nonatomic) T1VideoBitRateManager *videoBitrateManager; // @synthesize videoBitrateManager=_videoBitrateManager;
- (void)player:(id)arg1 didUpdatePlaybackState:(id)arg2;
- (double)_viewControllerVisibility;
- (void)layoutMetricsDidChange:(id)arg1 to:(id)arg2;
- (id)_t1_slideForImageDisplayView:(id)arg1;
- (void)imageDisplayView:(id)arg1 didTriggerContextMenuInteraction:(id)arg2;
- (void)imageDisplayView:(id)arg1 didLongPress:(id)arg2;
- (void)_t1_presentContextUIInView:(id)arg1 locationInView:(struct CGPoint)arg2;
- (void)slideshowUserListViewController:(id)arg1 didSelectUser:(id)arg2;
- (void)slideshowSlidePlayerDidStartSpinnerAnimation:(id)arg1;
- (void)slideshowSlidePlayerDidEndZooming:(id)arg1;
- (void)slideshowSlidePlayerWillBeginZooming:(id)arg1;
- (void)slideshowSlideDidResetImage:(id)arg1;
- (void)slideshowSlide:(id)arg1 didFailToLoadImageWithError:(id)arg2;
- (void)slideshowSlideDidSuccessfullyLoadImage:(id)arg1;
- (void)_t1_contentDidEndZooming;
- (void)_t1_contentWillBeginZooming;
- (void)zoomScrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)zoomScrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (_Bool)accessibilityPerformEscape;
- (_Bool)_t1_canHandleViewUserKeyCommand;
- (void)handleViewUserKeyCommand;
- (_Bool)_t1_canHandleBookmarkKeyCommand;
- (void)handleBookmarkKeyCommand;
- (_Bool)_t1_canHandleLikeKeyCommandForUndo:(_Bool)arg1;
- (void)handleUndoLikeKeyCommand;
- (void)handleLikeKeyCommand;
- (_Bool)_t1_canHandleRetweetKeyCommandForUndo:(_Bool)arg1;
- (void)handleUndoRetweetKeyCommand;
- (void)handleRetweetKeyCommand;
- (_Bool)_t1_canHandleReplyKeyCommand;
- (void)handleReplyKeyCommand;
- (_Bool)_t1_canHandleNextKeyCommand;
- (void)handleLineDownKeyCommand;
- (void)handleNextKeyCommand;
- (_Bool)_t1_canHandlePreviousKeyCommand;
- (void)handleLineUpKeyCommand;
- (void)handlePreviousKeyCommand;
- (void)handleEscapeKeyCommand;
- (void)handleCloseKeyCommand;
- (_Bool)_t1_canHandleCloseKeyCommand;
- (id)keyCommands;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)_t1_postGrokImage:(id)arg1;
- (void)_t1_saveGrokImage:(id)arg1;
- (void)_t1_editGrokImage:(id)arg1;
- (id)_t1_saveImageActionItemForImageDisplayView:(id)arg1;
- (id)_t1_copyImageActionItemForImageDisplayView:(id)arg1;
- (id)_t1_tweetMediaActionItemForImageDisplayView:(id)arg1;
- (_Bool)_t1_shouldDisplayLoadHighQualityImageItemForImageDisplayView:(id)arg1 highestQuality:(_Bool)arg2;
- (id)_t1_loadHighQualityActionItemWithTitle:(id)arg1 forImageDisplayView:(id)arg2 highestQuality:(_Bool)arg3;
- (void)_t1_presentShareViaActivityControllerForImageDisplayView:(id)arg1 withSource:(id)arg2;
- (void)_t1_presentShareViaActivityControllerForVideoPlaybackWithPopoverSource:(id)arg1;
- (void)slideshowSeekController:(id)arg1 didDoubleTapWithRecognizer:(id)arg2;
- (void)slideshowSeekController:(id)arg1 didLongPressWithRecognizer:(id)arg2;
- (id)slideshowSeekControllerWillUpdateSeekView:(id)arg1;
- (void)slideshowSeekController:(id)arg1 didUpdateSeekCursor:(id)arg2;
- (id)slideshowSeekControllerPlaybackState:(id)arg1;
- (void)slideshowSeekController:(id)arg1 didTapWithoutSeekWithRecognizer:(id)arg2;
- (_Bool)slideshowSeekControllerCanSeek:(id)arg1;
- (void)_t1_dismissAndOpenURL:(id)arg1;
- (void)_t1_didTapSettingsButton:(id)arg1;
- (void)_t1_didTapDockButton:(id)arg1;
- (void)_t1_updateScrollViewForInlineComposeDisplayed:(_Bool)arg1;
- (void)_t1_showAccountSwitcherFromRect:(struct CGRect)arg1 inView:(id)arg2;
- (void)_t1_displayInlineCompose;
- (void)_t1_presentQuickReplyViewControllerWithAccount:(id)arg1;
- (void)_t1_didTapAttributionButton;
- (void)_t1_dismissAnimated:(_Bool)arg1;
- (void)_t1_moreAction:(id)arg1;
- (void)_t1_closeAction:(id)arg1;
- (void)_t1_tapAction:(id)arg1;
- (void)_t1_didTapOnVideoWithRecognizer:(id)arg1;
- (_Bool)isTapPlayOrPause;
- (void)_t1_didTapRetry;
- (double)_backgroundViewAlphaForVerticalScrollWithPercentCentered:(double)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_advanceOrDismissScrollView:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (_Bool)_t1_shouldDismissFromSwipe:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)_centerButtonImageAboveText:(id)arg1 spacing:(double)arg2;
- (void)_cancelUserSwipeGesture;
- (void)_dismissSlideshowFromSwipe;
- (void)_t1_updateDockButton;
- (void)_t1_initializeSettingsButtonIfNeeded;
- (void)_t1_initializeDockButtonIfNeeded;
- (void)_t1_showOverlay:(_Bool)arg1;
- (void)_t1_updateOverlayForState:(id)arg1;
- (void)_t1_updateRetryButtonVisibility;
@property(readonly, nonatomic) _Bool isQuickReplyEnabled;
- (_Bool)_t1_shouldShowChromesForPromotedTweet;
- (_Bool)_shouldShowStatusViewContent;
- (_Bool)_t1_chromesVisible;
- (void)_t1_setStatusViewContentVisible:(_Bool)arg1 tutorialVisible:(_Bool)arg2;
- (void)_t1_setStatusViewContentVisible:(_Bool)arg1;
- (void)_t1_setBottomChromeVisible:(_Bool)arg1 animated:(_Bool)arg2 tutorialVisible:(_Bool)arg3;
- (void)_t1_setTopChromeViewVisible:(_Bool)arg1 move:(_Bool)arg2;
- (void)_t1_setTopChromeViewVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_t1_setChromesVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_t1_setChromesVisible:(_Bool)arg1 animated:(_Bool)arg2 tutorialVisible:(_Bool)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGAffineTransform)_transformForFullscreenRasterizationWithInterfaceOrientation:(long long)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)shouldAutorotate;
- (unsigned long long)tfn_supportedInterfaceOrientations;
- (void)_didTapTag:(id)arg1;
- (void)tfn_previewingStateDidChange;
- (_Bool)isCurrentSlideVideo;
- (_Bool)isBottomSafeAreaIgnored;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)tfnPresentedCustomDismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)tfnPresentedCustomPresentFromViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_transitionObject;
@property(nonatomic) __weak id <TFNMediaTransitionDelegate> transitionDelegate;
- (void)_t1_scribeFreedomOfSpeechAuthorLabelImpressionIfNeeded;
- (void)_t1_scribeForwardPivotImpressionIfNeeded;
- (id)scribeElement;
- (id)scribeComponent;
- (id)scribeSection;
- (id)scribePage;
- (id)scribeImpressionParameters;
- (id)scribe;
- (void)_deactivateMediaAssetPlayers;
- (long long)_slideIndexForCurrentScrollContentOffset;
- (id)_t1_attributionButtonAttributedTitleForMediaEntity:(id)arg1;
- (void)_activateLoadingSpinnerSlide;
- (void)_finishTransitionAnimated:(_Bool)arg1;
- (id)_tavPlayerViewConfigurationWithScribeContext:(id)arg1;
- (id)_tavPlayerViewConfigurationWithScribeContext:(id)arg1 videoGravity:(long long)arg2 isMuted:(_Bool)arg3;
- (void)_updateControlBarWithPlaybackState:(id)arg1;
- (_Bool)_shouldShowControlBarForSlide:(id)arg1;
- (_Bool)_shouldShowStatusForSlide:(id)arg1 sessionSource:(id)arg2 account:(id)arg3;
- (void)_playWithTAVCorePlayerForCurrentSlide;
- (void)_activateCurrentSlidePlayer;
- (void)_activateCurrentSlide;
- (void)_activateFirstSlide;
- (void)_deactivateCurrentSlide;
- (_Bool)_currentSlideIsLoading;
- (_Bool)_hideLoadingIndicator;
- (void)tooltipDidTap:(id)arg1;
- (void)_dismissTooltip:(id)arg1 ifVisibleAnimated:(_Bool)arg2;
- (void)_t1_addTLPSubscriptionIfNeeded;
- (long long)_maximumSlideIndexWithLoading:(_Bool)arg1;
- (long long)_maximumSlideIndex;
- (void)_updateSlideDisplayResettingOffset:(_Bool)arg1 animateOffset:(_Bool)arg2 animateStatus:(_Bool)arg3;
- (void)_setStatusViewNeedsUpdateForDisplayedStatus:(id)arg1 displayedMedia:(id)arg2 directMessagePlayable:(id)arg3 displayedTagSet:(id)arg4;
- (void)_updateSlideIndex:(long long)arg1 resettingOffset:(_Bool)arg2 animateOffset:(_Bool)arg3 animateStatus:(_Bool)arg4;
- (void)_configureSlide:(id)arg1 atIndex:(long long)arg2;
- (void)_configureSlides;
- (void)_updateBlurredVideoBackgroundImageView:(id)arg1 duration:(double)arg2;
- (void)_showBlurredVideoBackgroundImage:(id)arg1 duration:(double)arg2;
- (void)_resetBlurredVideoBackgroundImageView;
- (void)_setTransitionBackgroundBlurViewWithPreviewImage:(id)arg1;
- (id)_createTransitionBackgroundBlurView;
- (void)_stopCapturingStillImagesOfVideoPlayer;
- (void)_startCapturingStillImagesOfVideoPlayer:(id)arg1 previewImage:(id)arg2;
- (void)_t1_saveFullscreenRasterization:(id)arg1;
- (void)_updateBackgroundColorsWithColor:(id)arg1;
- (void)_configureBackgroundColor;
- (id)_backgroundColorForSlideAtIndex:(long long)arg1;
- (double)_defaultZoomScaleForSlideAtIndex:(long long)arg1;
- (id)_previewImageForSlideAtIndex:(long long)arg1;
- (id)_imageForSlideAtIndex:(long long)arg1;
- (id)_fastestPreviewImageForSlideAtIndex:(long long)arg1;
- (void)didTapSlide:(id)arg1 withGestureRecognizer:(id)arg2;
- (void)presentTaggedUserListView;
- (void)zoomToSlideshowWillBeginFromViewController:(id)arg1;
- (void)reloadSlideshowData;
@property(readonly, nonatomic) id <T1SlideshowViewPerspective> slideStatus;
@property(readonly, nonatomic) UIColor *slideBackgroundColor;
- (void)setDelegate:(id)arg1 retain:(_Bool)arg2;
- (void)setDataSource:(id)arg1 retain:(_Bool)arg2;
- (void)updateLowPowerModeStatus;
- (void)powerStateDidChange:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)dealloc;
- (void)_playPauseWasTouchedOnControlBar;
- (id)initWithAccount:(id)arg1 composingAccount:(id)arg2;
- (id)initWithAccount:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIImpactFeedbackGenerator *impactFeedbackGenerator;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIImpactFeedbackGenerator",?,R,N

@property(readonly, nonatomic) UINotificationFeedbackGenerator *notificationFeedbackGenerator;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UINotificationFeedbackGenerator",?,R,N

@property(readonly, nonatomic) UISelectionFeedbackGenerator *selectionFeedbackGenerator;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UISelectionFeedbackGenerator",?,R,N

@property(readonly) Class superclass;

@end

