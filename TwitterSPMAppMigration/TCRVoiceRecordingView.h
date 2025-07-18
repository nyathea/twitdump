//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, TCRVoiceAvatarView, TCRVoiceRecordingAudiowavesView, TCRVoiceRecordingButton, TCRVoiceRecordingViewModel, UIImage, UILabel;
@protocol TCRVoiceRecordingViewDelegate;

@interface TCRVoiceRecordingView : UIView
{
    id <TCRVoiceRecordingViewDelegate> _delegate;
    TCRVoiceRecordingViewModel *_viewModel;
    TCRVoiceRecordingButton *_recordingButton;
    TCRVoiceRecordingAudiowavesView *_audiowavesView;
    UIView *_audiowaveBaselineView;
    UIView *_avatarContainerView;
    TCRVoiceAvatarView *_avatarView;
    unsigned long long _avatarAnimationCurrentStepCount;
    UILabel *_initialPromptLabel;
}

+ (id)new;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *initialPromptLabel; // @synthesize initialPromptLabel=_initialPromptLabel;
@property(nonatomic) unsigned long long avatarAnimationCurrentStepCount; // @synthesize avatarAnimationCurrentStepCount=_avatarAnimationCurrentStepCount;
@property(retain, nonatomic) TCRVoiceAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIView *avatarContainerView; // @synthesize avatarContainerView=_avatarContainerView;
@property(retain, nonatomic) UIView *audiowaveBaselineView; // @synthesize audiowaveBaselineView=_audiowaveBaselineView;
@property(retain, nonatomic) TCRVoiceRecordingAudiowavesView *audiowavesView; // @synthesize audiowavesView=_audiowavesView;
@property(retain, nonatomic) TCRVoiceRecordingButton *recordingButton; // @synthesize recordingButton=_recordingButton;
@property(retain, nonatomic) TCRVoiceRecordingViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <TCRVoiceRecordingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_tcr_updateAudioLevel;
- (void)_tcr_updateRecordingButtonStyle;
- (void)_tcr_updateSubviewsVisibility;
- (void)_tcr_handleTapEvent:(id)arg1;
- (void)voiceRecordingViewModelDidUpdateTimer:(id)arg1;
- (void)voiceRecordingViewModelDidUpdatePlaybackState:(id)arg1;
- (void)voiceRecordingViewModelDidUpdateStep:(id)arg1;
@property(readonly, nonatomic) UIImage *avatarImage;
- (id)initWithViewModel:(id)arg1 imagePipeline:(id)arg2;
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

