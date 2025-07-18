//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TAVPlaybackState, TFSTwitterBroadcast;
@protocol TAVPlayback;

@interface T1LiveEventCardViewLifecycleObserver : NSObject
{
    double _viewThreshold;
    NSString *_component;
    NSString *_section;
    TAVPlaybackState *_lastPlaybackState;
    TFSTwitterBroadcast *_broadcast;
    id <TAVPlayback> _observedPlayer;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <TAVPlayback> observedPlayer; // @synthesize observedPlayer=_observedPlayer;
- (void)player:(id)arg1 didUpdatePlaybackState:(id)arg2;
- (void)dealloc;
- (id)initWithViewThreshold:(double)arg1 broadcast:(id)arg2 component:(id)arg3 section:(id)arg4;
- (id)initWithViewThreshold:(double)arg1 broadcast:(id)arg2 component:(id)arg3;
- (id)init;

@end

