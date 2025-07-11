//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, NSString, TFNGradientView, UIColor, UITapGestureRecognizer;
@protocol TFNTooltipContentView, TFNTooltipViewDelegate;

@interface TFNTooltipView : UIView
{
    _Bool _hasDropshadow;
    _Bool _ignoreDefaultPadding;
    _Bool _isAnimating;
    _Bool _shownInView;
    _Bool _isAnimatingForPresentation;
    _Bool _isInLayoutSubviews;
    id <TFNTooltipViewDelegate> _delegate;
    UIView<TFNTooltipContentView> *_contentView;
    TFNGradientView *_gradientBackgroundView;
    UIColor *_tooltipBackgroundColor;
    unsigned long long _arrowDirection;
    double _maxWidth;
    double _arrowOffset;
    double _cornerRadius;
    UIColor *_borderColor;
    UITapGestureRecognizer *_tapGestureRecognizer;
    long long _concurrentAnimationCount;
    CAShapeLayer *_borderLayer;
    struct CGPoint _focusPoint;
    struct CGSize _arrowSize;
}

+ (id)_arrowCandidatesForRect:(struct CGRect)arg1 inBounds:(struct CGRect)arg2;
+ (CDUnknownBlockType)_popAnimationForPresentation:(_Bool)arg1 delay:(double)arg2;
+ (CDUnknownBlockType)_fadeAnimationForPresentation:(_Bool)arg1 delay:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *borderLayer; // @synthesize borderLayer=_borderLayer;
@property(nonatomic) _Bool isInLayoutSubviews; // @synthesize isInLayoutSubviews=_isInLayoutSubviews;
@property(nonatomic) _Bool isAnimatingForPresentation; // @synthesize isAnimatingForPresentation=_isAnimatingForPresentation;
@property(nonatomic) long long concurrentAnimationCount; // @synthesize concurrentAnimationCount=_concurrentAnimationCount;
@property(nonatomic, getter=isShownInView) _Bool shownInView; // @synthesize shownInView=_shownInView;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(readonly, nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) _Bool ignoreDefaultPadding; // @synthesize ignoreDefaultPadding=_ignoreDefaultPadding;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double arrowOffset; // @synthesize arrowOffset=_arrowOffset;
@property(nonatomic) struct CGSize arrowSize; // @synthesize arrowSize=_arrowSize;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) unsigned long long arrowDirection; // @synthesize arrowDirection=_arrowDirection;
@property(nonatomic) struct CGPoint focusPoint; // @synthesize focusPoint=_focusPoint;
@property(nonatomic) _Bool hasDropshadow; // @synthesize hasDropshadow=_hasDropshadow;
@property(retain, nonatomic) UIColor *tooltipBackgroundColor; // @synthesize tooltipBackgroundColor=_tooltipBackgroundColor;
@property(retain, nonatomic) TFNGradientView *gradientBackgroundView; // @synthesize gradientBackgroundView=_gradientBackgroundView;
@property(retain, nonatomic) UIView<TFNTooltipContentView> *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <TFNTooltipViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_canAdjustArrowOffsetToFitTooltipWithContentSize:(struct CGSize)arg1 arrowDirection:(unsigned long long)arg2 view:(id)arg3 bounds:(struct CGRect)arg4 fromRect:(struct CGRect)arg5 focusPoint:(struct CGPoint *)arg6 arrowOffset:(double *)arg7;
- (void)_validateWidth;
- (struct CGRect)_visibleBoundsForView:(id)arg1;
- (double)_visibleFractionOfTooltipWithFrame:(struct CGRect)arg1 inViewWithBounds:(struct CGRect)arg2;
- (void)_setupGradientBackgroundView;
- (void)_setupContentView;
- (struct CGPoint)_popAnimationAnchorPoint;
- (double)_arrowOffsetInPixelsForContentSize:(struct CGSize)arg1 arrowDirection:(unsigned long long)arg2 arrowOffset:(double)arg3;
- (struct CGRect)_tooltipFrameForContentSize:(struct CGSize)arg1 arrowDirection:(unsigned long long)arg2 arrowOffset:(double)arg3 focusPoint:(struct CGPoint)arg4;
- (struct CGSize)_tooltipSizeForContentSize:(struct CGSize)arg1 arrowDirection:(unsigned long long)arg2;
- (struct CGSize)_contentSizeForTooltipSize:(struct CGSize)arg1;
- (struct UIEdgeInsets)_contentEdgeInsetsForArrowDirection:(unsigned long long)arg1;
- (struct CGPoint)_arrowPointForContentSize:(struct CGSize)arg1 arrowDirection:(unsigned long long)arg2 arrowOffset:(double)arg3;
- (struct CGPoint)_centerOfArrowBaseForContentSize:(struct CGSize)arg1 arrowDirection:(unsigned long long)arg2 arrowOffset:(double)arg3;
- (id)_createTooltipPath;
- (void)drawRect:(struct CGRect)arg1;
- (void)_tfn_cleanupAnimationForPresenting:(_Bool)arg1;
- (void)_tfn_setupAnimationForPresenting:(_Bool)arg1 inView:(id)arg2 transform:(struct CGAffineTransform)arg3;
- (void)_dismissFromSuperview;
- (void)_tooltipDidShow;
- (void)_tooltipWillShow;
- (void)_tooltipDidDismiss;
- (void)_tooltipWillDismiss;
- (void)_positionTooltipRelativeToFocusPoint;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)layoutSubviews;
- (void)dismissTooltipWithAnimationType:(unsigned long long)arg1;
- (void)presentTooltipFromRect:(struct CGRect)arg1 inView:(id)arg2 permittedArrowDirection:(unsigned long long)arg3 delay:(double)arg4 animationType:(unsigned long long)arg5;
- (void)positionForRect:(struct CGRect)arg1 inView:(id)arg2 permittedArrowDirection:(unsigned long long)arg3;
- (void)positionAtPoint:(struct CGPoint)arg1;
- (void)showInView:(id)arg1 atPoint:(struct CGPoint)arg2 delay:(double)arg3 animationType:(unsigned long long)arg4;
- (void)_tooltipTapped:(id)arg1;
- (_Bool)tfn_isAppGestureEnabled:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 contentView:(id)arg2;
- (void)dealloc;
- (void)removeFromSuperview;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

