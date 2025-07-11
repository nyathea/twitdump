//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CALayer, NSString, UIColor, UIFont, UIImage, UIImageView, UILabel;

@interface TUIPillView : UIView
{
    _Bool _iconViewVisible;
    _Bool _hiding;
    double _iconHorizontalSpace;
    UIColor *_textBackgroundColor;
    unsigned long long _iconLayout;
    UIImage *_iconImage;
    CALayer *_backgroundLayer;
    UIImageView *_iconView;
    UILabel *_textLabel;
    UILabel *_secondaryLabel;
    struct UIEdgeInsets _edgeInsets;
}

+ (id)altTextView;
+ (id)gifBadgeView;
- (void).cxx_destruct;
@property(readonly, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(readonly, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(readonly, nonatomic) CALayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(nonatomic, getter=isHiding) _Bool hiding; // @synthesize hiding=_hiding;
@property(readonly, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(readonly, nonatomic, getter=isIconViewVisible) _Bool iconViewVisible; // @synthesize iconViewVisible=_iconViewVisible;
@property(nonatomic) unsigned long long iconLayout; // @synthesize iconLayout=_iconLayout;
@property(retain, nonatomic) UIColor *textBackgroundColor; // @synthesize textBackgroundColor=_textBackgroundColor;
@property(nonatomic) double iconHorizontalSpace; // @synthesize iconHorizontalSpace=_iconHorizontalSpace;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
- (void)_t1_updateIconViewAnimated:(_Bool)arg1;
- (void)setIconWithImage:(id)arg1 animated:(_Bool)arg2;
- (void)setIconVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setTextBackgroundColor:(id)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isTextLabelHidden) _Bool textLabelHidden;
- (void)_t1_showAnimated:(_Bool)arg1;
- (void)_t1_hideAnimated:(_Bool)arg1;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) unsigned long long numberOfTextLines;
@property(retain, nonatomic) UIColor *textColor;
@property(copy, nonatomic) NSString *secondaryText;
@property(copy, nonatomic) NSString *text;
@property(retain, nonatomic) UIFont *font;
@property(nonatomic) double cornerRadius;
- (void)setIsAccessibilityElement:(_Bool)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_t1_pillView_initialize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

