//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIPresentationController.h>

@class NSString, UIPanGestureRecognizer, UIScrollView, UIView;

@interface T1SwipeToDismissPresentationController : UIPresentationController
{
    _Bool _presentingStatusBarShouldHide;
    long long _swipeAxis;
    UIView *_dimmingView;
    UIScrollView *_panScrollView;
    UIPanGestureRecognizer *_panGestureRecognizer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool presentingStatusBarShouldHide; // @synthesize presentingStatusBarShouldHide=_presentingStatusBarShouldHide;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) UIScrollView *panScrollView; // @synthesize panScrollView=_panScrollView;
@property(retain, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(nonatomic) long long swipeAxis; // @synthesize swipeAxis=_swipeAxis;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_animateOutWithDirection:(long long)arg1 velocity:(double)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_handlePan:(id)arg1;
- (double)_currentAlphaWithTraitCollection:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)containerViewDidLayoutSubviews;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionWillBegin;
- (void)_configurePanRecognizerForSwipeAxis:(long long)arg1;
- (long long)swipeAxisForPresentedViewController;
- (void)dealloc;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

