//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, T1LockScreenModel;

@interface T1LockScreenManager : NSObject
{
    MISSING_TYPE *model;
    MISSING_TYPE *preferredTimescale;
    MISSING_TYPE *artworkSize;
    MISSING_TYPE *playbackDuration;
    MISSING_TYPE *elapsedPlaybackTime;
    MISSING_TYPE *artwork;
    MISSING_TYPE *timeControlStatus;
}

- (void).cxx_destruct;
- (id)init;
- (void)logImpression;
- (long long)handleSkipForwardCommand:(id)arg1;
- (long long)handleSkipBackCommand:(id)arg1;
- (long long)handleChangePlaybackPositionCommand:(id)arg1;
- (long long)handlePlayPauseCommand:(id)arg1;
- (long long)handleLikeCommand:(id)arg1;
- (void)dealloc;
- (id)initWithModel:(id)arg1;
@property(nonatomic, retain) T1LockScreenModel *model; // @synthesize model;
- (void)spaceModelDidShutdown:(id)arg1;
- (void)spaceModel:(id)arg1 didUpdatePlayback:(id)arg2;
- (void)player:(id)arg1 didUpdatePlaybackState:(id)arg2;

@end

