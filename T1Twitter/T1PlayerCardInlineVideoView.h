//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, T1InlineMediaView, T1InlineVideoView, T1InlineVideoViewGestureResponder, TUIImageViewFetchHelper, UIImage;
@protocol T1PlayerCardInlineVideoViewDelegate, TVPPlayerSessionSource;

@interface T1PlayerCardInlineVideoView : UIView
{
    id <T1PlayerCardInlineVideoViewDelegate> _delegate;
    TUIImageViewFetchHelper *_previewImageFetchHelper;
    T1InlineMediaView *_inlineMediaView;
    T1InlineVideoView *_inlineVideoView;
    T1InlineVideoViewGestureResponder *_ivvGestureResponder;
}

+ (id)new;
- (void).cxx_destruct;
@property(readonly, nonatomic) T1InlineVideoViewGestureResponder *ivvGestureResponder; // @synthesize ivvGestureResponder=_ivvGestureResponder;
@property(readonly, nonatomic) T1InlineVideoView *inlineVideoView; // @synthesize inlineVideoView=_inlineVideoView;
@property(readonly, nonatomic) T1InlineMediaView *inlineMediaView; // @synthesize inlineMediaView=_inlineMediaView;
@property(retain, nonatomic) TUIImageViewFetchHelper *previewImageFetchHelper; // @synthesize previewImageFetchHelper=_previewImageFetchHelper;
@property(nonatomic) __weak id <T1PlayerCardInlineVideoViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIImage *playerPreviewImage;
@property(readonly, nonatomic) UIView *playerContainerView;
@property(readonly, nonatomic) id <TVPPlayerSessionSource> playerSessionSource;
- (id)autoplayable;
- (void)prepareForReuse;
- (void)playFullscreen;
- (void)inlineMediaView:(id)arg1 wasLongPressedWithGestureRecognizer:(id)arg2;
- (void)inlineMediaViewWasTapped:(id)arg1 withEvent:(id)arg2;
- (_Bool)inlineMediaViewShouldShowVideoDetailsInOverlay:(id)arg1;
- (_Bool)accessibilityActivate;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
@property(nonatomic) unsigned long long imageState;
@property(readonly, nonatomic) UIView *mediaView;
- (void)setStatus:(id)arg1 cardContext:(id)arg2 scribeContext:(id)arg3 imageFetchHelperDelegate:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

