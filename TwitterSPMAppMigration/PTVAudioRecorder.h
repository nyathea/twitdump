//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAssetWriter, AVAssetWriterInput, AVCaptureSession, NSDate, NSLocale, NSMutableArray, NSString, PTVAudioTranscriber;
@protocol OS_dispatch_queue, PTVAudioRecorderDelegate;

@interface PTVAudioRecorder : NSObject
{
    _Bool _paused;
    id <PTVAudioRecorderDelegate> _delegate;
    double _maximumNumberOfClips;
    double _clipMaximumDurationSeconds;
    NSLocale *_transcriptionLocale;
    AVCaptureSession *_captureSession;
    AVAssetWriter *_assetWriter;
    AVAssetWriterInput *_assetWriterInput;
    NSMutableArray *_transcribers;
    PTVAudioTranscriber *_currentTranscriber;
    NSObject<OS_dispatch_queue> *_audioQueue;
    unsigned long long _numberOfClips;
    double _clipDuration;
    double _overallDuration;
    NSDate *_sessionStartDate;
    CDStruct_1b6d18a9 _sessionLastPresentationTimeStamp;
}

- (void).cxx_destruct;
@property(nonatomic) CDStruct_1b6d18a9 sessionLastPresentationTimeStamp; // @synthesize sessionLastPresentationTimeStamp=_sessionLastPresentationTimeStamp;
@property(retain, nonatomic) NSDate *sessionStartDate; // @synthesize sessionStartDate=_sessionStartDate;
@property(nonatomic) double overallDuration; // @synthesize overallDuration=_overallDuration;
@property(nonatomic) double clipDuration; // @synthesize clipDuration=_clipDuration;
@property(nonatomic) unsigned long long numberOfClips; // @synthesize numberOfClips=_numberOfClips;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *audioQueue; // @synthesize audioQueue=_audioQueue;
@property(retain, nonatomic) PTVAudioTranscriber *currentTranscriber; // @synthesize currentTranscriber=_currentTranscriber;
@property(retain, nonatomic) NSMutableArray *transcribers; // @synthesize transcribers=_transcribers;
@property(retain, nonatomic) AVAssetWriterInput *assetWriterInput; // @synthesize assetWriterInput=_assetWriterInput;
@property(retain, nonatomic) AVAssetWriter *assetWriter; // @synthesize assetWriter=_assetWriter;
@property(retain, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property(readonly, nonatomic) NSLocale *transcriptionLocale; // @synthesize transcriptionLocale=_transcriptionLocale;
@property(readonly, nonatomic) double clipMaximumDurationSeconds; // @synthesize clipMaximumDurationSeconds=_clipMaximumDurationSeconds;
@property(readonly, nonatomic) double maximumNumberOfClips; // @synthesize maximumNumberOfClips=_maximumNumberOfClips;
@property(nonatomic) __weak id <PTVAudioRecorderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_ptv_saveDurations;
- (void)_ptv_createCaptureSession;
- (void)_ptv_createAssetWriter;
- (void)_ptv_createTranscriber;
- (void)phoneCallMonitorDidAcceptIncomingPhoneCall:(id)arg1;
- (void)phoneCallMonitorDidReceiveIncomingPhoneCall:(id)arg1;
- (void)audioTranscriber:(id)arg1 didFinishWithTranscription:(id)arg2;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)startNewClip;
- (_Bool)canStartNewClip;
- (void)cancelRecording;
- (void)endRecording;
- (void)pauseRecording;
- (void)startOrResumeRecording;
- (id)initWithMaximumNumberOfClips:(unsigned long long)arg1 clipMaximumDurationSeconds:(double)arg2 transcriptionLocale:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

