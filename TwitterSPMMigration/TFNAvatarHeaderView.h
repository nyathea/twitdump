//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSNumber, NSString, TFNAvatarImageView, TFNCustomHitTestView, UIImageView;

@interface TFNAvatarHeaderView : UIView
{
    NSNumber *_fixedImageInset;
    TFNCustomHitTestView *_overlayView;
    UIImageView *_overlayImageView;
    TFNAvatarImageView *_imageView;
    long long _overlay;
}

+ (struct UIEdgeInsets)edgeInsetsForOverlay:(long long)arg1 withAvatarSize:(struct CGSize)arg2;
+ (struct CGSize)_tfn_sizeForOverlay:(long long)arg1 withAvatarSize:(struct CGSize)arg2;
+ (id)_tfn_overlayBackgroundColorForType:(long long)arg1;
+ (double)preferredImageInsetForSize:(struct CGSize)arg1;
+ (struct CGSize)preferredSizeForLayoutMetrics:(id)arg1 overlay:(long long)arg2;
+ (struct CGSize)preferredSizeForLayoutMetrics:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long overlay; // @synthesize overlay=_overlay;
@property(readonly, nonatomic) TFNAvatarImageView *imageView; // @synthesize imageView=_imageView;
- (void)layoutMetricsDidChange:(id)arg1 to:(id)arg2;
- (void)setIsAccessibilityElement:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
@property(readonly, nonatomic) struct UIEdgeInsets imageEdgeInsets;
- (void)resetImageInset;
@property(nonatomic) double imageInset;
- (void)_tfn_addOverlayViewWithImage:(id)arg1;
- (void)setOverlay:(long long)arg1 withImage:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithImageView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

