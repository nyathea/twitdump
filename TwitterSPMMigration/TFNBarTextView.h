//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TFNBarTextView
{
    _Bool _sizeThatFitsIsSingleLine;
}

@property(nonatomic) _Bool sizeThatFitsIsSingleLine; // @synthesize sizeThatFitsIsSingleLine=_sizeThatFitsIsSingleLine;
- (_Bool)_isOverscrolled;
- (void)_updateContentOffset;
- (void)setFont:(id)arg1;
- (void)scrollRectToVisible:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)setContentSize:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2 style:(long long)arg3;
- (id)initWithStyle:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;

@end

