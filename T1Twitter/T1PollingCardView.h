//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterAppSPMMigration/TUICardView.h>

@class NSArray, NSString, T1CardMediaView, T1PollingCardViewModel, T1PollingCardViewTheme, TFNInlineCalloutView, TFNTappableHighlightView, UILabel, UIView;

@interface T1PollingCardView : TUICardView
{
    T1CardMediaView *_mediaView;
    T1PollingCardViewModel *_viewModel;
    UIView *_highlightProxyView;
    TFNTappableHighlightView *_pollChoiceContainer;
    TFNTappableHighlightView *_pollResultContainer;
    TFNTappableHighlightView *_pollStatusContainer;
    NSArray *_choiceButtons;
    NSArray *_resultViews;
    TFNTappableHighlightView *_mediaHighlightView;
    TFNInlineCalloutView *_eligibilityCalloutView;
    UILabel *_voteCountAndTimeLabel;
    T1PollingCardViewTheme *_theme;
}

+ (id)_animationGroupWithOpacityFrom:(double)arg1 opacityTo:(double)arg2 affineTransformFrom:(struct CGAffineTransform)arg3 affineTransformTo:(struct CGAffineTransform)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) T1PollingCardViewTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) UILabel *voteCountAndTimeLabel; // @synthesize voteCountAndTimeLabel=_voteCountAndTimeLabel;
@property(retain, nonatomic) TFNInlineCalloutView *eligibilityCalloutView; // @synthesize eligibilityCalloutView=_eligibilityCalloutView;
@property(retain, nonatomic) TFNTappableHighlightView *mediaHighlightView; // @synthesize mediaHighlightView=_mediaHighlightView;
@property(retain, nonatomic) NSArray *resultViews; // @synthesize resultViews=_resultViews;
@property(retain, nonatomic) NSArray *choiceButtons; // @synthesize choiceButtons=_choiceButtons;
@property(retain, nonatomic) TFNTappableHighlightView *pollStatusContainer; // @synthesize pollStatusContainer=_pollStatusContainer;
@property(retain, nonatomic) TFNTappableHighlightView *pollResultContainer; // @synthesize pollResultContainer=_pollResultContainer;
@property(retain, nonatomic) TFNTappableHighlightView *pollChoiceContainer; // @synthesize pollChoiceContainer=_pollChoiceContainer;
@property(retain, nonatomic) UIView *highlightProxyView; // @synthesize highlightProxyView=_highlightProxyView;
@property(retain, nonatomic) T1PollingCardViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) T1CardMediaView *mediaView; // @synthesize mediaView=_mediaView;
- (void)didTapVideo:(id)arg1 event:(id)arg2;
- (void)cardMediaView:(id)arg1 didReceivePlayButtonActionWithEvent:(id)arg2;
- (id)mediaHighlightViewForMediaView:(id)arg1;
- (id)playerViewContainer;
- (id)cardMediaView;
- (id)accessibilityElements;
- (void)fetchImages;
- (void)setImagePipeline:(id)arg1;
- (void)setResultVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)cardContextDidUpdate;
- (void)_t1_updateLayerWithTheme:(id)arg1;
- (void)_rebuildSubviewsWithTheme:(id)arg1;
- (void)_removeThemableSubviews;
- (void)_updateThemeIfNeeded;
- (id)_accessibilityPollTextForStatusText:(id)arg1;
- (id)accessibilityStringForStatusText:(id)arg1;
- (id)_localizedResultsString;
- (void)updateSubviews;
- (void)_highlightPressed:(id)arg1;
- (void)_choiceButtonPressed:(id)arg1;
- (void)_viewModelDidUpdate:(id)arg1;
- (void)_registerCAPIEventHandler;
- (id)_choiceButtonWithTheme:(id)arg1;
- (id)_highlightContainerWithProxy:(id)arg1 addBorder:(_Bool)arg2 pressedBackgroundColor:(id)arg3 hasButtonAXTraits:(_Bool)arg4;
- (void)_cleanup;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

