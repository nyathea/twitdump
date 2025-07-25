//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, T1InlineMediaView, T1PrerollCTAButton, T1PrerollCTAModel, T1StatusPhotoVideoDetailsView;
@protocol T1InlineMediaContainerViewDelegate;

@interface T1InlineMediaContainerView : UIView
{
    _Bool _buttonHidden;
    T1StatusPhotoVideoDetailsView *_detailsView;
    T1InlineMediaView *_mediaView;
    id <T1InlineMediaContainerViewDelegate> _delegate;
    T1PrerollCTAModel *_ctaModel;
    T1PrerollCTAButton *_button;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool buttonHidden; // @synthesize buttonHidden=_buttonHidden;
@property(retain, nonatomic) T1PrerollCTAButton *button; // @synthesize button=_button;
@property(retain, nonatomic) T1PrerollCTAModel *ctaModel; // @synthesize ctaModel=_ctaModel;
@property(nonatomic) __weak id <T1InlineMediaContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) T1InlineMediaView *mediaView; // @synthesize mediaView=_mediaView;
@property(nonatomic) __weak T1StatusPhotoVideoDetailsView *detailsView; // @synthesize detailsView=_detailsView;
- (void)_t1_handleCTAButtonTap:(id)arg1;
- (struct CGRect)_t1_updatedFrame;
- (void)_t1_showCTAButton;
- (void)_t1_hideCTAButton;
- (void)_t1_setupButton;
- (void)_t1_setup;
- (void)sizeToFit;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
@property(retain, nonatomic) NSString *ctaTitle;
- (void)inlineMediaViewWillPrepareForReuse;
- (void)inlineMediaViewWillShowCTA;
- (void)inlineMediaView:(id)arg1 didStartPrerollWithCTAModel:(id)arg2;
- (void)inlineMediaViewWillHideCTA;
- (void)inlineMediaViewDidEndPreroll:(id)arg1;
- (void)setIsAccessibilityElement:(_Bool)arg1;
- (id)initWithMediaView:(id)arg1 detailsView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

