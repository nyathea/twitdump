//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtCV8MediaTab18DockedVideoBarView9ViewModel : _TtCs12_SwiftObject
{
    MISSING_TYPE *_videoPlayerView;
    MISSING_TYPE *videoPlayer;
    MISSING_TYPE *status;
    MISSING_TYPE *dismiss;
    MISSING_TYPE *presentFullPlayer;
    MISSING_TYPE *progressSeconds;
    MISSING_TYPE *timeControlStatus;
    MISSING_TYPE *timescale;
    MISSING_TYPE *_playing;
    MISSING_TYPE *_offset;
    MISSING_TYPE *mediaCastEnabled;
    MISSING_TYPE *lastObservedPlaybackState;
    MISSING_TYPE *scribeSink;
    MISSING_TYPE *scribeContext;
}

- (void)handleMediaCastStatusUpdateWithNotification:(id)arg1;
- (void)stopPIP;
- (void)player:(id)arg1 didUpdatePlaybackState:(id)arg2;

@end

