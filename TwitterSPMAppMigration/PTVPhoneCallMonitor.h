//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CXCallObserver, NSString, PTVWeakSet;

@interface PTVPhoneCallMonitor : NSObject
{
    PTVPhoneCallMonitor *_weakSelf;
    PTVWeakSet *_observers;
    CXCallObserver *_callKitObserver;
}

+ (void)RemovePhoneCallObserver:(id)arg1;
+ (void)AddPhoneCallObserver:(id)arg1;
+ (id)SharedInstance;
- (void).cxx_destruct;
- (void)didDisconnectIncomingPhoneCall;
- (void)didAcceptIncomingPhoneCall;
- (void)didReceiveIncomingPhoneCall;
- (void)notifyWithBlock:(CDUnknownBlockType)arg1;
- (void)removePhoneCallObserver:(id)arg1;
- (void)addPhoneCallObserver:(id)arg1;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

