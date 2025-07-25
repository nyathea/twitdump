//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface T1ImmersiveAnimatorV2 : NSObject
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *features;
    MISSING_TYPE *dismissDeltaX;
    MISSING_TYPE *dismissDeltaY;
    MISSING_TYPE *dismissing;
    MISSING_TYPE *isAnimating;
}

- (void).cxx_destruct;
- (id)init;
- (void)viewWillTransitionTo:(struct CGSize)arg1 with:(id)arg2;
- (void)dismissWith:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)handleDismissGesture:(id)arg1;
- (void)layoutCurrentViews;
- (id)initWithDelegate:(id)arg1 features:(id)arg2;
@property(nonatomic) double dismissDeltaY; // @synthesize dismissDeltaY;
@property(nonatomic) double dismissDeltaX; // @synthesize dismissDeltaX;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;

@end

