//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNViewController.h>

@class MISSING_TYPE, UIScrollView;

@interface T1TrendsLandingViewController : TFNViewController
{
    MISSING_TYPE *ignoreInteractionEventsDuringPresentation;
    MISSING_TYPE *scribeContext;
    MISSING_TYPE *traceRepository;
    MISSING_TYPE *features;
    MISSING_TYPE *account;
    MISSING_TYPE *disposeBag;
    MISSING_TYPE *urtChildViewController;
    MISSING_TYPE *personalizationOptionsBar;
    MISSING_TYPE *headerBackgroundView;
    MISSING_TYPE *personalizedButton;
    MISSING_TYPE *personalizedButtonPadding;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic, readonly) _Bool tfn_ignoreInteractionEventsDuringPresentation;
- (void)showSettings;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
@property(nonatomic, readonly) UIScrollView *tfn_contentScrollView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)urtViewControllerDidCompleteInitialRenderWithNotification:(id)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithFeatures:(id)arg1 account:(id)arg2 scribeContext:(id)arg3;
- (void)urtViewController:(id)arg1 didLoadTimelineInitially:(_Bool)arg2;

@end

