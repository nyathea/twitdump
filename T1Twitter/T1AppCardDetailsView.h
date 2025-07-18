//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNLayoutableView.h>

@class T1AppCardRatingsView, TFNButton, TFNTappableHighlightView, UILabel;
@protocol T1AppCardDetailsViewLayoutDelegate, T1AppCardDetailsViewModel, T1AppCardViewEventRegistry, TUICardViewDelegate;

@interface T1AppCardDetailsView : TFNLayoutableView
{
    id <TUICardViewDelegate> _delegate;
    id <T1AppCardViewEventRegistry> _viewEventRegistry;
    id <T1AppCardDetailsViewModel> _viewModel;
    TFNButton *_callToActionButton;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    T1AppCardRatingsView *_ratingsView;
    TFNTappableHighlightView *_descriptionHighlightView;
    UILabel *_appCategoryLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *appCategoryLabel; // @synthesize appCategoryLabel=_appCategoryLabel;
@property(retain, nonatomic) TFNTappableHighlightView *descriptionHighlightView; // @synthesize descriptionHighlightView=_descriptionHighlightView;
@property(retain, nonatomic) T1AppCardRatingsView *ratingsView; // @synthesize ratingsView=_ratingsView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) TFNButton *callToActionButton; // @synthesize callToActionButton=_callToActionButton;
@property(retain, nonatomic) id <T1AppCardDetailsViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) id <T1AppCardViewEventRegistry> viewEventRegistry; // @synthesize viewEventRegistry=_viewEventRegistry;
@property(nonatomic) __weak id <TUICardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)calculatedLayoutMetrics;
- (void)_updateContent;
- (void)viewModelDidUpdate;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) __weak id <T1AppCardDetailsViewLayoutDelegate> layoutDelegate; // @dynamic layoutDelegate;

@end

