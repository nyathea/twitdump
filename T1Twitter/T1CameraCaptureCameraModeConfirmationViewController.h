//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNViewController.h>

@class NSData, NSLayoutConstraint, NSValue, T1CameraCaptureCameraModeLetterboxView, T1CameraCaptureOutput, T1CameraCapturePreviewView, T1CameraControlButton, T1GIFModeSwitch, T1GIFRenderParameters, TFNButton, TFNTwitterAccount, UIActivityIndicatorView, UIImage, UIImageView, UISwipeGestureRecognizer, UIView;
@protocol T1CameraCaptureCameraModeConfirmationViewControllerDelegate;

@interface T1CameraCaptureCameraModeConfirmationViewController : TFNViewController
{
    id <T1CameraCaptureCameraModeConfirmationViewControllerDelegate> _delegate;
    T1CameraCaptureOutput *_captureOutput;
    unsigned long long _captureMode;
    NSValue *_clippingRect;
    TFNTwitterAccount *_account;
    T1GIFRenderParameters *_gifParameters;
    NSData *_gifData;
    UIImage *_gifImage;
    T1CameraCaptureOutput *_finalOutput;
    T1CameraCapturePreviewView *_previewView;
    UIImageView *_gifImageView;
    UIView *_controlsContainerView;
    TFNButton *_retakeButton;
    TFNButton *_useButton;
    T1CameraControlButton *_muteButton;
    T1GIFModeSwitch *_gifModeSwitch;
    UIView *_loadingView;
    UIActivityIndicatorView *_activityIndicatorView;
    UISwipeGestureRecognizer *_gifSettingsGestureRecognizer;
    NSLayoutConstraint *_previewTopConstraintFull;
    NSLayoutConstraint *_previewTopConstraintSixteenByNine;
    NSLayoutConstraint *_previewHeightConstraintFull;
    NSLayoutConstraint *_previewHeightConstraintSixteenByNine;
    T1CameraCaptureCameraModeLetterboxView *_letterboxView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) T1CameraCaptureCameraModeLetterboxView *letterboxView; // @synthesize letterboxView=_letterboxView;
@property(retain, nonatomic) NSLayoutConstraint *previewHeightConstraintSixteenByNine; // @synthesize previewHeightConstraintSixteenByNine=_previewHeightConstraintSixteenByNine;
@property(retain, nonatomic) NSLayoutConstraint *previewHeightConstraintFull; // @synthesize previewHeightConstraintFull=_previewHeightConstraintFull;
@property(retain, nonatomic) NSLayoutConstraint *previewTopConstraintSixteenByNine; // @synthesize previewTopConstraintSixteenByNine=_previewTopConstraintSixteenByNine;
@property(retain, nonatomic) NSLayoutConstraint *previewTopConstraintFull; // @synthesize previewTopConstraintFull=_previewTopConstraintFull;
@property(retain, nonatomic) UISwipeGestureRecognizer *gifSettingsGestureRecognizer; // @synthesize gifSettingsGestureRecognizer=_gifSettingsGestureRecognizer;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) T1GIFModeSwitch *gifModeSwitch; // @synthesize gifModeSwitch=_gifModeSwitch;
@property(retain, nonatomic) T1CameraControlButton *muteButton; // @synthesize muteButton=_muteButton;
@property(retain, nonatomic) TFNButton *useButton; // @synthesize useButton=_useButton;
@property(retain, nonatomic) TFNButton *retakeButton; // @synthesize retakeButton=_retakeButton;
@property(retain, nonatomic) UIView *controlsContainerView; // @synthesize controlsContainerView=_controlsContainerView;
@property(retain, nonatomic) UIImageView *gifImageView; // @synthesize gifImageView=_gifImageView;
@property(retain, nonatomic) T1CameraCapturePreviewView *previewView; // @synthesize previewView=_previewView;
@property(readonly, nonatomic) T1CameraCaptureOutput *finalOutput; // @synthesize finalOutput=_finalOutput;
@property(retain, nonatomic) UIImage *gifImage; // @synthesize gifImage=_gifImage;
@property(retain, nonatomic) NSData *gifData; // @synthesize gifData=_gifData;
@property(retain, nonatomic) T1GIFRenderParameters *gifParameters; // @synthesize gifParameters=_gifParameters;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) NSValue *clippingRect; // @synthesize clippingRect=_clippingRect;
@property(readonly, nonatomic) unsigned long long captureMode; // @synthesize captureMode=_captureMode;
@property(readonly, nonatomic) T1CameraCaptureOutput *captureOutput; // @synthesize captureOutput=_captureOutput;
@property(nonatomic) __weak id <T1CameraCaptureCameraModeConfirmationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_t1_main_addOutputAndCallDelegates;
- (void)_t1_main_setCaptureMode:(unsigned long long)arg1;
- (void)_t1_main_setCaptureOutput:(id)arg1;
- (void)_t1_main_setClippingRectWithProvider:(CDUnknownBlockType)arg1 forCaptureOutput:(id)arg2 inCaptureMode:(unsigned long long)arg3;
- (void)setCaptureOutput:(id)arg1 captureMode:(unsigned long long)arg2 clippingRectProvider:(CDUnknownBlockType)arg3;
- (void)_t1_main_saveDefaultGIFParametersSavingAll:(_Bool)arg1;
- (void)_t1_main_loadDefaultGIFParameters;
- (void)_t1_main_updateGIF;
- (void)_t1_hideLoadingView;
- (void)_t1_showLoadingView;
- (void)_t1_main_handleGIFModeChanged:(long long)arg1;
- (void)_t1_main_updatePreviewView;
- (void)_t1_main_setMainEnableButtons:(_Bool)arg1;
- (void)setLetterboxParameters:(id)arg1;
- (void)_t1_action_didPerformGIFSettingsGesture:(id)arg1;
- (void)_t1_action_muteButtonDidTouchUpInside:(id)arg1;
- (void)_t1_action_useButtonDidTouchUpInside:(id)arg1;
- (void)_t1_action_retakeButtonDidTouchUpInside:(id)arg1;
- (void)tfn_viewControllerWillSwapWithTransitionCoordinator:(id)arg1;
- (void)viewControllerDidPresentAnimated:(_Bool)arg1;
- (void)_t1_main_updatePreviewConstraintsForTransition:(_Bool)arg1;
- (void)_t1_main_loadViewConstraints;
- (void)_t1_main_loadViews;
- (void)viewDidLoad;

@end

