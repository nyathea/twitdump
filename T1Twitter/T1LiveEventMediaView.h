//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, T1BroadcastContainerView, T1LiveEventAudiospaceContainerView, T1LiveEventMediaViewModel, T1LiveEventVideoContainerView, TAVPlayerViewConfiguration, TFSTimer, UIImage, UITapGestureRecognizer;
@protocol T1LiveEventMediaViewInteractionDelegate, T1LiveEventMediaViewPlaybackDelegate;

@interface T1LiveEventMediaView : UIView
{
    T1LiveEventMediaViewModel *_viewModel;
    TAVPlayerViewConfiguration *_playerViewConfiguration;
    id <T1LiveEventMediaViewPlaybackDelegate> _playbackDelegate;
    id <T1LiveEventMediaViewInteractionDelegate> _interactionDelegate;
    unsigned long long _displayMode;
    UITapGestureRecognizer *_videoContainerGestureRecognizer;
    UITapGestureRecognizer *_broadcastContainerGestureRecognizer;
    UITapGestureRecognizer *_audiospaceContainerGestureRecognizer;
    T1BroadcastContainerView *_broadcastContainerView;
    T1LiveEventVideoContainerView *_videoContainerView;
    T1LiveEventAudiospaceContainerView *_audiospaceContainerView;
    TFSTimer *_fadeTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TFSTimer *fadeTimer; // @synthesize fadeTimer=_fadeTimer;
@property(retain, nonatomic) T1LiveEventAudiospaceContainerView *audiospaceContainerView; // @synthesize audiospaceContainerView=_audiospaceContainerView;
@property(retain, nonatomic) T1LiveEventVideoContainerView *videoContainerView; // @synthesize videoContainerView=_videoContainerView;
@property(retain, nonatomic) T1BroadcastContainerView *broadcastContainerView; // @synthesize broadcastContainerView=_broadcastContainerView;
@property(readonly, nonatomic) UITapGestureRecognizer *audiospaceContainerGestureRecognizer; // @synthesize audiospaceContainerGestureRecognizer=_audiospaceContainerGestureRecognizer;
@property(readonly, nonatomic) UITapGestureRecognizer *broadcastContainerGestureRecognizer; // @synthesize broadcastContainerGestureRecognizer=_broadcastContainerGestureRecognizer;
@property(readonly, nonatomic) UITapGestureRecognizer *videoContainerGestureRecognizer; // @synthesize videoContainerGestureRecognizer=_videoContainerGestureRecognizer;
@property(nonatomic) unsigned long long displayMode; // @synthesize displayMode=_displayMode;
@property(nonatomic) __weak id <T1LiveEventMediaViewInteractionDelegate> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
@property(nonatomic) __weak id <T1LiveEventMediaViewPlaybackDelegate> playbackDelegate; // @synthesize playbackDelegate=_playbackDelegate;
@property(copy, nonatomic) TAVPlayerViewConfiguration *playerViewConfiguration; // @synthesize playerViewConfiguration=_playerViewConfiguration;
@property(retain, nonatomic) T1LiveEventMediaViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)liveEventAudiospaceContainerViewDidTapActionButton:(id)arg1;
- (void)liveEventVideoContainerViewDidTapInitialPlayButton:(id)arg1;
- (void)liveEventVideoContainerView:(id)arg1 didUpdateMuteState:(_Bool)arg2;
- (void)liveEventVideoContainerView:(id)arg1 didTapAttributionForStatus:(id)arg2;
- (void)liveEventVideoContainerView:(id)arg1 didTapToPlay:(_Bool)arg2;
- (void)liveEventVideoContainerView:(id)arg1 didTapToExpandMedia:(id)arg2 previewImage:(id)arg3;
- (void)liveEventVideoContainerView:(id)arg1 didEndAdPlaybackWithContext:(id)arg2;
- (void)liveEventVideoContainerView:(id)arg1 didStartAdPlaybackWithContext:(id)arg2;
- (void)liveEventVideoContainerViewDidCompletePlayback:(id)arg1;
- (void)liveEventVideoContainerViewDidStartPlayback:(id)arg1;
- (void)liveEventVideoContainerView:(id)arg1 didSetPlayer:(id)arg2;
- (void)broadcastContainerViewDidTapInitialPlayButton:(id)arg1;
- (void)broadcastContainerView:(id)arg1 didTapToExpandBroadcast:(id)arg2 cardDataSource:(id)arg3;
- (void)broadcastContainerView:(id)arg1 didUpdateMuteState:(_Bool)arg2;
- (void)broadcastContainerView:(id)arg1 didTapToPlay:(_Bool)arg2;
- (void)broadcastContainerView:(id)arg1 didEndAdPlaybackWithContext:(id)arg2;
- (void)broadcastContainerView:(id)arg1 didStartAdPlaybackWithContext:(id)arg2;
- (void)broadcastContainerView:(id)arg1 playbackDidFailWithError:(id)arg2;
- (void)broadcastContainerView:(id)arg1 didCompletePlayback:(id)arg2;
- (void)broadcastContainerView:(id)arg1 didStartPlayback:(id)arg2;
- (void)broadcastContainerView:(id)arg1 didSetPlayer:(id)arg2;
- (void)_t1_fadeTimerDidFire:(id)arg1;
- (void)_t1_invalidateFadeTimer;
- (void)_t1_configureFadeTimer;
- (id)autoplayable;
- (void)_t1_cleanupAudiospace;
- (void)_t1_cleanupVideo;
- (void)_t1_cleanupBroadcast;
@property(readonly, nonatomic) UIImage *thumbnailImage;
- (_Bool)shouldShowChrome;
- (struct CGRect)previewImageFrameInWindow:(id)arg1;
@property(nonatomic, getter=isChromeHidden) _Bool chromeHidden;
- (id)playerView;
- (void)cleanup;
- (void)pause;
- (void)play;
- (void)dissociatePlayer;
- (void)associatePlayer;
- (void)updateSubviews;
- (void)applyTheme:(id)arg1;
- (void)layoutSubviewsWithLayoutState:(id)arg1;
- (id)_t1_playerViewConfigurationWithDisplayModeAttachmentPriorityForPlayerViewConfiguration:(id)arg1;
- (void)_t1_setChildViewPlayerViewConfiguration;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 playerViewConfiguration:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

