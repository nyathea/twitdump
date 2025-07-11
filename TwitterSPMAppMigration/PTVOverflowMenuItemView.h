//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class NSLayoutConstraint, NSString, PTVDividerView, UIImage, UIImageView, UILabel, UIStackView;

@interface PTVOverflowMenuItemView : UIControl
{
    PTVDividerView *_topDivider;
    NSLayoutConstraint *_topDividerFullWidthConstraint;
    NSLayoutConstraint *_topDividerInsetConstraint;
    UIStackView *_contentView;
    UIImageView *_leadingIconView;
    UIStackView *_titleContainerView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_trailingIconView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIImageView *trailingIconView; // @synthesize trailingIconView=_trailingIconView;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIStackView *titleContainerView; // @synthesize titleContainerView=_titleContainerView;
@property(readonly, nonatomic) UIImageView *leadingIconView; // @synthesize leadingIconView=_leadingIconView;
@property(readonly, nonatomic) UIStackView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) NSLayoutConstraint *topDividerInsetConstraint; // @synthesize topDividerInsetConstraint=_topDividerInsetConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *topDividerFullWidthConstraint; // @synthesize topDividerFullWidthConstraint=_topDividerFullWidthConstraint;
@property(readonly, nonatomic) PTVDividerView *topDivider; // @synthesize topDivider=_topDivider;
@property(nonatomic) _Bool fullWidthDividerLine;
@property(retain, nonatomic) UIImage *trailingIcon;
@property(retain, nonatomic) UIImage *leadingIcon;
@property(retain, nonatomic) NSString *subtitle;
@property(retain, nonatomic) NSString *title;
- (id)initWithFrame:(struct CGRect)arg1;

@end

