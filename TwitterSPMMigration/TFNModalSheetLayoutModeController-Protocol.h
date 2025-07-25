//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/NSObject-Protocol.h>

@class UIView, UIViewController;
@protocol TFNModalSheetLayoutModeController, UIViewControllerAnimatedTransitioning;

@protocol TFNModalSheetLayoutModeController <NSObject>
@property(readonly, nonatomic) double totalAnimationDuration;
@property(readonly, nonatomic) double initialCurrentHeight;
@property(readonly, nonatomic) struct UIEdgeInsets calculateModalContentSafeAreaInsets;
@property(readonly, nonatomic) struct UIEdgeInsets modalContentViewVisibleEdgeInsets;
@property(readonly, nonatomic) long long layoutModeForLeavingFullScreen;
@property(readonly, nonatomic) long long layoutModeForTransitioningToFullScreen;
@property(readonly, nonatomic) long long layoutMode;
- (void)updateModalContentFrames;
- (void)updateModalPresentationStyle;
- (struct CGSize)modalContentSizeWithLayoutMode:(long long)arg1 availableSize:(struct CGSize)arg2;
- (UIViewController *)statusBarControllingViewController:(_Bool)arg1;
- (_Bool)getNavigationBarFrameHeightAdjustment:(inout double *)arg1 yOffset:(inout double *)arg2;
- (_Bool)requiresRedisplayToChangeToLayoutMode:(long long)arg1;
- (void)addModalContentViewControllerView:(UIView *)arg1;
- (void)willTransitionOutToNewLayoutMode:(id <TFNModalSheetLayoutModeController>)arg1;
- (void)willTransitionInFromOldLayoutMode:(id <TFNModalSheetLayoutModeController>)arg1;

@optional
- (id <UIViewControllerAnimatedTransitioning>)animationControllerForDismissedController;
- (id <UIViewControllerAnimatedTransitioning>)animationControllerForPresentedController;
- (void)willRedisplay;
- (void)windowStatusBarHeightDidChangeWithOldValue:(double)arg1 newValue:(double)arg2;
- (void)didEndEditingAnimated:(_Bool)arg1 completion:(void (^)(_Bool))arg2;
- (void)didStartEditingAnimated:(_Bool)arg1 completion:(void (^)(_Bool))arg2;
- (void)updateKeyboardHeight:(double)arg1;
- (void)viewWillAnimateAlongsideTransitionWithLayoutModeChange:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1;
- (void)viewControllerDidDismissAnimated:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews:(_Bool)arg1;
- (void)viewDidLoad;
- (void)didUpdateDismissableWithGesture;
@end

