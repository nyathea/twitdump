//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNLayoutableView.h>

@class MISSING_TYPE, TIPImagePipeline;

@interface TUCPosterContainerView : TFNLayoutableView
{
    MISSING_TYPE *eventDelegate;
    MISSING_TYPE *container;
    MISSING_TYPE *componentViewRegistry;
    MISSING_TYPE *isDataSaverEnabled;
    MISSING_TYPE *imagePipeline;
    MISSING_TYPE *hideBorder;
    MISSING_TYPE *isDoubleTapEnabled;
    MISSING_TYPE *$__lazy_storage_$_fadingContainerView;
    MISSING_TYPE *$__lazy_storage_$_overlayView;
    MISSING_TYPE *$__lazy_storage_$_detailViews;
    MISSING_TYPE *$__lazy_storage_$_proxyHighlightView;
    MISSING_TYPE *$__lazy_storage_$_highlightView;
    MISSING_TYPE *$__lazy_storage_$_scrollEngagementHandler;
}

+ (id)sharedLayoutDelegate;
+ (id)containerViewWithUnifiedCard:(id)arg1 container:(id)arg2 reusableComponentViews:(id)arg3 componentViewRegistry:(id)arg4 eventDelegate:(id)arg5;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)previewConfigurationForLocation:(struct CGPoint)arg1;
- (id)allComponentViews;
- (id)accessibilityCustomUCActions;
- (id)accessibilityLabelForSuperview;
- (id)componentViewAtPoint:(struct CGPoint)arg1;
- (_Bool)openURL;
- (_Bool)hasURL;
- (id)autoplayableContainerView;
- (void)prepareForReuse;
- (void)injectViewControllerForCarousel:(id)arg1 scribeContext:(id)arg2;
- (_Bool)canSetLayoutState:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWith:(id)arg1 container:(id)arg2 componentViewRegistry:(id)arg3 eventDelegate:(id)arg4;
@property(nonatomic) _Bool hideBorder; // @synthesize hideBorder;
@property(nonatomic, retain) TIPImagePipeline *imagePipeline; // @synthesize imagePipeline;
@property(nonatomic) _Bool dataSaverEnabled; // @synthesize dataSaverEnabled=isDataSaverEnabled;
- (_Bool)isDataSaverEnabled;
- (id)containerView:(id)arg1 didFireViewEvent:(id)arg2;
- (id)componentView:(id)arg1 didFireViewEvent:(id)arg2;

@end

