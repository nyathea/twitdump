//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GADEventContext, GADVideoMetadataMonitor, GADVideoOptions, GADWebAdView, NSString;
@protocol OS_dispatch_queue;

@interface GADAdVideoController : NSObject
{
    GADWebAdView *_adView;
    _Bool _videoOptionsCustomControlsRequested;
    _Bool _videoOptionsClickToExpandRequested;
    GADVideoMetadataMonitor *_videoMetadataMonitor;
    GADVideoOptions *_videoOptions;
    NSObject<OS_dispatch_queue> *_lockQueue;
    _Bool _videoMuted;
    _Bool _hasVideoContent;
    _Bool _customControlsEnabled;
    _Bool _clickToExpandEnabled;
    long long _videoPlaybackState;
    double _videoDuration;
    double _currentPlaybackTime;
    double _aspectRatio;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool clickToExpandEnabled; // @synthesize clickToExpandEnabled=_clickToExpandEnabled;
@property(nonatomic) _Bool customControlsEnabled; // @synthesize customControlsEnabled=_customControlsEnabled;
@property(nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(nonatomic) _Bool hasVideoContent; // @synthesize hasVideoContent=_hasVideoContent;
@property(nonatomic) _Bool videoMuted; // @synthesize videoMuted=_videoMuted;
@property(nonatomic) double currentPlaybackTime; // @synthesize currentPlaybackTime=_currentPlaybackTime;
@property(nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(nonatomic) long long videoPlaybackState; // @synthesize videoPlaybackState=_videoPlaybackState;
@property(readonly, nonatomic) GADEventContext *context;
- (void)setInitialStateWithConfigurations:(id)arg1;
- (_Bool)isMuted;
- (void)setIsMuted:(_Bool)arg1;
- (double)currentTime;
- (void)setCurrentTime:(double)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (void)stop;
- (void)pause;
- (void)play;
- (void)setMute:(_Bool)arg1;
- (id)initWithMessageSource:(id)arg1 webAdView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

