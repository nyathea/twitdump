//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSAttributedString, UIView;

@interface TFNAttributedTextModel : NSObject
{
    struct CGSize _requestedSize;
    struct CGSize _actualSize;
    struct __CTFrame *_coreTextFrame;
    struct __CTLine *_truncatedLastLine;
    struct CGPoint _truncatedLastLineOrigin;
    NSAttributedString *_renderedAttributedString;
    NSArray *_lineRanges;
    _Bool _truncated;
    struct _NSRange _attributedTrailingStringRange;
    double _contentBottomPadding;
    double _contentTopPadding;
    UIView *_colorProviderView;
    unsigned char _lineBreakMode;
    _Bool _shouldAlwaysSuffixTrailingString;
    NSAttributedString *_attributedString;
    unsigned long long _maxLines;
    NSAttributedString *_attributedTrailingString;
}

+ (double)maxHeight;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldAlwaysSuffixTrailingString; // @synthesize shouldAlwaysSuffixTrailingString=_shouldAlwaysSuffixTrailingString;
@property(retain, nonatomic) NSAttributedString *attributedTrailingString; // @synthesize attributedTrailingString=_attributedTrailingString;
@property(nonatomic) unsigned long long maxLines; // @synthesize maxLines=_maxLines;
@property(nonatomic) unsigned char lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
@property(copy, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
- (void)_tfn_updateTextPropertiesWithRenderedAttributedString:(id)arg1;
- (void)_tfn_buildTextPropertiesInSingleLineWithoutTrailingString;
- (void)_tfn_buildTextPropertiesInMultiLinesWithoutTrailingString;
- (void)_tfn_buildTextPropertiesWithTrailingString;
- (void)_tfn_buildTextProperties;
- (void)_tfn_resetTextProperties;
- (id)dynamicColorView;
- (_Bool)isContentEqualTo:(id)arg1;
- (_Bool)_tfn_sizeRequiresRelayout:(struct CGSize)arg1;
- (void)fitToSize:(struct CGSize)arg1;
- (void)fitToWidth:(double)arg1;
@property(readonly, nonatomic) double contentTopPadding;
@property(readonly, nonatomic) double contentBottomPadding;
@property(readonly, nonatomic) struct _NSRange attributedTrailingStringRange;
@property(readonly, nonatomic, getter=isTruncated) _Bool truncated;
@property(readonly, nonatomic) NSArray *lineRanges;
@property(readonly, nonatomic) NSAttributedString *renderedAttributedString;
- (struct CGPoint)truncatedLastLineOrigin;
- (struct __CTLine *)truncatedLastLine;
- (struct CGAffineTransform)coreTextTransform;
- (struct __CTFrame *)coreTextFrame;
@property(readonly, nonatomic) struct CGSize actualSize;
- (void)dealloc;
- (id)initWithAttributedString:(id)arg1 colorProviderView:(id)arg2;
- (id)initWithAttributedString:(id)arg1;
- (id)init;

@end

