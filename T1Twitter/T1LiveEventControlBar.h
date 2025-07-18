//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, T1ControlBarAdCountdownLabel, T1ControlBarAdSkipControl, T1ControlBarAttributionLabel, T1ControlBarConstantWidthSpacer, T1ControlBarFlexibleWidthSpacer, T1ControlBarGIFPillView, T1ControlBarLabel, T1ControlBarMediaExpandButton, T1ControlBarMuteButton, T1ControlBarPillView, T1ControlBarPlayButton, T1ControlBarTimecodeView, T1ControlBarVODPillView, T1LiveEventControlBarViewModel, TAVControlBar, TAVPlaybackState, TFNGradientView, UIColor;
@protocol T1LiveEventControlBarDelegate;

@interface T1LiveEventControlBar : UIView
{
    _Bool _displayAndFadeChrome;
    _Bool _chromeHidden;
    _Bool _playbackHasBegun;
    T1ControlBarPillView *_pillView;
    T1ControlBarVODPillView *_vodPillView;
    T1ControlBarGIFPillView *_gifPillView;
    T1ControlBarTimecodeView *_timecodeView;
    T1ControlBarLabel *_label;
    T1ControlBarConstantWidthSpacer *_constantWidthSpacer;
    T1ControlBarFlexibleWidthSpacer *_flexibleWidthSpacer;
    T1ControlBarPlayButton *_playButton;
    T1ControlBarConstantWidthSpacer *_playButtonSpacer;
    T1ControlBarConstantWidthSpacer *_muteButtonSpacer;
    T1ControlBarMuteButton *_muteButton;
    T1ControlBarAdCountdownLabel *_adCountdownLabel;
    T1ControlBarAdSkipControl *_adSkipControl;
    T1ControlBarAttributionLabel *_attributionLabel;
    T1ControlBarMediaExpandButton *_mediaExpandButton;
    id <T1LiveEventControlBarDelegate> _delegate;
    unsigned long long _displayMode;
    UIColor *_shadowColor;
    TAVControlBar *_controlBar;
    TFNGradientView *_backgroundGradientView;
    TAVPlaybackState *_playbackState;
    double _timecode;
    T1LiveEventControlBarViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) T1LiveEventControlBarViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) double timecode; // @synthesize timecode=_timecode;
@property(nonatomic) _Bool playbackHasBegun; // @synthesize playbackHasBegun=_playbackHasBegun;
@property(retain, nonatomic) TAVPlaybackState *playbackState; // @synthesize playbackState=_playbackState;
@property(retain, nonatomic) TFNGradientView *backgroundGradientView; // @synthesize backgroundGradientView=_backgroundGradientView;
@property(retain, nonatomic) TAVControlBar *controlBar; // @synthesize controlBar=_controlBar;
@property(nonatomic, getter=isChromeHidden) _Bool chromeHidden; // @synthesize chromeHidden=_chromeHidden;
@property(nonatomic) _Bool displayAndFadeChrome; // @synthesize displayAndFadeChrome=_displayAndFadeChrome;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(nonatomic) unsigned long long displayMode; // @synthesize displayMode=_displayMode;
@property(nonatomic) __weak id <T1LiveEventControlBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fadeContentOwnerName;
- (void)_t1_setChromeAlpha:(double)arg1;
- (_Bool)shouldDisplayAndFadeChrome;
- (_Bool)shouldDisplayAndFadeContentOwnerName;
- (void)controlBarMuteButton:(id)arg1 didUpdateMuteState:(_Bool)arg2;
- (void)controlBarPlayButton:(id)arg1 didTapToPlay:(_Bool)arg2;
- (void)didTapAttributionLabel:(id)arg1;
- (void)player:(id)arg1 didUpdatePlaybackState:(id)arg2;
- (id)controlBar:(id)arg1 itemForIdentifier:(id)arg2;
- (void)_t1_updateElementVisibilityWithPlayer:(id)arg1;
- (void)_t1_didTapMediaExpandButton;
- (void)_t1_reloadControlBar;
- (_Bool)_t1_needsControlBarReloadForCurrentPlaybackState:(id)arg1 newPlaybackState:(id)arg2;
- (id)_t1_controlBarItemIdentifiersForDisplayMode:(unsigned long long)arg1 contentType:(unsigned long long)arg2 playbackState:(id)arg3 timecode:(double)arg4;
@property(readonly, nonatomic) T1ControlBarMediaExpandButton *mediaExpandButton; // @synthesize mediaExpandButton=_mediaExpandButton;
@property(readonly, nonatomic) T1ControlBarAttributionLabel *attributionLabel; // @synthesize attributionLabel=_attributionLabel;
@property(readonly, nonatomic) T1ControlBarAdSkipControl *adSkipControl; // @synthesize adSkipControl=_adSkipControl;
@property(readonly, nonatomic) T1ControlBarAdCountdownLabel *adCountdownLabel; // @synthesize adCountdownLabel=_adCountdownLabel;
@property(readonly, nonatomic) T1ControlBarMuteButton *muteButton; // @synthesize muteButton=_muteButton;
@property(readonly, nonatomic) T1ControlBarPlayButton *playButton; // @synthesize playButton=_playButton;
@property(readonly, nonatomic) T1ControlBarFlexibleWidthSpacer *flexibleWidthSpacer; // @synthesize flexibleWidthSpacer=_flexibleWidthSpacer;
@property(readonly, nonatomic) T1ControlBarConstantWidthSpacer *muteButtonSpacer; // @synthesize muteButtonSpacer=_muteButtonSpacer;
@property(readonly, nonatomic) T1ControlBarConstantWidthSpacer *playButtonSpacer; // @synthesize playButtonSpacer=_playButtonSpacer;
@property(readonly, nonatomic) T1ControlBarConstantWidthSpacer *constantWidthSpacer; // @synthesize constantWidthSpacer=_constantWidthSpacer;
@property(readonly, nonatomic) T1ControlBarLabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) T1ControlBarTimecodeView *timecodeView; // @synthesize timecodeView=_timecodeView;
@property(readonly, nonatomic) T1ControlBarGIFPillView *gifPillView; // @synthesize gifPillView=_gifPillView;
@property(readonly, nonatomic) T1ControlBarVODPillView *vodPillView; // @synthesize vodPillView=_vodPillView;
@property(readonly, nonatomic) T1ControlBarPillView *pillView; // @synthesize pillView=_pillView;
@property(nonatomic) struct UIEdgeInsets contentLayoutMargins;
- (void)cleanup;
- (void)setCurrentTimeInterval:(double)arg1;
- (void)updateWithViewModel:(id)arg1;
- (void)updateWithPlayerView:(id)arg1 timecode:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

