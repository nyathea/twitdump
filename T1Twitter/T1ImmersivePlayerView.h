//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE;

@interface T1ImmersivePlayerView : UIView
{
    MISSING_TYPE *account;
    MISSING_TYPE *videoPlayerView;
    MISSING_TYPE *internalState;
    MISSING_TYPE *fetchHelper;
    MISSING_TYPE *previewImageView;
    MISSING_TYPE *mediaLoadingView;
    MISSING_TYPE *videoSettingsCoordinator;
    MISSING_TYPE *contentView;
    MISSING_TYPE *lastObservedPlaybackState;
    MISSING_TYPE *lastIsReadyForDisplay;
    MISSING_TYPE *playerSessionProducer;
    MISSING_TYPE *tavPlayerHolder;
    MISSING_TYPE *onVideoRotationAnimation;
    MISSING_TYPE *onStartSpinnerAnimation;
    MISSING_TYPE *topAlignmentMultiplier;
    MISSING_TYPE *delegate;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (void)player:(id)arg1 didUpdatePlaybackState:(id)arg2;
- (void)tui_fetchHelper:(id)arg1 didLoadInitialImageFromSource:(long long)arg2;

@end

