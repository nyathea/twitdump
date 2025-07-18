//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, T1CardContainerView, T1UnifiedCardView, TFNButton, TFNTwitterCardContext, TIPImagePipeline, UIColor;
@protocol T1ComposeCardPreviewViewDelegate, TUCViewRegistryProtocol;

@interface T1ComposeCardPreviewView : UIView
{
    id <T1ComposeCardPreviewViewDelegate> _delegate;
    TFNTwitterCardContext *_cardContext;
    TFNButton *_removeButton;
    UIColor *_cardBackgroundColor;
    T1CardContainerView *_cardContainerView;
    T1UnifiedCardView *_unifiedCardView;
}

+ (double)reservedRightMarginForRemoveButton;
+ (struct UIEdgeInsets)removeButtonMargins;
- (void).cxx_destruct;
@property(retain, nonatomic) T1UnifiedCardView *unifiedCardView; // @synthesize unifiedCardView=_unifiedCardView;
@property(retain, nonatomic) T1CardContainerView *cardContainerView; // @synthesize cardContainerView=_cardContainerView;
@property(retain, nonatomic) UIColor *cardBackgroundColor; // @synthesize cardBackgroundColor=_cardBackgroundColor;
@property(retain, nonatomic) TFNButton *removeButton; // @synthesize removeButton=_removeButton;
@property(retain, nonatomic) TFNTwitterCardContext *cardContext; // @synthesize cardContext=_cardContext;
@property(nonatomic) __weak id <T1ComposeCardPreviewViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_t1_applyCardBackgroundColor;
- (void)composerCardView:(id)arg1 updateAccessibilityLabel:(id)arg2;
- (id)cardView:(id)arg1 didFireViewEvent:(id)arg2;
- (id)layoutMetricsForCardView:(id)arg1;
- (id)calculatedLayoutMetrics;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) TIPImagePipeline *imagePipeline;
@property(retain, nonatomic) id <TUCViewRegistryProtocol> viewRegistry;
- (id)initWithFrame:(struct CGRect)arg1 viewRegistry:(id)arg2 imagePipeline:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

