//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface TUCCompactCardVideoComponentView
{
    MISSING_TYPE *layoutToggleState;
    MISSING_TYPE *backgroundImageView;
    MISSING_TYPE *$__lazy_storage_$_fallbackHighlightView;
    MISSING_TYPE *$__lazy_storage_$_layoutToggle;
    MISSING_TYPE *videoViewUpdateBlock;
}

+ (id)sharedLayoutDelegate;
- (void).cxx_destruct;
- (id)initWithVideoView:(id)arg1 disableInteractionForSalesWebCard:(_Bool)arg2 hideVanityForSalesWebCard:(_Bool)arg3;
- (void)updateViewWithIsExpanded:(_Bool)arg1 cornerRadius:(double)arg2;
- (id)initWithVideoView:(id)arg1 videoViewUpdateBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) long long layoutToggleState; // @synthesize layoutToggleState;
- (void)handleLayoutToggleWithSender:(id)arg1;
- (void)handleTapWithSender:(id)arg1;
- (void)didLoadImage:(id)arg1;
- (void)videoView:(id)arg1 didPlayToEndWithCurrentPlaybackState:(id)arg2;
- (void)videoViewTapped:(id)arg1;

@end

