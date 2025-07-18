//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TAVPlaybackState, TAVSeekCursor, TAVTechnologicalPlayerInternalState, TAVTechnologicalPlayerMainThreadState, UIView;
@protocol NSObject, OS_dispatch_queue, TAVPlayerOutputView, TAVSession;

@interface TAVPlayer : NSObject
{
    _Bool _isObscuringViewTrackingEnabled;
    TAVTechnologicalPlayerMainThreadState *_mainThreadState;
    TAVTechnologicalPlayerInternalState *_internalState;
    NSObject<OS_dispatch_queue> *_internalStateQueue;
    id <NSObject> _audioRouteObserver;
    id <NSObject> _audioSessionInterruptionObserver;
    CDUnknownBlockType _prepareFinishedNotificationBlock;
}

+ (void)setErrorRetrySimpleBackoffMinimumValue:(double)arg1;
+ (double)errorRetrySimpleBackoffMinimumValue;
+ (void)setIsNonDecreasingPreferredPeakBitrateCapEnabled:(_Bool)arg1;
+ (_Bool)isNonDecreasingPreferredPeakBitrateCapEnabled;
+ (id)playerWithPlaylistItem:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType prepareFinishedNotificationBlock; // @synthesize prepareFinishedNotificationBlock=_prepareFinishedNotificationBlock;
@property(readonly, nonatomic) id <NSObject> audioSessionInterruptionObserver; // @synthesize audioSessionInterruptionObserver=_audioSessionInterruptionObserver;
@property(readonly, nonatomic) id <NSObject> audioRouteObserver; // @synthesize audioRouteObserver=_audioRouteObserver;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *internalStateQueue; // @synthesize internalStateQueue=_internalStateQueue;
@property(nonatomic) _Bool isObscuringViewTrackingEnabled; // @synthesize isObscuringViewTrackingEnabled=_isObscuringViewTrackingEnabled;
- (void)generateDebugReportWithParentReport:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)isNativePictureInPictureActive;
- (void)stopNativePictureInPicture;
- (void)startNativePictureInPicture;
- (_Bool)isNativePictureInPicturePossible;
- (id)currentItemTech;
- (void)dealloc;
- (void)setTargetRelativePresentationOffset:(id)arg1;
- (void)setCaptionsEnabled:(_Bool)arg1;
- (void)selectLegibleMediaSelectionOption:(id)arg1;
- (_Bool)isPresentingInDescendantOfView:(id)arg1;
- (void)attemptToRecoverFromError;
- (void)removePlaybackObserver:(id)arg1;
- (void)addPlaybackObserver:(id)arg1;
- (void)advance;
- (void)pause;
- (void)playOrReplay;
- (void)play;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
@property(copy, nonatomic) TAVSeekCursor *scrubCursor;
@property(nonatomic) float volume;
@property(nonatomic) _Bool isMuted;
- (void)unregisterCandidateOutputViewHost:(id)arg1;
- (void)registerCandidateOutputViewHost:(id)arg1 priority:(long long)arg2;
- (void)updatePlayerInternalStateFromPlayerView:(id)arg1;
- (void)setOutputViewHost:(id)arg1;
- (void)outputViewHostWasDeallocated;
- (id)outputViewHost;
@property(readonly, nonatomic) UIView<TAVPlayerOutputView> *outputView;
- (void)updateQualityEndpointsIfNeeded;
- (void)captureSnapshotForCurrentMediaWithCompletion:(CDUnknownBlockType)arg1;
- (void)resetPlaythrough;
- (void)prepareWithSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) id <TAVSession> session;
@property(readonly, nonatomic) TAVPlaybackState *playbackState;
- (void)playerTechnology:(id)arg1 restoreInterfaceForNativePictureInPictureWithCompletion:(CDUnknownBlockType)arg2;
- (void)playerTechnologyPlaybackDidChangeInPictureInPicture:(_Bool)arg1;
- (void)playerTechnologyDidStopNativePictureInPicture:(id)arg1;
- (void)playerTechnology:(id)arg1 didEncounterNonFatalError:(id)arg2;
- (void)playerTechnology:(id)arg1 didOutputAudioData:(id)arg2 timestamp:(double)arg3;
- (void)playerTechnology:(id)arg1 didSetAudioSampleRate:(unsigned int)arg2 channelCount:(unsigned int)arg3;
- (void)playerTechnology:(id)arg1 didOutputTXXXFrameWithDescription:(id)arg2 value:(id)arg3;
- (void)playerTechnology:(id)arg1 didUpdateState:(id)arg2;
- (void)sync_audioSessionInterruptedWithType:(unsigned long long)arg1 options:(unsigned long long)arg2 mainThreadStateAllowsPlayback:(_Bool)arg3;
- (void)sync_autoPauseIfNoOutputViewHost;
- (void)sync_attemptToRecoverFromError;
- (void)mainThread_seekWithClientInitiatedCursor:(id)arg1;
- (void)sync_seekWithCursor:(id)arg1;
- (void)sync_updateTechControlState;
- (void)sync_setUpdateTechControlStateNeeded;
- (id)sync_createTechControlState;
- (void)sync_broadcastState;
- (id)sync_createPerformanceState;
- (void)playerTechnology:(id)arg1 didUpdateOutputView:(id)arg2;
- (void)sync_cueItemAtIndex:(unsigned long long)arg1 reason:(id)arg2 time:(CDStruct_1b6d18a9)arg3;
@property(readonly, nonatomic) TAVTechnologicalPlayerInternalState *internalState; // @synthesize internalState=_internalState;
@property(readonly, nonatomic) TAVTechnologicalPlayerMainThreadState *mainThreadState; // @synthesize mainThreadState=_mainThreadState;
- (id)init;

@end

