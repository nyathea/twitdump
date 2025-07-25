//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UIFont, UILabel;

@interface T1FollowsYouView : UIView
{
    UILabel *_label;
    struct UIEdgeInsets _contentEdgeInsets;
}

+ (id)font;
+ (struct CGSize)sizeForText:(id)arg1 font:(id)arg2 contentEdgeInsets:(struct UIEdgeInsets)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
- (void)setDisplayMode:(unsigned long long)arg1;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (void)sizeToFit;
@property(nonatomic) double baseline;
@property(nonatomic) double cornerRadius;
@property(retain, nonatomic) UIColor *textColor;
@property(retain, nonatomic) UIFont *font;
@property(nonatomic) long long textAlignment;
@property(copy, nonatomic) NSString *text;
- (void)_setupWithLabel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

