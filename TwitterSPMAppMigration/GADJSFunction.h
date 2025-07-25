//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GADJSContext, GADObserverCollection, NSString;

@interface GADJSFunction : NSObject
{
    NSString *_functionName;
    GADJSContext *_JSContext;
    GADObserverCollection *_observers;
    NSString *_resultIdentifier;
    CDUnknownBlockType _completionHandler;
    struct atomic_flag _functionCalled;
}

- (void).cxx_destruct;
- (void)callWithArguments:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)callFunctionWithName:(id)arg1 argument:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)startTimeoutTimerWithFunctionName:(id)arg1;
- (void)completeWithResult:(id)arg1 error:(id)arg2;
- (id)initWithFunctionName:(id)arg1 context:(id)arg2 messageSource:(id)arg3;

@end

