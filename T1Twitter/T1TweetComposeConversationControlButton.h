//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class NSString, UIColor, UIImageView, UILabel;

@interface T1TweetComposeConversationControlButton : UIControl
{
    NSString *_iconName;
    NSString *_title;
    UIColor *_textColor;
    UILabel *_titleLabel;
    UIImageView *_iconView;
}

+ (struct CGSize)sizeForAudienceControlSuperFollow:(struct CGSize)arg1 numberOfLines:(unsigned long long)arg2;
+ (struct CGSize)sizeForConversationControlType:(unsigned long long)arg1 fitSize:(struct CGSize)arg2 numberOfLines:(unsigned long long)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
- (id)accessibilityLabel;
@property(nonatomic) unsigned long long numberOfLines;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_t1_updateTextAndTintColor;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

