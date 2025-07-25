//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString, TFNMenuCompatibleControl, UIEvent, UIGestureRecognizer;
@protocol TFNMenuSupport><TFNMenuDisplayEvents;

@interface TFNMenuCompatibleGestureRecognizerHelper : NSObject
{
    UIGestureRecognizer<TFNMenuSupport><TFNMenuDisplayEvents> *_gestureRecognizer;
    TFNMenuCompatibleControl *_control;
    UIEvent *_event;
    NSSet *_touches;
}

- (void).cxx_destruct;
- (void)_tfn_populateMenuWithTitle:(id)arg1 actionItems:(id)arg2;
- (void)populateMenuWithActionItems:(id)arg1;
- (void)populateMenuWithTitle:(id)arg1 actionItems:(id)arg2;
@property(readonly, nonatomic) _Bool isPreparedToDisplayMenuOnPrimaryAction;
- (void)prepareToDisplayMenuOnPrimaryAction;
- (void)_tfn_clearTouches;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initForGestureRecognizer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) CDUnknownBlockType willDisplayMenuOnPrimaryActionBlock;
// Preceding property had unknown attributes: ?
// Original attribute string: T@?,?,R,C,N


@end

