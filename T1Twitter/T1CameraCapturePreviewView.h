//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSString, PTVTwitterMediaPreviewView, T1CameraCaptureOutput, T1CameraCapturePreviewControlsOverlayView, TFSTimer, UIActivityIndicatorView, UIColor, UILayoutGuide, UIViewPropertyAnimator, UIVisualEffectView;

@interface T1CameraCapturePreviewView : UIView
{
    _Bool _needsToPlay;
    _Bool _needsToMute;
    _Bool _showsControlsArea;
    T1CameraCaptureOutput *_captureOutput;
    double _cornerRadius;
    double _maximumControlsAreaHeight;
    double _minimumControlsAreaHeight;
    UILayoutGuide *_controlsAreaGuide;
    double _blurIntensity;
    UIView *_contentView;
    UIView *_previewViewContainerView;
    PTVTwitterMediaPreviewView *_previewView;
    PTVTwitterMediaPreviewView *_transitioningPreviewView;
    UIView *_overlayColorView;
    UIVisualEffectView *_previewBlurView;
    UIViewPropertyAnimator *_previewBlurViewEffectAnimator;
    UIView *_topGradientView;
    NSLayoutConstraint *_topGradientViewHeightAnchorConstraint;
    UIActivityIndicatorView *_activityIndicatorView;
    TFSTimer *_activityIndicatorTimer;
    T1CameraCapturePreviewControlsOverlayView *_overlayView;
    NSLayoutConstraint *_controlsAreaGuideHeightAnchorConstraint;
    NSLayoutConstraint *_controlsAreaGuideTopAnchorConstraint;
    struct UIEdgeInsets _contentInsets;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSLayoutConstraint *controlsAreaGuideTopAnchorConstraint; // @synthesize controlsAreaGuideTopAnchorConstraint=_controlsAreaGuideTopAnchorConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *controlsAreaGuideHeightAnchorConstraint; // @synthesize controlsAreaGuideHeightAnchorConstraint=_controlsAreaGuideHeightAnchorConstraint;
@property(readonly, nonatomic) T1CameraCapturePreviewControlsOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) TFSTimer *activityIndicatorTimer; // @synthesize activityIndicatorTimer=_activityIndicatorTimer;
@property(readonly, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(readonly, nonatomic) NSLayoutConstraint *topGradientViewHeightAnchorConstraint; // @synthesize topGradientViewHeightAnchorConstraint=_topGradientViewHeightAnchorConstraint;
@property(readonly, nonatomic) UIView *topGradientView; // @synthesize topGradientView=_topGradientView;
@property(retain, nonatomic) UIViewPropertyAnimator *previewBlurViewEffectAnimator; // @synthesize previewBlurViewEffectAnimator=_previewBlurViewEffectAnimator;
@property(readonly, nonatomic) UIVisualEffectView *previewBlurView; // @synthesize previewBlurView=_previewBlurView;
@property(readonly, nonatomic) UIView *overlayColorView; // @synthesize overlayColorView=_overlayColorView;
@property(retain, nonatomic) PTVTwitterMediaPreviewView *transitioningPreviewView; // @synthesize transitioningPreviewView=_transitioningPreviewView;
@property(retain, nonatomic) PTVTwitterMediaPreviewView *previewView; // @synthesize previewView=_previewView;
@property(readonly, nonatomic) UIView *previewViewContainerView; // @synthesize previewViewContainerView=_previewViewContainerView;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) double blurIntensity; // @synthesize blurIntensity=_blurIntensity;
@property(nonatomic) _Bool showsControlsArea; // @synthesize showsControlsArea=_showsControlsArea;
@property(readonly, nonatomic) UILayoutGuide *controlsAreaGuide; // @synthesize controlsAreaGuide=_controlsAreaGuide;
@property(nonatomic) double minimumControlsAreaHeight; // @synthesize minimumControlsAreaHeight=_minimumControlsAreaHeight;
@property(nonatomic) double maximumControlsAreaHeight; // @synthesize maximumControlsAreaHeight=_maximumControlsAreaHeight;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) _Bool needsToMute; // @synthesize needsToMute=_needsToMute;
@property(nonatomic) _Bool needsToPlay; // @synthesize needsToPlay=_needsToPlay;
@property(retain, nonatomic) T1CameraCaptureOutput *captureOutput; // @synthesize captureOutput=_captureOutput;
- (void)twitterMediaPreviewView:(id)arg1 isReadyToPlay:(_Bool)arg2;
- (void)layoutSubviews;
@property(nonatomic) double topGradientOverlayAlpha;
@property(nonatomic) double overlayColorAlpha;
@property(retain, nonatomic) UIColor *overlayColor;
- (void)_t1_main_updateLayoutAnimated:(_Bool)arg1;
- (void)setShowsControlsArea:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) struct CGRect controlsAreaFrame;
@property(readonly, nonatomic, getter=isControlsAreaOverlayHidden) _Bool controlsAreaOverlayHidden;
@property(retain, nonatomic) UIColor *controlsAreaOverlayColor;
- (void)_t1_main_updatePreviewView;
- (void)_t1_main_hideActivityIndicatorView;
- (void)_t1_main_scheduleToShowActivityIndicatorView;
- (void)_t1_main_completeTransitioningAnimated:(_Bool)arg1;
- (void)_t1_main_updateContentView;
@property(readonly, nonatomic) struct CGSize contentSize;
- (void)dealloc;
- (void)_t1_cameraCapturePreviewView_initialize;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

