//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterAppSPMMigration/TUCLayoutableView.h>

@class T1UserView, TFNTappableHighlightView, TFNTwitterAccount, TIPImagePipeline, TUCUnifiedCard, UIView;
@protocol TUCComponentModel, TUCComponentViewEventDelegate;

@interface T1UnifiedCardProfileComponentView : TUCLayoutableView
{
    TUCUnifiedCard *unifiedCard;
    id <TUCComponentModel> _component;
    id <TUCComponentViewEventDelegate> eventDelegate;
    TIPImagePipeline *_imagePipeline;
    TFNTwitterAccount *_account;
    TFNTappableHighlightView *_userHighlightView;
    T1UserView *_userView;
}

+ (id)_t1_cardLayoutMetricsForLayoutMetrics:(id)arg1;
+ (id)sharedLayoutDelegate;
- (void).cxx_destruct;
@property(retain, nonatomic) T1UserView *userView; // @synthesize userView=_userView;
@property(retain, nonatomic) TFNTappableHighlightView *userHighlightView; // @synthesize userHighlightView=_userHighlightView;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) TIPImagePipeline *imagePipeline; // @synthesize imagePipeline=_imagePipeline;
@property(nonatomic) __weak id <TUCComponentViewEventDelegate> eventDelegate; // @synthesize eventDelegate;
@property(retain, nonatomic) id <TUCComponentModel> component; // @synthesize component=_component;
@property(retain, nonatomic) TUCUnifiedCard *unifiedCard; // @synthesize unifiedCard;
- (id)calculatedLayoutMetrics;
- (void)_t1_didTapUser;
- (id)previewConfigurationForLocation:(struct CGPoint)arg1;
- (id)updatedScribeContextForComponentViewEvent:(id)arg1 sourceScribeContext:(id)arg2;
- (id)supplementalParamsForEvent:(id)arg1;
- (void)prepareForReuse;
- (void)setupActions;
- (id)accessibilityCustomUCActions;
- (id)accessibilityLabel;
@property(readonly, nonatomic) UIView *autoplayableContainerView;
- (id)initWithScribeContext:(id)arg1;

@end

