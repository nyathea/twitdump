//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString, OCFWaitSpinnerSubtask, OCFWaitSpinnerSubtaskState, TFNHUD, TFSTimer;
@protocol ONBSubtaskControllerDelegate;

@interface ONBWaitSpinnerSubtaskController
{
    NSDate *_startTime;
    TFNHUD *_hud;
    OCFWaitSpinnerSubtask *_subtask;
    OCFWaitSpinnerSubtaskState *_state;
    TFSTimer *_initialTimer;
    TFSTimer *_extensionTimer;
    id <ONBSubtaskControllerDelegate> _delegate;
    _Bool _shouldOverrideTimer;
    NSString *_currentMessage;
}

+ (id)supportedSubtaskClasses;
- (void).cxx_destruct;
- (void)stopWaiting;
- (void)waitWithMessage:(id)arg1;
- (_Bool)canWaitWithMessage:(id)arg1;
- (_Bool)_t1_shouldExtend;
- (long long)_t1_millisecondsSinceStart;
- (void)_t1_showHud;
- (void)_t1_update;
- (void)_t1_extensionTimerFired;
- (void)_t1_timerFired;
- (id)_t1_spinnerMessage;
- (_Bool)canRestartForErrors;
- (void)startWithNavigationContext:(id)arg1 navigationLink:(id)arg2;
- (id)initWithSubtask:(id)arg1 flowToken:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

