//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray, NSString, SFSpeechAudioBufferRecognitionRequest, SFSpeechRecognitionTask, SFSpeechRecognizer;
@protocol PTVAudioTranscriberDelegate;

@interface PTVAudioTranscriber : NSObject
{
    _Bool _finished;
    unsigned long long _clipIndex;
    id <PTVAudioTranscriberDelegate> _delegate;
    NSDate *_creationDate;
    NSDate *_taskCreationDate;
    NSMutableArray *_segments;
    SFSpeechRecognizer *_speechRecognizer;
    NSMutableArray *_speechRecognitionTasks;
    SFSpeechRecognitionTask *_speechRecognitionRunningTask;
    SFSpeechAudioBufferRecognitionRequest *_speechRecognitionRequest;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SFSpeechAudioBufferRecognitionRequest *speechRecognitionRequest; // @synthesize speechRecognitionRequest=_speechRecognitionRequest;
@property(retain, nonatomic) SFSpeechRecognitionTask *speechRecognitionRunningTask; // @synthesize speechRecognitionRunningTask=_speechRecognitionRunningTask;
@property(retain, nonatomic) NSMutableArray *speechRecognitionTasks; // @synthesize speechRecognitionTasks=_speechRecognitionTasks;
@property(retain, nonatomic) SFSpeechRecognizer *speechRecognizer; // @synthesize speechRecognizer=_speechRecognizer;
@property(retain, nonatomic) NSMutableArray *segments; // @synthesize segments=_segments;
@property(readonly, nonatomic) NSDate *taskCreationDate; // @synthesize taskCreationDate=_taskCreationDate;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(nonatomic) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic) __weak id <PTVAudioTranscriberDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long clipIndex; // @synthesize clipIndex=_clipIndex;
- (void)_t1_sendResultTranscription;
- (void)speechRecognitionTask:(id)arg1 didFinishSuccessfully:(_Bool)arg2;
- (void)speechRecognitionTask:(id)arg1 didHypothesizeTranscription:(id)arg2;
- (void)speechRecognitionTask:(id)arg1 didFinishRecognition:(id)arg2;
- (void)speechRecognitionTaskFinishedReadingAudio:(id)arg1;
- (void)speechRecognitionTaskWasCancelled:(id)arg1;
- (void)finish;
- (void)cancel;
- (void)pause;
- (void)appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (id)initWithLocale:(id)arg1 clipIndex:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

