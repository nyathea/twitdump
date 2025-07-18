//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

@class NSString, TFNBlurHandler, TFNFloatingToolbarController, TFNNavigationBar, TFNNavigationControllerTransitionAnimator, TFNNavigationTransitionContext, UITapGestureRecognizer, UIViewController;
@protocol TFNNavigationControllerTransitionProvider, UIViewControllerAnimatedTransitioning;

@interface TFNNavigationController : UINavigationController
{
    TFNNavigationControllerTransitionAnimator *_defaultTransitionAnimator;
    id <UIViewControllerAnimatedTransitioning> _currentTransitionAnimator;
    id <TFNNavigationControllerTransitionProvider> _currentTransitionAnimatorProvider;
    long long _currentTransitionOperation;
    UITapGestureRecognizer *_titleTapGestureRecognizer;
    TFNFloatingToolbarController *_floatingToolbarController;
    long long _previousToolbarVisibility;
    TFNBlurHandler *_blurHandlerCurrent;
    long long _lastUsedLayoutMode;
    _Bool _isReloadingCurrentBlur;
    struct {
        unsigned int popping:1;
        unsigned int pushing:1;
        unsigned int settingViewControllers:1;
        unsigned int transitioning:1;
        unsigned int updatingNavigationBarFrame:1;
        unsigned int savedNavigationBarTranslucency:1;
    } _state;
    _Bool _visible;
    _Bool _forceTopAttachedNavigationBarPosition;
    _Bool _collapsingNavigationBarEnabled;
    _Bool _showDismissButtonWhenRightBarButtonIsEmpty;
    _Bool _supportsInteractivePops;
    _Bool _translucentNavigationBarEnabled;
    _Bool _logoTitleViewShown;
    _Bool _contentScrollViewWasScrolledToTop;
    CDUnknownBlockType _popToRootCompletionBlock;
    UIViewController *_outgoingViewController;
    UIViewController *_forcedShowCallbacksOnViewController;
    double _navigationBarExpansionRatio;
    TFNNavigationTransitionContext *_navigationTransitionContext;
    struct CGPoint _contentScrollViewOffsetForFullyExpandedNavigationBar;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TFNNavigationTransitionContext *navigationTransitionContext; // @synthesize navigationTransitionContext=_navigationTransitionContext;
@property(nonatomic) _Bool contentScrollViewWasScrolledToTop; // @synthesize contentScrollViewWasScrolledToTop=_contentScrollViewWasScrolledToTop;
@property(nonatomic) double navigationBarExpansionRatio; // @synthesize navigationBarExpansionRatio=_navigationBarExpansionRatio;
@property(nonatomic) struct CGPoint contentScrollViewOffsetForFullyExpandedNavigationBar; // @synthesize contentScrollViewOffsetForFullyExpandedNavigationBar=_contentScrollViewOffsetForFullyExpandedNavigationBar;
@property(nonatomic) __weak UIViewController *forcedShowCallbacksOnViewController; // @synthesize forcedShowCallbacksOnViewController=_forcedShowCallbacksOnViewController;
@property(retain, nonatomic) UIViewController *outgoingViewController; // @synthesize outgoingViewController=_outgoingViewController;
@property(nonatomic) _Bool logoTitleViewShown; // @synthesize logoTitleViewShown=_logoTitleViewShown;
@property(nonatomic, getter=isTranslucentNavigationBarEnabled) _Bool translucentNavigationBarEnabled; // @synthesize translucentNavigationBarEnabled=_translucentNavigationBarEnabled;
@property(copy, nonatomic) CDUnknownBlockType popToRootCompletionBlock; // @synthesize popToRootCompletionBlock=_popToRootCompletionBlock;
@property(nonatomic) _Bool supportsInteractivePops; // @synthesize supportsInteractivePops=_supportsInteractivePops;
@property(nonatomic) _Bool showDismissButtonWhenRightBarButtonIsEmpty; // @synthesize showDismissButtonWhenRightBarButtonIsEmpty=_showDismissButtonWhenRightBarButtonIsEmpty;
@property(nonatomic, getter=isCollapsingNavigationBarEnabled) _Bool collapsingNavigationBarEnabled; // @synthesize collapsingNavigationBarEnabled=_collapsingNavigationBarEnabled;
@property(nonatomic) _Bool forceTopAttachedNavigationBarPosition; // @synthesize forceTopAttachedNavigationBarPosition=_forceTopAttachedNavigationBarPosition;
@property(readonly, nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
- (id)_tfn_closeBarButtonItem;
- (_Bool)_tfn_canHandleCloseKeyCommand;
- (void)handleCloseKeyCommand;
- (_Bool)_tfn_canHandleEscapeKeyCommand;
- (void)handleEscapeKeyCommand;
- (_Bool)_tfn_canHandleBackKeyCommand;
- (void)handleBackArrowKeyCommand;
- (void)handleBackKeyCommand;
- (id)keyCommands;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
@property(readonly, nonatomic) _Bool isTransitioning;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
@property(readonly, nonatomic) double navigationBarExpandedHeight;
@property(readonly, nonatomic) double navigationBarCollapsedHeight;
- (double)_tfn_systemNavigationBarYOffsetAdjustment;
- (double)_tfn_navigationBarInitialOriginY;
- (void)_tfn_updateNavigationBarOverlayAlpha;
- (void)_tfn_setCurrentNavigationBarSimulatedHeight:(double)arg1;
- (double)_tfn_currentNavigationBarSimulatedHeight;
@property(readonly, nonatomic, getter=isNavigationBarExpanded) _Bool navigationBarExpanded;
@property(nonatomic, getter=isNavigationBarCollapsed) _Bool navigationBarCollapsed;
- (void)_tfn_resetCollapseNavigationBarOnScrollProcess;
- (_Bool)_tfn_navigationBarIsBeingCollapsed;
- (void)setNavigationBarCollapsed:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_tfn_collapseNavigationBarIfSupported;
- (void)_tfn_expandNavigationBarIfNeededWithCoordinator:(id)arg1;
- (void)_tfn_updateContentScrollViewWasScrolledToTop;
- (void)_tfn_ensureNavigationBarIsEitherCollapsedOrExpandedAfterSwipeWithVelocity:(struct CGPoint)arg1;
- (_Bool)_tfn_expandNavigationBarWhenScrolledToBottomIfNeeded;
- (void)_tfn_updateNavigationBarSimulatedHeightIfNeeded;
- (void)_tfn_startExpandingNavigationBarIfNeeded;
- (void)_tfn_startCollapsingNavigationBarIfNeeded;
- (_Bool)_tfn_isExpandingNavigationBarSupported;
- (_Bool)_tfn_isCollapsingNavigationBarSupported;
- (void)_tfn_blurRemoveCurrent;
- (id)_tfn_addBlurViewAttachedTo:(id)arg1 isTransition:(_Bool)arg2;
- (_Bool)_tfn_supportsBlurForViewController:(id)arg1;
- (void)_tfn_appWillEnterForeground;
- (id)_tfn_overrideAccessibilityElementsForViewController:(id)arg1;
- (void)_tfn_accessibilityReduceTransparencyDidChange;
- (void)tfn_setNeedsNavigationBarAccessoryViewUpdate;
- (void)_tfn_navigationBarSetNeedsLayoutIfNeeded;
- (void)_tfn_updateLogoTitleViewVisibilityAnimated:(_Bool)arg1 coordinator:(id)arg2;
- (void)_tfn_updateToolbarLayout;
- (void)_tfn_updateToolbarVisibilityForPush:(_Bool)arg1;
- (void)_tfn_updateNavigationBarShadowHiddenAnimated:(_Bool)arg1;
- (void)_tfn_setNavigationBarHidden:(_Bool)arg1 animated:(_Bool)arg2 withCoordinator:(id)arg3;
- (void)_tfn_updateNavigationBarHidden;
@property(readonly, nonatomic) TFNNavigationBar *tfnNavigationBar;
- (_Bool)tfn_contentScrollViewShouldScrollToTop:(id)arg1 programmatically:(_Bool)arg2;
- (void)tfn_contentScrollViewDidScrollProgrammatically:(id)arg1 animated:(_Bool)arg2;
- (void)tfn_contentScrollViewWillScrollToTop:(id)arg1;
- (void)tfn_contentScrollViewDidEndDecelerating:(id)arg1;
- (void)tfn_contentScrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)tfn_contentScrollViewDidScroll:(id)arg1 animate:(_Bool)arg2;
- (void)tfn_contentScrollViewWillBeginDragging:(id)arg1;
- (void)_tfn_updateSendContentScrollEventsFlagOfChildViewController:(id)arg1;
- (void)_tfn_updateSendContentScrollEventsFlagOfChildrenViewControllers;
- (void)setTfn_sendContentScrollEventsToParentViewController:(_Bool)arg1;
- (id)tfn_contentScrollView;
- (void)reloadNavigationBarBlur;
- (void)_tfn_dynamicColorsDidReload:(id)arg1;
- (void)_tfn_applicationWillEnterForeground:(id)arg1;
- (_Bool)accessibilityPerformEscape;
- (void)didMoveToParentViewController:(id)arg1;
- (void)_tfn_updateRelativeVisibleSafeAreaInset;
- (void)viewSafeAreaInsetsDidChange;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)tfn_supportedInterfaceOrientations;
- (id)_tfn_viewControllerForStatusBarProperties;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (long long)preferredStatusBarStyle;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (double)_tfn_computedNavigationBarHeight;
- (void)_tfn_getNavigationBarHeightAdjustment:(out double *)arg1 yOffset:(out double *)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)_tfn_interactiveTransitionAnimator;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)_tfn_transitionAnimationCompletedIsCanceled:(_Bool)arg1;
- (void)_tfn_prepareNavigationTransitionContext;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (_Bool)allowUserInteractionDuringTransition;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_tfn_viewControllerOrChildPassingTest:(CDUnknownBlockType)arg1 startingFrom:(id)arg2;
- (void)_tfn_detectAndLogSimultaneousPushPopOrModalPresentationForPush:(_Bool)arg1;
- (_Bool)_tfn_shouldBlockPops;
- (void)_tfn_didNotPopViewControllers;
- (_Bool)_tfn_willPopViewControllers;
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popToRootViewControllerAnimated:(_Bool)arg1;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)_tfn_didPushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_tfn_willPushViewController:(id)arg1 isTop:(_Bool)arg2 animated:(_Bool)arg3;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (void)titleTapAction:(id)arg1;
- (_Bool)scrollToTopAnimated:(_Bool)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithRootViewController:(id)arg1;
- (id)init;
- (void)childViewController:(id)arg1 didEndEditingAnimated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)childViewController:(id)arg1 didStartEditingAnimated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

