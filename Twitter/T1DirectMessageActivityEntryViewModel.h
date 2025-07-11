//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, TFNAttributedTextModel, TFSFlavoredRange, UIFont, UIImage;

@interface T1DirectMessageActivityEntryViewModel
{
    TFNAttributedTextModel *_textModel;
    NSString *_accessibilityLabel;
    struct CGSize _currentSize;
}

+ (id)showMoreLinkAttributes;
+ (id)showMoreLinkColor;
+ (id)textColor;
+ (id)_generateAttributedStringForText:(id)arg1 linkRange:(id)arg2 accessoryImage:(id)arg3 font:(id)arg4;
+ (id)textModelWithText:(id)arg1 linkRange:(id)arg2 accessoryImage:(id)arg3 font:(id)arg4;
+ (Class)cellClass;
+ (id)cellReuseIdentifier;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(nonatomic) struct CGSize currentSize; // @synthesize currentSize=_currentSize;
@property(retain, nonatomic) TFNAttributedTextModel *textModel; // @synthesize textModel=_textModel;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
@property(readonly, nonatomic) _Bool rendersShowMoreTextRangeAsLink;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) UIFont *font;
@property(readonly, copy, nonatomic) NSString *text;
@property(readonly, nonatomic) UIImage *accessoryImage;
@property(readonly, copy, nonatomic) TFSFlavoredRange *showMoreTextRange;
@property(readonly, nonatomic) double horizontalPadding;

@end

