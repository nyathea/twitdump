//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSIndexPath, NSString, TFSTwitterScribeContext, TIPImagePipeline, TUCMediaComponentView, TUCSwipeableMediaCarouselViewController, TUCSwipeableMediaComponentModel, TUCUnifiedCard, UIView;
@protocol TFSTwitterLegacyScribeLogMethods, TUCComponentModel, TUCComponentViewEventDelegate, TUCComponentViewRegistry, TUCFeatures;

@interface TUCSwipeableMediaComponentView
{
    TUCUnifiedCard *_unifiedCard;
    id <TUCComponentModel> _component;
    TIPImagePipeline *_imagePipeline;
    id <TUCComponentViewEventDelegate> _eventDelegate;
    TUCSwipeableMediaCarouselViewController *_carouselViewController;
    double _leadingInset;
    NSIndexPath *_selectedIndexPath;
    TFSTwitterScribeContext *_scribeContext;
    id <TUCComponentViewRegistry> _componentViewRegistry;
    id <TUCFeatures> _features;
    id <TFSTwitterLegacyScribeLogMethods> _scribe;
}

+ (id)sharedLayoutDelegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <TFSTwitterLegacyScribeLogMethods> scribe; // @synthesize scribe=_scribe;
@property(readonly, nonatomic) id <TUCFeatures> features; // @synthesize features=_features;
@property(readonly, nonatomic) id <TUCComponentViewRegistry> componentViewRegistry; // @synthesize componentViewRegistry=_componentViewRegistry;
@property(copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(nonatomic) double leadingInset; // @synthesize leadingInset=_leadingInset;
@property(retain, nonatomic) TUCSwipeableMediaCarouselViewController *carouselViewController; // @synthesize carouselViewController=_carouselViewController;
@property(nonatomic) __weak id <TUCComponentViewEventDelegate> eventDelegate; // @synthesize eventDelegate=_eventDelegate;
@property(retain, nonatomic) TIPImagePipeline *imagePipeline; // @synthesize imagePipeline=_imagePipeline;
@property(retain, nonatomic) id <TUCComponentModel> component; // @synthesize component=_component;
@property(retain, nonatomic) TUCUnifiedCard *unifiedCard; // @synthesize unifiedCard=_unifiedCard;
- (void)layoutMetricsDidChange:(id)arg1 to:(id)arg2;
- (void)carouselViewController:(id)arg1 didDisplayItemAtIndex:(unsigned long long)arg2;
- (id)carouselViewController:(id)arg1 didHapticTouchItemAtIndex:(unsigned long long)arg2;
- (void)carouselViewController:(id)arg1 didManualSwipeFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)carouselViewController:(id)arg1 didAutoSwipeFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)carouselViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2 eventType:(unsigned long long)arg3;
- (void)_t1_removeCarouselViewController;
- (void)addCarouselViewControllerToParent:(id)arg1 scribeContext:(id)arg2;
@property(readonly, nonatomic) TUCSwipeableMediaComponentModel *model;
@property(readonly, nonatomic) UIView *autoplayableContainerView;
@property(readonly, nonatomic) TUCMediaComponentView *currentMediaComponentView;
- (id)updatedScribeContextForComponentViewEvent:(id)arg1 sourceScribeContext:(id)arg2;
- (id)supplementalParamsForEvent:(id)arg1;
- (void)prepareForReuse;
- (void)setupActions;
- (id)accessibilityCustomUCActions;
@property(readonly, nonatomic) long long autoplayableType;
@property(readonly, nonatomic) UIView *autoplayableView;
- (void)willResignAsActiveAutoplayableWithManager:(id)arg1;
- (void)didBecomeActiveAutoplayableWithManager:(id)arg1;
- (_Bool)accessibilityScroll:(long long)arg1;
- (void)accessibilityElementDidBecomeFocused;
- (id)accessibilityLabel;
- (void)didMoveToSuperview;
- (void)dealloc;
- (id)initWithComponentViewRegistry:(id)arg1 scribe:(id)arg2 features:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

