//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNViewController.h>

@class NSArray, NSString, PTVAPIResponseErrorInfo, PTVTwitterCameraViewController, T1BroadcastingFeatures, T1CameraAccountGeoDataProviderUpdater, T1CameraCaptureContext, T1CameraCapturePresentation, T1CameraContentContainerView, T1CameraControlButton, T1CameraEventHashtagsFetcher, T1CameraFetchResult, T1CameraModeSelectorViewController, T1CameraPlacesFetcher, T1CameraServiceAuthorizationViewController, T1PeriscopeAccount, TAVPlayer, TFNSwappingContainerViewControllerHelper, TFNTwitterAccount, TFNTwitterStatus, TFSTimer, TFSTwitterScribeContext, TweetBackgroundCameraFrameProcessor, TweetBackgroundTAVPlayerOutputView, UIButton, UILayoutGuide, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer, UIStackView, UITapGestureRecognizer, UIView, UIViewController, _TtC14T1TwitterSwift29TweetBackgroundComputerVision;
@protocol T1CameraCaptureViewControllerDelegate;

@interface T1CameraCaptureViewController : TFNViewController
{
    _Bool _cameraControlsHidden;
    _Bool _controlsHidden;
    _Bool _disablesDismissal;
    _Bool _cameraHidden;
    _Bool _disablesCameraGesturs;
    _Bool _viewFullyLoaded;
    _Bool _presented;
    _Bool _fullyPresented;
    _Bool _transitioningMode;
    _Bool _dismissed;
    _Bool _pinchGestureTargetIsOverlay;
    _Bool _needsRedrawLastFrame;
    _Bool _shouldShowPostInsertionCardTooltip;
    _Bool _tweetBackgroundPersonSegmentationEnabled;
    NSString *_initialCompositionText;
    id <T1CameraCaptureViewControllerDelegate> _delegate;
    T1CameraCaptureContext *_context;
    TFNTwitterAccount *_account;
    unsigned long long _mode;
    TFSTwitterScribeContext *_scribeContext;
    T1CameraCapturePresentation *_currentCapturePresentation;
    unsigned long long _authorizationState;
    NSArray *_availableModeNumbers;
    NSArray *_availableModeLabels;
    UILayoutGuide *_viewLayoutMarginsGuide;
    PTVTwitterCameraViewController *_cameraViewController;
    T1PeriscopeAccount *_periscopeAccount;
    T1BroadcastingFeatures *_broadcastingFeatures;
    PTVAPIResponseErrorInfo *_periscopeAccountAuthenticationErrorInfo;
    unsigned long long _cameraSessionMode;
    unsigned long long _cameraSessionState;
    TFSTimer *_stopCameraSessionTimer;
    long long _cameraSessionCaptureOrientation;
    T1CameraContentContainerView *_cameraContainerView;
    UIView *_gradientView;
    TFNSwappingContainerViewControllerHelper *_containerViewControllerHelper;
    UIView *_contentView;
    UILayoutGuide *_contentViewLayoutMarginsGuide;
    UITapGestureRecognizer *_contentViewDoubleTapGestureRecognizer;
    UITapGestureRecognizer *_contentViewTapGestureRecognizer;
    UITapGestureRecognizer *_contentViewDualTouchTapGestureRecognizer;
    UIPinchGestureRecognizer *_contentViewPinchGestureRecognizer;
    double _initialCameraZoomValueForContentViewPinchGesture;
    UIPanGestureRecognizer *_contentViewPanGestureRecognizer;
    UIRotationGestureRecognizer *_contentViewRotationGestureRecognizer;
    UIStackView *_controlsStackView;
    UIButton *_backButton;
    UILayoutGuide *_cameraButtonsLayoutGuide;
    UIButton *_cameraGuestBroadcastingButton;
    UIButton *_heartsEnabledButton;
    T1CameraControlButton *_chatSettingsButton;
    UIButton *_cameraAudioScopeButton;
    UIButton *_cameraFlipButton;
    UIButton *_cameraFlashButton;
    UIButton *_cameraTweetBackgroundButton;
    unsigned long long _selectedChatSetting;
    T1CameraModeSelectorViewController *_modeSelectorViewController;
    T1CameraServiceAuthorizationViewController *_serviceAuthorizationViewController;
    T1CameraAccountGeoDataProviderUpdater *_accountGeoDataProviderUpdater;
    T1CameraPlacesFetcher *_placesFetcher;
    T1CameraFetchResult *_currentPlacesFetchResult;
    T1CameraEventHashtagsFetcher *_eventHashtagsFetcher;
    T1CameraFetchResult *_currentEventHashtagsFetchResult;
    TweetBackgroundCameraFrameProcessor *_tweetBackgroundProcessor;
    TFNTwitterStatus *_insertedStatus;
    _TtC14T1TwitterSwift29TweetBackgroundComputerVision *_computerVision;
    TAVPlayer *_backgroundPlayer;
    TweetBackgroundTAVPlayerOutputView *_backgroundPlayerView;
}

