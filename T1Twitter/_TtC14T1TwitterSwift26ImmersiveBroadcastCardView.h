//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE, TAVPlayerSessionProducer, TFNTwitterStatus;
@protocol T1ImmersiveCardPlayerViewProtocol;

@interface _TtC14T1TwitterSwift26ImmersiveBroadcastCardView : UIView
{
    MISSING_TYPE *account;
    MISSING_TYPE *cardHelper;
    MISSING_TYPE *broadcastPlayerView;
    MISSING_TYPE *isStarted;
    MISSING_TYPE *lastHandledError;
    MISSING_TYPE *pillView;
    MISSING_TYPE *cardOverlayView;
    MISSING_TYPE *mediaCastEnabled;
    MISSING_TYPE *viewModel;
    MISSING_TYPE *lastObservedPlaybackState;
    MISSING_TYPE *lastObservedTXXXFrame;
    MISSING_TYPE *lifecycleController;
    MISSING_TYPE *chatInputView;
    MISSING_TYPE *keyboardBottomInset;
    MISSING_TYPE *chatContainerViewController;
    MISSING_TYPE *playbackRateBeforeLongPressToSpeedUp;
    MISSING_TYPE *textTweetContentMinY;
    MISSING_TYPE *mediaTweetContentMinY;
    MISSING_TYPE *actionsButtonViewBottomInset;
    MISSING_TYPE *shouldShowVideoSettingsButton;
    MISSING_TYPE *delegate;
    MISSING_TYPE *videoSettingsCoordinator;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)handleMediaCastSessionChange;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)userTappedOnTimestamp:(id)arg1;
- (void)stopNativePictureInPicture;
@property(nonatomic, readonly) _Bool isNativePictureInPictureActive;
@property(nonatomic, readonly) _Bool isTopTweetCard;
@property(nonatomic, readonly) TFNTwitterStatus *status;
@property(nonatomic, readonly) TAVPlayerSessionProducer *playerSessionProducer;
@property(nonatomic, readonly) UIView<T1ImmersiveCardPlayerViewProtocol> *playerView;
- (void)player:(id)arg1 didOutputTXXXFrameWithDescription:(id)arg2 value:(id)arg3;
- (void)player:(id)arg1 didUpdatePlaybackState:(id)arg2;
- (void)willResignAsActiveAutoplayableWithManager:(id)arg1;
- (void)didBecomeActiveAutoplayableWithManager:(id)arg1;
@property(nonatomic, readonly) long long autoplayableType;
@property(nonatomic, readonly) UIView *autoplayableView;

@end

