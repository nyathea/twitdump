//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class T1BirdwatchPivotViewModel, TFNAttributedTextView, UIImageView;

@interface T1BirdwatchPivotTitleView : UIView
{
    T1BirdwatchPivotViewModel *_viewModel;
    UIImageView *_titleIconImageView;
    TFNAttributedTextView *_titleTextView;
    UIImageView *_visibilityIconImageView;
    TFNAttributedTextView *_visibilityTextView;
    UIImageView *_accessoryImageView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIImageView *accessoryImageView; // @synthesize accessoryImageView=_accessoryImageView;
@property(readonly, nonatomic) TFNAttributedTextView *visibilityTextView; // @synthesize visibilityTextView=_visibilityTextView;
@property(readonly, nonatomic) UIImageView *visibilityIconImageView; // @synthesize visibilityIconImageView=_visibilityIconImageView;
@property(readonly, nonatomic) TFNAttributedTextView *titleTextView; // @synthesize titleTextView=_titleTextView;
@property(readonly, nonatomic) UIImageView *titleIconImageView; // @synthesize titleIconImageView=_titleIconImageView;
@property(retain, nonatomic) T1BirdwatchPivotViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)layoutSubviews;
- (id)init;

@end