+ (id)configuredCameraForAttachments:(id)arg1 attachmentTypes:(unsigned long long)arg2 host:(unsigned long long)arg3 account:(id)arg4 enableLive:(_Bool)arg5 reactToStatusID:(id)arg6 presentationTraitCollection:(id)arg7;
+ (void)loadCanPresentWithTraitCollection:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (_Bool)canPresentWithTraitCollection:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool tweetBackgroundPersonSegmentationEnabled; // @synthesize tweetBackgroundPersonSegmentationEnabled=_tweetBackgroundPersonSegmentationEnabled;
@property(retain, nonatomic) TweetBackgroundTAVPlayerOutputView *backgroundPlayerView; // @synthesize backgroundPlayerView=_backgroundPlayerView;
@property(retain, nonatomic) TAVPlayer *backgroundPlayer; // @synthesize backgroundPlayer=_backgroundPlayer;
@property(retain, nonatomic) _TtC14T1TwitterSwift29TweetBackgroundComputerVision *computerVision; // @synthesize computerVision=_computerVision;
@property(retain, nonatomic) TFNTwitterStatus *insertedStatus; // @synthesize insertedStatus=_insertedStatus;
@property(retain, nonatomic) TweetBackgroundCameraFrameProcessor *tweetBackgroundProcessor; // @synthesize tweetBackgroundProcessor=_tweetBackgroundProcessor;
@property(retain, nonatomic) T1CameraFetchResult *currentEventHashtagsFetchResult; // @synthesize currentEventHashtagsFetchResult=_currentEventHashtagsFetchResult;
@property(retain, nonatomic) T1CameraEventHashtagsFetcher *eventHashtagsFetcher; // @synthesize eventHashtagsFetcher=_eventHashtagsFetcher;
@property(retain, nonatomic) T1CameraFetchResult *currentPlacesFetchResult; // @synthesize currentPlacesFetchResult=_currentPlacesFetchResult;
@property(retain, nonatomic) T1CameraPlacesFetcher *placesFetcher; // @synthesize placesFetcher=_placesFetcher;
@property(retain, nonatomic) T1CameraAccountGeoDataProviderUpdater *accountGeoDataProviderUpdater; // @synthesize accountGeoDataProviderUpdater=_accountGeoDataProviderUpdater;
@property(retain, nonatomic) T1CameraServiceAuthorizationViewController *serviceAuthorizationViewController; // @synthesize serviceAuthorizationViewController=_serviceAuthorizationViewController;
@property(retain, nonatomic) T1CameraModeSelectorViewController *modeSelectorViewController; // @synthesize modeSelectorViewController=_modeSelectorViewController;
@property(nonatomic) unsigned long long selectedChatSetting; // @synthesize selectedChatSetting=_selectedChatSetting;
@property(retain, nonatomic) UIButton *cameraTweetBackgroundButton; // @synthesize cameraTweetBackgroundButton=_cameraTweetBackgroundButton;
@property(retain, nonatomic) UIButton *cameraFlashButton; // @synthesize cameraFlashButton=_cameraFlashButton;
@property(retain, nonatomic) UIButton *cameraFlipButton; // @synthesize cameraFlipButton=_cameraFlipButton;
@property(retain, nonatomic) UIButton *cameraAudioScopeButton; // @synthesize cameraAudioScopeButton=_cameraAudioScopeButton;
@property(retain, nonatomic) T1CameraControlButton *chatSettingsButton; // @synthesize chatSettingsButton=_chatSettingsButton;
@property(retain, nonatomic) UIButton *heartsEnabledButton; // @synthesize heartsEnabledButton=_heartsEnabledButton;
@property(retain, nonatomic) UIButton *cameraGuestBroadcastingButton; // @synthesize cameraGuestBroadcastingButton=_cameraGuestBroadcastingButton;
@property(retain, nonatomic) UILayoutGuide *cameraButtonsLayoutGuide; // @synthesize cameraButtonsLayoutGuide=_cameraButtonsLayoutGuide;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIStackView *controlsStackView; // @synthesize controlsStackView=_controlsStackView;
@property(nonatomic) _Bool shouldShowPostInsertionCardTooltip; // @synthesize shouldShowPostInsertionCardTooltip=_shouldShowPostInsertionCardTooltip;
@property(nonatomic) _Bool needsRedrawLastFrame; // @synthesize needsRedrawLastFrame=_needsRedrawLastFrame;
@property(retain, nonatomic) UIRotationGestureRecognizer *contentViewRotationGestureRecognizer; // @synthesize contentViewRotationGestureRecognizer=_contentViewRotationGestureRecognizer;
@property(retain, nonatomic) UIPanGestureRecognizer *contentViewPanGestureRecognizer; // @synthesize contentViewPanGestureRecognizer=_contentViewPanGestureRecognizer;
@property(nonatomic) _Bool pinchGestureTargetIsOverlay; // @synthesize pinchGestureTargetIsOverlay=_pinchGestureTargetIsOverlay;
@property(nonatomic) double initialCameraZoomValueForContentViewPinchGesture; // @synthesize initialCameraZoomValueForContentViewPinchGesture=_initialCameraZoomValueForContentViewPinchGesture;
@property(retain, nonatomic) UIPinchGestureRecognizer *contentViewPinchGestureRecognizer; // @synthesize contentViewPinchGestureRecognizer=_contentViewPinchGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *contentViewDualTouchTapGestureRecognizer; // @synthesize contentViewDualTouchTapGestureRecognizer=_contentViewDualTouchTapGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *contentViewTapGestureRecognizer; // @synthesize contentViewTapGestureRecognizer=_contentViewTapGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *contentViewDoubleTapGestureRecognizer; // @synthesize contentViewDoubleTapGestureRecognizer=_contentViewDoubleTapGestureRecognizer;
@property(retain, nonatomic) UILayoutGuide *contentViewLayoutMarginsGuide; // @synthesize contentViewLayoutMarginsGuide=_contentViewLayoutMarginsGuide;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) TFNSwappingContainerViewControllerHelper *containerViewControllerHelper; // @synthesize containerViewControllerHelper=_containerViewControllerHelper;
@property(retain, nonatomic) UIView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) T1CameraContentContainerView *cameraContainerView; // @synthesize cameraContainerView=_cameraContainerView;
@property(nonatomic) long long cameraSessionCaptureOrientation; // @synthesize cameraSessionCaptureOrientation=_cameraSessionCaptureOrientation;
@property(retain, nonatomic) TFSTimer *stopCameraSessionTimer; // @synthesize stopCameraSessionTimer=_stopCameraSessionTimer;
@property(nonatomic) unsigned long long cameraSessionState; // @synthesize cameraSessionState=_cameraSessionState;
@property(nonatomic) unsigned long long cameraSessionMode; // @synthesize cameraSessionMode=_cameraSessionMode;
@property(retain, nonatomic) PTVAPIResponseErrorInfo *periscopeAccountAuthenticationErrorInfo; // @synthesize periscopeAccountAuthenticationErrorInfo=_periscopeAccountAuthenticationErrorInfo;
@property(retain, nonatomic) T1BroadcastingFeatures *broadcastingFeatures; // @synthesize broadcastingFeatures=_broadcastingFeatures;
@property(retain, nonatomic) T1PeriscopeAccount *periscopeAccount; // @synthesize periscopeAccount=_periscopeAccount;
@property(retain, nonatomic) PTVTwitterCameraViewController *cameraViewController; // @synthesize cameraViewController=_cameraViewController;
@property(retain, nonatomic) UILayoutGuide *viewLayoutMarginsGuide; // @synthesize viewLayoutMarginsGuide=_viewLayoutMarginsGuide;
@property(nonatomic, getter=isDismissed) _Bool dismissed; // @synthesize dismissed=_dismissed;
@property(nonatomic, getter=isTransitioningMode) _Bool transitioningMode; // @synthesize transitioningMode=_transitioningMode;
@property(retain, nonatomic) NSArray *availableModeLabels; // @synthesize availableModeLabels=_availableModeLabels;
@property(retain, nonatomic) NSArray *availableModeNumbers; // @synthesize availableModeNumbers=_availableModeNumbers;
@property(nonatomic) unsigned long long authorizationState; // @synthesize authorizationState=_authorizationState;
@property(nonatomic, getter=isFullyPresented) _Bool fullyPresented; // @synthesize fullyPresented=_fullyPresented;
@property(nonatomic, getter=isPresented) _Bool presented; // @synthesize presented=_presented;
@property(retain, nonatomic) T1CameraCapturePresentation *currentCapturePresentation; // @synthesize currentCapturePresentation=_currentCapturePresentation;
@property(nonatomic, getter=isViewFullyLoaded) _Bool viewFullyLoaded; // @synthesize viewFullyLoaded=_viewFullyLoaded;
@property(copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) T1CameraCaptureContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <T1CameraCaptureViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)disablesCameraGesturs;
- (_Bool)isCameraHidden;
- (_Bool)disablesDismissal;
- (_Bool)isControlsHidden;
- (_Bool)isCameraControlsHidden;
- (void)setInitialCompositionText:(id)arg1;
- (id)initialCompositionText;
- (void)tooltipDidTap:(id)arg1;
- (void)cameraEventHashtagsFetcher:(id)arg1 didFetchCurrentEventHashtags:(id)arg2 error:(id)arg3;
- (void)cameraPlacesFetcher:(id)arg1 didFetchCurrentPlaces:(id)arg2 error:(id)arg3;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)_t1_main_updateEventHashtags;
- (void)_t1_main_updatePlaces;
- (void)cameraAccountGeoDataProviderUpdater:(id)arg1 didUpdateCurrentLocation:(id)arg2 error:(id)arg3;
- (void)_t1_main_updateModeWithIndex:(unsigned long long)arg1;
- (void)cameraModeSelectorViewController:(id)arg1 didSelectModeAtIndex:(unsigned long long)arg2;
- (void)cameraModeSelectorViewController:(id)arg1 willSelectModeAtIndex:(unsigned long long)arg2;
- (void)twitterCameraCommonMotioDidChangeCaptureOrientation:(long long)arg1;
- (void)twitterCameraCommonLiveCameraSessionDidStart;
- (void)twitterCameraCommonCaptureSessionDidStop;
- (void)twitterCameraCommonCaptureSessionDidStart;
- (void)twitterCameraCommonWillProcessVisualFrame:(struct opaqueCMSampleBuffer *)arg1 captureOrientation:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)resetCamera;
- (void)_t1_main_cameraControllerDidChangeRecording;
- (void)cleanupPostBroadcastIfNeeded;
- (void)stopBroadcast;
- (void)startBroadcastWithParams:(id)arg1;
- (void)associateTweetIDWithCurrentBroadcast:(id)arg1;
- (void)selectFrontFacingCamera;
- (void)capturePhoto;
- (void)abortVideoRecording;
- (void)stopVideoRecording;
- (void)startVideoRecordingWithWorkingDirectory:(id)arg1;
- (_Bool)isCameraRecording;
- (void)showInformationalChatMessage:(id)arg1;
- (void)didDoubleTapPreBroadcast;
- (double)cameraZoomValue;
- (void)setCameraZoomValue:(double)arg1;
- (void)checkinCameraViewController;
- (id)checkoutCameraViewControllerWithLiveDelegate:(id)arg1;
- (id)checkoutCameraViewControllerWithCaptureDelegate:(id)arg1;
- (void)_t1_main_updateAuthorizationState;
- (void)cameraServiceAuthorizationViewController:(id)arg1 didChangeAuthorizationState:(unsigned long long)arg2;
- (void)cameraServiceAuthorizationViewControllerDidTapDismiss:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (struct CGSize)_t1_overlaySizeWithScale:(double)arg1;
- (struct CGPoint)_t1_applyCurrentOverlayTranslation:(struct CGPoint)arg1;
- (_Bool)_t1_pinchGestureShouldStartInOverlay:(id)arg1;
- (void)setNeedsRedrawLastFrame;
- (void)_t1_gesture_didRotateGesture:(id)arg1;
- (void)_t1_gesture_didPanGesture:(id)arg1;
- (void)_t1_gesture_contentViewDidPinch:(id)arg1;
- (void)_t1_gesture_contentViewDidDoubleTap:(id)arg1;
- (void)_t1_gesture_contentViewDidDualTouchTap:(id)arg1;
- (void)_t1_gesture_contentViewDidTap:(id)arg1;
- (void)_t1_handleCameraTweetBackgroundForSnapshotImage:(id)arg1 isFullscreen:(_Bool)arg2 videoFrame:(struct CGRect)arg3 videoFrameCornerRadius:(double)arg4 cornerMask:(unsigned long long)arg5 backgroundColor:(id)arg6;
- (void)_t1_cleanupTweetBackgroundPlayer;
- (id)_t1_sessionProducerForStatus:(id)arg1 account:(id)arg2;
- (void)_t1_tweetBackgroundStartVideoPlayerWithStatus:(id)arg1;
- (void)_t1_handleCameraTweetBackgroundForTweet:(id)arg1;
- (void)_t1_removeTweetBackgroundForTweet;
- (void)_t1_action_cameraTweetBackgroundButtonDidTouchUpInside:(id)arg1;
- (void)_t1_main_updateCameraFlash;
- (void)_t1_action_cameraFlashButtonDidTouchUpInside:(id)arg1;
- (void)_t1_main_updateCameraDevicePosition;
- (void)_t1_main_flipCameraDevicePosition;
- (void)_t1_action_cameraFlipButtonDidTouchUpInside:(id)arg1;
- (void)_t1_main_updateForAudioButtonSelectedAnimated:(_Bool)arg1;
- (void)_t1_action_cameraAudioScopeButtonDidTouchUpInside:(id)arg1;
- (void)_t1_main_triggerGuestBroadcastingTooltipWithLabel:(id)arg1 event:(id)arg2;
- (void)_t1_main_updateForGuestBroadcastingButtonSelectedAnimated:(_Bool)arg1;
- (id)chatSettingMenuItemForChatSettingOption:(unsigned long long)arg1;
- (id)chatSettingIconForOption:(unsigned long long)arg1;
- (id)chatSettingLabelForOption:(unsigned long long)arg1;
- (void)_t1_action_heartsEnabledButtonDidTouchUpInside:(id)arg1;
- (void)_t1_action_cameraGuestBroadcastingButtonDidTouchUpInside:(id)arg1;
- (void)dismissWithResult:(id)arg1;
- (void)_t1_action_backButtonDidTouchUpInside:(id)arg1;
@property(readonly, nonatomic) UIView *swappingContainerView;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIView",?,R,N

