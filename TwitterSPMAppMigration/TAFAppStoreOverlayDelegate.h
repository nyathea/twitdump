//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface TAFAppStoreOverlayDelegate : NSObject
{
    MISSING_TYPE *presentationType;
    MISSING_TYPE *displayedAppIdentifier;
    MISSING_TYPE *window;
    MISSING_TYPE *eventLogger;
    MISSING_TYPE *scribeContext;
    MISSING_TYPE *loadCompletion;
    MISSING_TYPE *dismissCompletion;
    MISSING_TYPE *dismissalAction;
    MISSING_TYPE *willStartPresentation;
    MISSING_TYPE *willStartDismissal;
    MISSING_TYPE *startedTime;
    MISSING_TYPE *wasDismissedByGesture;
    MISSING_TYPE *currentOverlayState;
    MISSING_TYPE *presentationContext;
    MISSING_TYPE *$__lazy_storage_$_gestureRecognizers;
}

- (void).cxx_destruct;
- (id)init;
- (void)didReceiveHideOverlayForAppIdentifierNotification:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)storeOverlay:(id)arg1 didFailToLoadWithError:(id)arg2;
- (void)storeOverlay:(id)arg1 didFinishDismissal:(id)arg2;
- (void)storeOverlay:(id)arg1 willStartDismissal:(id)arg2;
- (void)storeOverlay:(id)arg1 didFinishPresentation:(id)arg2;
- (void)storeOverlay:(id)arg1 willStartPresentation:(id)arg2;
- (void)displayingViewControllerWillDisappear:(id)arg1;
- (id)initWithDisplayedAppIdentifier:(id)arg1 presentingViewController:(id)arg2 presentationContext:(long long)arg3 eventLogger:(id)arg4 scribeContext:(id)arg5 viewControllerWillDisappearNotificationName:(id)arg6 loadCompletion:(CDUnknownBlockType)arg7 dismissCompletion:(CDUnknownBlockType)arg8 dismissalAction:(CDUnknownBlockType)arg9 willStartPresentation:(CDUnknownBlockType)arg10 willStartDismissal:(CDUnknownBlockType)arg11;

@end

