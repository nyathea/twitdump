//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, OCFSubtaskState;
@protocol ONBSubtaskControllerDelegate;

@interface ONBSubtaskController : NSObject
{
    id <ONBSubtaskControllerDelegate> _controllerDelegate;
    NSString *_subtaskID;
    long long _subtaskBackNavigationType;
    OCFSubtaskState *_subtaskState;
}

+ (id)supportedSubtaskClasses;
- (void).cxx_destruct;
@property(readonly, nonatomic) OCFSubtaskState *subtaskState; // @synthesize subtaskState=_subtaskState;
@property(readonly, nonatomic) long long subtaskBackNavigationType; // @synthesize subtaskBackNavigationType=_subtaskBackNavigationType;
@property(readonly, nonatomic) NSString *subtaskID; // @synthesize subtaskID=_subtaskID;
- (_Bool)private_isSubtaskSupported:(id)arg1;
@property(readonly, nonatomic) NSDictionary *subtaskData;
- (_Bool)requiresAccountToStart;
- (void)didActivateNavigationLink:(id)arg1 listener:(CDUnknownBlockType)arg2;
- (void)didActivateNavigationLink:(id)arg1;
- (void)restartWithNavigationContext:(id)arg1 navigationLink:(id)arg2;
- (void)startWithNavigationContext:(id)arg1 navigationLink:(id)arg2;
@property(readonly, nonatomic) _Bool canRestartForErrors;
- (id)initWithSubtask:(id)arg1 state:(id)arg2 flowToken:(id)arg3 delegate:(id)arg4;
- (id)initWithSubtask:(id)arg1 flowToken:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

