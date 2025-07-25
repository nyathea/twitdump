//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE, UIImage;
@protocol TVPPlayerSessionSource;

@interface _TtC14T1TwitterSwift16SummaryMediaView : UIView
{
    MISSING_TYPE *state;
    MISSING_TYPE *viewModel;
    MISSING_TYPE *imagePipeline;
    MISSING_TYPE *playerView;
    MISSING_TYPE *isPlaybackDesired;
    MISSING_TYPE *$__lazy_storage_$_backgroundImageView;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)willResignAsActiveAutoplayableWithManager:(id)arg1;
- (void)didBecomeActiveAutoplayableWithManager:(id)arg1;
@property(nonatomic, readonly) UIImage *playerPreviewImage;
@property(nonatomic, readonly) id <TVPPlayerSessionSource> playerSessionSource;
@property(nonatomic, readonly) UIView *playerContainerView;
@property(nonatomic, readonly) long long autoplayableType;
- (id)autoplayable;
@property(nonatomic, readonly) UIView *autoplayableView;
- (void)observerDidAttachToPlayer:(id)arg1;
- (void)player:(id)arg1 didUpdatePlaybackState:(id)arg2;

@end

