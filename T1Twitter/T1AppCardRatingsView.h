//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, UILabel;
@protocol T1AppCardDetailsViewModel;

@interface T1AppCardRatingsView : UIView
{
    _Bool _shouldShowRatingsText;
    id <T1AppCardDetailsViewModel> _viewModel;
    NSArray *_starSubviews;
    UILabel *_ratingsLabel;
}

+ (id)ratingsFontForUnifiedCards:(_Bool)arg1;
+ (struct CGSize)starImageSize;
+ (_Bool)shouldHideRatingsLabelForUnifiedCard:(_Bool)arg1;
+ (struct CGSize)sizeWithRatingsText:(id)arg1 forUnifiedCards:(_Bool)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *ratingsLabel; // @synthesize ratingsLabel=_ratingsLabel;
@property(retain, nonatomic) NSArray *starSubviews; // @synthesize starSubviews=_starSubviews;
@property(nonatomic) _Bool shouldShowRatingsText; // @synthesize shouldShowRatingsText=_shouldShowRatingsText;
@property(retain, nonatomic) id <T1AppCardDetailsViewModel> viewModel; // @synthesize viewModel=_viewModel;
- (void)_updateContent;
- (void)viewModelDidUpdate;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

