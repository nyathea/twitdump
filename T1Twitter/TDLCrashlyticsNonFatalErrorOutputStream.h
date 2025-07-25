//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface TDLCrashlyticsNonFatalErrorOutputStream : NSObject
{
    NSMutableArray *_queuedErrors;
    NSObject<OS_dispatch_queue> *_queuedErrorsQueue;
    NSObject<OS_dispatch_queue> *_nonFatalReportingQueue;
}

- (void).cxx_destruct;
- (void)tls_outputLogInfo:(id)arg1;
- (long long)tls_shouldFilterLevel:(long long)arg1 channel:(id)arg2 contextObject:(id)arg3;
- (void)_tfn_handleCrashlyticsInitialized:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

