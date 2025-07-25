//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterAppSPMMigration/NSObject-Protocol.h>

@protocol PTVVideoReplayDelegate <NSObject>

@optional
- (void)replayControllerDidFinishScrubbingAtSeekTime:(double)arg1;
- (void)replayControllerDidCancelScrubbing;
- (void)replayControllerWillBeginScrubbing;
- (void)replayControllerDidReachEndOfVideo;
- (void)replayControllerDidChangeBuffering:(_Bool)arg1;
@end

