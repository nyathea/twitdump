//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint, NSString, TIPImagePipeline, TUIAvatarImageView, TUIAvatarImageViewModel, UIColor, UIImage;
@protocol TFSTwitterCanonicalUser;

@interface TCRVoiceAvatarView : UIView
{
    _Bool _ambientAnimationEnabled;
    TUIAvatarImageViewModel *_avatarViewModel;
    double _circleMaxOffset;
    UIColor *_circlesColor;
    TUIAvatarImageView *_profileImageView;
    NSArray *_circlesLayers;
    NSLayoutConstraint *_avatarMaxWidthConstraint;
    NSString *_userID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) NSLayoutConstraint *avatarMaxWidthConstraint; // @synthesize avatarMaxWidthConstraint=_avatarMaxWidthConstraint;
@property(retain, nonatomic) NSArray *circlesLayers; // @synthesize circlesLayers=_circlesLayers;
@property(retain, nonatomic) TUIAvatarImageView *profileImageView; // @synthesize profileImageView=_profileImageView;
@property(retain, nonatomic) UIColor *circlesColor; // @synthesize circlesColor=_circlesColor;
@property(nonatomic) double circleMaxOffset; // @synthesize circleMaxOffset=_circleMaxOffset;
@property(retain, nonatomic) TUIAvatarImageViewModel *avatarViewModel; // @synthesize avatarViewModel=_avatarViewModel;
@property(nonatomic, getter=ambientAnimationIsEnabled) _Bool ambientAnimationEnabled; // @synthesize ambientAnimationEnabled=_ambientAnimationEnabled;
- (void)tfx_voicePlaybackCircleOpacityFactorParameterChanged;
- (void)tfx_voicePlaybackCircleCountParameterChanged;
- (void)_tcr_animateExpandAndFade;
- (void)_tcr_animatePing;
- (void)_tcr_animateFocus;
- (unsigned long long)_tcr_ambientCircleCount;
- (_Bool)_tcr_isAmbientlyAnimating;
- (void)showCircles;
- (void)hideCircles;
- (void)stopAmbientAnimations;
- (void)beginAmbientAnimation;
- (void)animateCirclesForAudioLevel:(double)arg1;
- (void)setAudioLevel:(id)arg1;
@property(retain, nonatomic) UIImage *avatarImage;
@property(retain, nonatomic) TIPImagePipeline *imagePipeline;
@property(retain, nonatomic) id <TFSTwitterCanonicalUser> user;
@property(nonatomic) double maximumAvatarWidth;
- (void)layoutSubviews;
- (id)_tcr_individualCircleColor;
- (void)setupCircles;
- (void)setupProfileImageView:(id)arg1;
- (id)initWithImagePipeline:(id)arg1;

@end