- (void)captureCameraModeViewController:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)viewControllerDidDismissAnimated:(_Bool)arg1;
- (void)viewControllerDidPresentAnimated:(_Bool)arg1;
- (void)_t1_main_resetCameraIfNeeded;
- (void)viewControllerWillPresentAnimated:(_Bool)arg1;
- (id)_t1_main_currentScribeContext;
- (id)scribeComponent;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)_t1_main_preferredCapturePresentation;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (unsigned long long)tfn_supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)_t1_main_updateServiceAuthorizationViewAnimated:(_Bool)arg1;
- (void)_t1_main_updateServiceAuthorizationViewController;
- (void)_t1_main_loadServiceAuthorizationViewControllerWithConstraints:(id)arg1;
- (void)_t1_main_updateContentViewLayoutMargins;
- (void)_t1_main_loadContentViewLayoutMarginsGuideWithConstraints:(id)arg1;
- (void)_t1_main_updateModeSelectorViewWithAnimationOptions:(unsigned long long)arg1;
- (void)_t1_main_updateModeSelectorViewControllerUserInteractionEnabled;
- (void)_t1_main_updateModeSelectorViewControllerModeWidth;
- (void)_t1_main_loadModeSelectorViewControllerWithConstraints:(id)arg1;
- (void)_t1_main_updateCameraFlashButtonWithAnimationOptions:(unsigned long long)arg1;
- (void)_t1_main_loadCameraTweetBackground;
- (void)_t1_main_loadCameraFlashButton;
- (void)_t1_main_updateChatSettingsButtonWithAnimationOptions:(unsigned long long)arg1;
- (void)_t1_main_updateHeartsEnabledButtonWithAnimationOptions:(unsigned long long)arg1;
- (void)_t1_main_updateTweetBackgroundEnabledButtonWithAnimationOptions:(unsigned long long)arg1;
- (void)_t1_main_updateCameraFlipButtonWithAnimationOptions:(unsigned long long)arg1;
- (void)_t1_main_loadCameraFlipButton;
- (void)_t1_main_updateCameraAudioScopeButtonDisplayWithAnimationOptions:(unsigned long long)arg1;
- (void)_t1_main_updateCameraAudioScopeButtonWithAnimationOptions:(unsigned long long)arg1;
- (void)_t1_main_loadCameraAudioScopeButton;
- (void)_t1_main_updateCameraGuestBroadcastingButtonWithAnimationOptions:(unsigned long long)arg1;
- (void)buildChatSettingOptions;
- (void)_t1_main_loadChatSettingsButton;
- (void)_t1_main_loadHeartsEnabledButton;
- (void)_t1_main_loadCameraGuestBroadcastingButton;
- (void)_t1_main_loadCameraButtonsLayoutGuideWithConstraints:(id)arg1;
- (void)_t1_main_updateBackButtonWithAnimationOptions:(unsigned long long)arg1;
- (void)_t1_main_loadBackButtonWithConstraints:(id)arg1;
- (void)_t1_main_loadControlsViewWithConstraints:(id)arg1;
- (void)_t1_main_loadContentView;
- (void)_t1_main_updateGradientViewWithAnimationOptions:(unsigned long long)arg1;
- (void)_t1_main_loadGradientViewWithConstraints:(id)arg1;
- (void)_t1_main_removeCameraViewController;
- (void)_t1_main_addCameraViewController;
- (void)_t1_main_loadCameraViewController;
- (void)_t1_main_loadCameraContainerViewWithConstraint:(id)arg1;
- (void)_t1_main_loadViewLayoutMarginsGuideWithConstraints:(id)arg1;
- (void)viewDidLoad;
- (id)cameraScribeValue;
- (void)_t1_main_updateContentViewGestures;
- (void)setDisablesCameraGesturs:(_Bool)arg1;
- (void)_t1_main_updateCameraView;
- (void)setCameraHidden:(_Bool)arg1;
- (void)setDisablesDismissal:(_Bool)arg1;
@property(readonly, nonatomic, getter=isDismissable) _Bool dismissable;
- (_Bool)isGuestBroadcastingEnabled;
- (void)_t1_main_updateCameraControlsWithAnimationOptions:(unsigned long long)arg1;
- (void)_t1_main_updateControlsWithAnimationOptions:(unsigned long long)arg1;
- (void)setControlsHidden:(_Bool)arg1 withAnimationOptions:(unsigned long long)arg2;
- (void)setControlsHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setControlsHidden:(_Bool)arg1;
- (void)setCameraControlsHidden:(_Bool)arg1 withAnimationOptions:(unsigned long long)arg2;
- (void)setCameraControlsHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setCameraControlsHidden:(_Bool)arg1;
- (void)_t1_main_scribeDeviceOrientationDidChange;
- (void)_t1_main_updateCameraControlButtonsOrientationAnimated:(_Bool)arg1;
- (void)_t1_main_stopCameraSession;
- (void)_t1_timer_stopCameraSessionTimerDidFire:(id)arg1;
- (_Bool)_t1_main_invalidateStopCameraSessionTimer;
- (void)_t1_main_scheduleStopCameraSessionTimer;
- (void)_t1_main_startCameraSessionLive;
- (void)_t1_main_startCameraSessionCamera;
- (void)_t1_main_startCameraSession;
- (void)_t1_main_updateAccountCurrentLocation;
- (void)requestsUpdateCurrentLocationWithCompletion:(CDUnknownBlockType)arg1;
- (void)_t1_main_updateEventHashtagsFetcher;
- (void)_t1_main_updatePlacesFetcher;
- (void)_t1_main_updateAccountGeoDataProviderUpdater;
- (void)_t1_main_authenticatePeriscope;
- (void)_t1_main_updateBroadcastingFeatures;
@property(readonly, nonatomic) UIViewController *contentViewController;
- (void)_t1_main_updateCameraSessionMode;
- (id)_t1_main_loadLiveModeViewController;
- (id)_t1_main_loadCameraModeViewController;
- (id)_t1_main_loadOrUpdateCameraModeViewController;
- (void)_t1_main_updateContentViewControllerAnimated:(_Bool)arg1;
- (void)_t1_main_updateForActiveModeAnimated:(_Bool)arg1;
- (void)setMode:(unsigned long long)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

