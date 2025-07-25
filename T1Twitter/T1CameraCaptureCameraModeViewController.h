//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNViewController.h>

@class NSString, T1CameraCaptureCameraModeConfirmationViewController, T1CameraCaptureCameraModeLetterboxParameters, T1CameraCaptureCameraModeRecordViewController, T1CameraCaptureCameraScribeValue, T1CameraCaptureOutput, T1CameraCaptureViewController, TFNSwappingContainerViewControllerHelper, TFSReferencedFile, TFSTwitterScribeContext, UIView, UIViewController;
@protocol T1CameraCaptureCameraModeViewControllerDelegate;

@interface T1CameraCaptureCameraModeViewController : TFNViewController
{
    _Bool _recordingReachedMinimumThreshold;
    TFSTwitterScribeContext *_scribeContext;
    unsigned long long _captureMode;
    unsigned long long _state;
    id <T1CameraCaptureCameraModeViewControllerDelegate> _delegate;
    T1CameraCaptureViewController *_captureViewController;
    TFNSwappingContainerViewControllerHelper *_containerViewControllerHelper;
    T1CameraCaptureCameraModeRecordViewController *_recordViewController;
    T1CameraCaptureCameraModeConfirmationViewController *_confirmationViewController;
    unsigned long long _recordingState;
    TFSReferencedFile *_referencedRecordingWorkingDirectory;
    double _initialCameraZoomValueForRecording;
    T1CameraCaptureCameraScribeValue *_initialCameraScribeValue;
    T1CameraCaptureOutput *_captureOutput;
    T1CameraCaptureCameraModeLetterboxParameters *_letterboxParameters;
}

- (void).cxx_destruct;
@property(retain, nonatomic) T1CameraCaptureCameraModeLetterboxParameters *letterboxParameters; // @synthesize letterboxParameters=_letterboxParameters;
@property(retain, nonatomic) T1CameraCaptureOutput *captureOutput; // @synthesize captureOutput=_captureOutput;
@property(retain, nonatomic) T1CameraCaptureCameraScribeValue *initialCameraScribeValue; // @synthesize initialCameraScribeValue=_initialCameraScribeValue;
@property(nonatomic) double initialCameraZoomValueForRecording; // @synthesize initialCameraZoomValueForRecording=_initialCameraZoomValueForRecording;
@property(retain, nonatomic) TFSReferencedFile *referencedRecordingWorkingDirectory; // @synthesize referencedRecordingWorkingDirectory=_referencedRecordingWorkingDirectory;
@property(nonatomic) _Bool recordingReachedMinimumThreshold; // @synthesize recordingReachedMinimumThreshold=_recordingReachedMinimumThreshold;
@property(nonatomic) unsigned long long recordingState; // @synthesize recordingState=_recordingState;
@property(retain, nonatomic) T1CameraCaptureCameraModeConfirmationViewController *confirmationViewController; // @synthesize confirmationViewController=_confirmationViewController;
@property(retain, nonatomic) T1CameraCaptureCameraModeRecordViewController *recordViewController; // @synthesize recordViewController=_recordViewController;
@property(retain, nonatomic) TFNSwappingContainerViewControllerHelper *containerViewControllerHelper; // @synthesize containerViewControllerHelper=_containerViewControllerHelper;
@property(readonly, nonatomic) __weak T1CameraCaptureViewController *captureViewController; // @synthesize captureViewController=_captureViewController;
@property(nonatomic) __weak id <T1CameraCaptureCameraModeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) unsigned long long captureMode; // @synthesize captureMode=_captureMode;
@property(copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
- (void)cameraCaptureCameraModeConfirmationController:(id)arg1 didAddOversizedAttachment:(id)arg2 ofSize:(unsigned long long)arg3;
- (void)cameraCaptureCameraModeConfirmationController:(id)arg1 didAddAttachment:(id)arg2;
- (void)cameraCaptureCameraModeConfirmationControllerDidCancel:(id)arg1;
- (void)_t1_main_didCapturePhotoImageData:(id)arg1;
- (void)twitterCameraCaptureDidCapturePhoto:(id)arg1 error:(id)arg2;
- (void)_t1_main_didCaptureVideoURL:(id)arg1;
- (void)twitterCameraCaptureDidRenderVideoURL:(id)arg1 error:(id)arg2;
- (void)twitterCameraCaptureShouldBeginPostCaptureTransition:(id)arg1;
- (void)twitterCameraCaptureVideoTimeDidTickWithDuration:(float)arg1;
- (void)twitterCameraCaptureVideoReachedMaximumThreshold;
- (void)twitterCameraCaptureVideoReachedMinimumThreshold;
- (void)_t1_main_capturePhoto;
- (void)_t1_main_stopRecording;
- (void)_t1_main_requestStopRecording;
- (void)_t1_main_startRecording;
- (void)cameraCaptureViewController:(id)arg1 didChangeCameraSessionState:(unsigned long long)arg2;
- (void)cameraCaptureCameraModeRecordViewController:(id)arg1 didChangeZoomScale:(double)arg2;
- (void)cameraCaptureCameraModeRecordViewControllerDidStopRecording:(id)arg1;
- (void)cameraCaptureCameraModeRecordViewControllerDidStartRecording:(id)arg1;
- (void)viewControllerDidDismissAnimated:(_Bool)arg1;
- (void)viewControllerWillPresentAnimated:(_Bool)arg1;
- (id)scribeComponent;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (void)tfn_viewControllerWillSwapWithTransitionCoordinator:(id)arg1;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidLoad;
@property(readonly, nonatomic) UIViewController *contentViewController;
- (void)_t1_main_purgeWorkingDirectoryAndCapturedData;
- (void)_t1_main_updateCaptureViewController;
- (void)_t1_main_updateConfirmationViewController;
- (struct CGRect)_t1_main_calculateClippingRectFromImage:(id)arg1 inViewSize:(struct CGSize)arg2;
- (void)_t1_main_updateRecordingViewController;
- (double)_t1_main_calculateLetterboxHeightDifferenceWithSize:(struct CGSize)arg1;
- (void)_t1_main_updateRecordingState;
- (id)_t1_main_loadConfirmationViewController;
- (id)_t1_main_loadRecordViewController;
- (void)_t1_main_updateContentViewControllerAnimated:(_Bool)arg1;
- (id)initWithCaptureViewController:(id)arg1 featureSwitches:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIView *swappingContainerView;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIView",?,R,N


@end

