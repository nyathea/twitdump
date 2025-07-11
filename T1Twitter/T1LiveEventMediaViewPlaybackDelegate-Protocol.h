//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSError, T1LiveEventMediaView, TAVPlayer, TAVScribeContext;

@protocol T1LiveEventMediaViewPlaybackDelegate <NSObject>
- (TAVScribeContext *)tavScribeContextForMediaView:(T1LiveEventMediaView *)arg1;
- (void)liveEventMediaViewDidEndAdPlayback:(T1LiveEventMediaView *)arg1;
- (void)liveEventMediaViewDidStartAdPlayback:(T1LiveEventMediaView *)arg1;
- (void)liveEventMediaView:(T1LiveEventMediaView *)arg1 didFailWithError:(NSError *)arg2;
- (void)liveEventMediaViewDidCompletePlayback:(T1LiveEventMediaView *)arg1;
- (void)liveEventMediaViewDidStartPlayback:(T1LiveEventMediaView *)arg1;
- (void)liveEventMediaView:(T1LiveEventMediaView *)arg1 didSetPlayer:(TAVPlayer *)arg2;
@end

