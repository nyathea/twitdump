//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNTappableHighlightView.h>

@class NSString, TFNAttributedTextView, TFSURTRichText, TIPImagePipeline, UIColor, UIImageView;

@interface TTAAffiliateBadgeView : TFNTappableHighlightView
{
    TIPImagePipeline *_imagePipeline;
    NSString *_imageURLStr;
    TFSURTRichText *_descriptionRichText;
    NSString *_iconAssetStr;
    unsigned long long _numberOfLines;
    UIColor *_textColor;
    CDUnknownBlockType _affiliateBadgeViewTappedBlock;
    CDUnknownBlockType _affiliateBadgeViewLongPressedBlock;
    UIImageView *_avatarView;
    TFNAttributedTextView *_descriptionView;
}

+ (id)_t1_descriptionTextModelForDescription:(id)arg1 numberOfLines:(unsigned long long)arg2 iconAssetStr:(id)arg3 textColor:(id)arg4;
+ (id)assetForLabelType:(long long)arg1;
+ (id)iconAssetOfIconType:(long long)arg1;
+ (struct CGSize)intrinsicContentSizeForWidth:(double)arg1 maxNumberOfLines:(unsigned long long)arg2 imageUrlStr:(id)arg3 descriptionStr:(id)arg4 iconAssetStr:(id)arg5;
+ (double)preferredHeightForLayoutMetrics:(id)arg1;
+ (double)imageToDescriptionPadding;
+ (struct CGSize)imageSize;
- (void).cxx_destruct;
@property(retain, nonatomic) TFNAttributedTextView *descriptionView; // @synthesize descriptionView=_descriptionView;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(copy, nonatomic) CDUnknownBlockType affiliateBadgeViewLongPressedBlock; // @synthesize affiliateBadgeViewLongPressedBlock=_affiliateBadgeViewLongPressedBlock;
@property(copy, nonatomic) CDUnknownBlockType affiliateBadgeViewTappedBlock; // @synthesize affiliateBadgeViewTappedBlock=_affiliateBadgeViewTappedBlock;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) unsigned long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(copy, nonatomic) NSString *iconAssetStr; // @synthesize iconAssetStr=_iconAssetStr;
@property(copy, nonatomic) TFSURTRichText *descriptionRichText; // @synthesize descriptionRichText=_descriptionRichText;
@property(copy, nonatomic) NSString *imageURLStr; // @synthesize imageURLStr=_imageURLStr;
@property(retain, nonatomic) TIPImagePipeline *imagePipeline; // @synthesize imagePipeline=_imagePipeline;
- (id)tip_imagePipelineForFetchHelper:(id)arg1;
- (id)tip_imageFetchRequestForFetchHelper:(id)arg1;
- (void)attributedTextViewDidTapInactiveArea:(id)arg1;
- (void)attributedTextView:(id)arg1 didTapTruncationTokenAreaWithRect:(struct CGRect)arg2;
- (void)attributedTextView:(id)arg1 didTapRange:(id)arg2 rect:(struct CGRect)arg3;
- (void)_t1_didLongPress;
- (void)_t1_didPress;
- (id)accessibilityHint;
- (id)accessibleValue;
- (id)calculatedLayoutMetrics;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)sizeToFit;
- (struct CGSize)intrinsicContentSize;
- (_Bool)isUserInteractionEnabled;
- (void)_t1_updateDescription;
@property(copy, nonatomic) NSString *descriptionStr;
- (void)setImage:(id)arg1 labelType:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

