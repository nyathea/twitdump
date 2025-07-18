//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNViewController.h>

@class NSString, T1CameraCaptureCameraModeLetterboxView, T1CameraRecordButton;
@protocol T1CameraCaptureCameraModeRecordViewControllerDelegate;

@interface T1CameraCaptureCameraModeRecordViewController : TFNViewController
{
    _Bool _enabled;
    _Bool _requiresHoldDown;
    _Bool _recording;
    _Bool _isFleetcast;
    _Bool _accessibilitySelectRecordButtonOnAppearEnabled;
    id <T1CameraCaptureCameraModeRecordViewControllerDelegate> _delegate;
    long long _context;
    double _recordingDuration;
    T1CameraRecordButton *_recordButton;
    T1CameraCaptureCameraModeLetterboxView *_letterboxView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) T1CameraCaptureCameraModeLetterboxView *letterboxView; // @synthesize letterboxView=_letterboxView;
@property(retain, nonatomic) T1CameraRecordButton *recordButton; // @synthesize recordButton=_recordButton;
@property(nonatomic) double recordingDuration; // @synthesize recordingDuration=_recordingDuration;
@property(nonatomic, getter=isAccessibilitySelectRecordButtonOnAppearEnabled) _Bool accessibilitySelectRecordButtonOnAppearEnabled; // @synthesize accessibilitySelectRecordButtonOnAppearEnabled=_accessibilitySelectRecordButtonOnAppearEnabled;
@property(nonatomic) _Bool isFleetcast; // @synthesize isFleetcast=_isFleetcast;
@property(nonatomic, getter=isRecording) _Bool recording; // @synthesize recording=_recording;
@property(nonatomic) _Bool requiresHoldDown; // @synthesize requiresHoldDown=_requiresHoldDown;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) long long context; // @synthesize context=_context;
@property(nonatomic) __weak id <T1CameraCaptureCameraModeRecordViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tooltipDidTap:(id)arg1;
- (void)_t1_action_recordButtonDidTouchUp:(id)arg1;
- (void)_t1_action_recordButtonDidValueChanged:(id)arg1;
- (void)_t1_action_recordButtonDidTouchDown:(id)arg1;
- (void)_t1_main_triggerRecordButtonTooltip;
- (void)viewControllerDidPresentAnimated:(_Bool)arg1;
- (void)tfn_viewControllerWillSwapWithTransitionCoordinator:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_t1_main_loadRecordButtonWithConstraints:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)setLetterboxParameters:(id)arg1;
- (void)_t1_main_updateRecordButton;
- (id)initWithContext:(long long)arg1;
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

