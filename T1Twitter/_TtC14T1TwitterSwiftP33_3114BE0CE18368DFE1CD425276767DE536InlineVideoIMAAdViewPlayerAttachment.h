//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE, TAVPlaybackState, TAVSeekCursor;

@interface _TtC14T1TwitterSwiftP33_3114BE0CE18368DFE1CD425276767DE536InlineVideoIMAAdViewPlayerAttachment : _TtCs12_SwiftObject
{
    MISSING_TYPE *volume;
    MISSING_TYPE *isMuted;
    MISSING_TYPE *isPlaying;
    MISSING_TYPE *observers;
    MISSING_TYPE *scrubCursor;
}

@property(nonatomic, readonly) TAVPlaybackState *playbackState;
- (void)removePlaybackObserver:(id)arg1;
- (void)addPlaybackObserver:(id)arg1;
- (void)advance;
- (void)pause;
- (void)play;
- (void)updateQualityEndpointsIfNeeded;
- (void)captureSnapshotForCurrentMediaWithCompletion:(void (^)(UIImage *, NSError *))arg1;
- (_Bool)isPresentingInDescendantOfView:(id)arg1;
- (void)attemptToRecoverFromError;
- (void)setCaptionsEnabled:(_Bool)arg1;
- (void)selectLegibleMediaSelectionOption:(id)arg1;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
@property(nonatomic, retain) TAVSeekCursor *scrubCursor; // @synthesize scrubCursor;
- (void)playOrReplay;
@property(nonatomic) _Bool isMuted; // @synthesize isMuted;
@property(nonatomic) float volume; // @synthesize volume;

@end

