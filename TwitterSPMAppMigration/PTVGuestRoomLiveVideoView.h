//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, NSTimer, PTVBlurredImageView, PTVGuestView, TFNFloatingView, UIScrollView;

@interface PTVGuestRoomLiveVideoView : UIView
{
    PTVGuestView *_guestView;
    PTVGuestView *_thumbnailGuestView;
    NSTimer *_blurTimer;
    PTVBlurredImageView *_blurredImageView;
    TFNFloatingView *_floatingView;
    UIScrollView *_scrollView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) TFNFloatingView *floatingView; // @synthesize floatingView=_floatingView;
@property(retain, nonatomic) PTVBlurredImageView *blurredImageView; // @synthesize blurredImageView=_blurredImageView;
@property(retain, nonatomic) NSTimer *blurTimer; // @synthesize blurTimer=_blurTimer;
- (void)resetZoomAnimated:(_Bool)arg1;
- (void)resetBlurImage;
- (void)_updateBlurImage;
- (void)setThumbnailGuestView:(id)arg1;
- (id)thumbnailGuestView;
- (void)setGuestView:(id)arg1;
- (id)guestView;
@property(readonly, nonatomic) double videoAspect;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

