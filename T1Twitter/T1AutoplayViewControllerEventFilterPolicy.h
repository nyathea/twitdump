//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TFNViewController;

@interface T1AutoplayViewControllerEventFilterPolicy : NSObject
{
    _Bool _isPerformingFullscreenMediaTransition;
    TFNViewController *_observedViewController;
    CDUnknownBlockType _autoplayConditionsDidChangeBlock;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPerformingFullscreenMediaTransition; // @synthesize isPerformingFullscreenMediaTransition=_isPerformingFullscreenMediaTransition;
@property(copy, nonatomic) CDUnknownBlockType autoplayConditionsDidChangeBlock; // @synthesize autoplayConditionsDidChangeBlock=_autoplayConditionsDidChangeBlock;
@property(nonatomic) __weak TFNViewController *observedViewController; // @synthesize observedViewController=_observedViewController;
- (void)appStoreProductViewControllerDidDismissNotification:(id)arg1;
- (void)appStoreProductViewControllerDidPresentNotification:(id)arg1;
- (void)presentedActivityViewControllerDidDismissNotification:(id)arg1;
- (void)presentedDidDismissViewControllerNotification:(id)arg1;
- (void)viewControllerViewDidFullyAppear:(id)arg1;
- (void)viewControllerViewWillFullyDisappear:(id)arg1;
- (_Bool)autoplayableIsEligibleForAutoplayWithAutoplayable:(id)arg1 environment:(id)arg2;
- (void)didJoinAutoplayPipelineWithAutoplayConditionsDidChangeBlock:(CDUnknownBlockType)arg1;
- (void)transitionToFullScreenMediaPresentationDidEnd:(id)arg1;
- (void)transitionFromFullscreenMediaPresentationDidBegin:(id)arg1;
- (void)transitionFromFullScreenMediaPresentationDidEnd:(id)arg1;
- (void)transitionToFullscreenMediaPresentationDidBegin:(id)arg1;
- (void)dealloc;
- (id)initWithObservedViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

