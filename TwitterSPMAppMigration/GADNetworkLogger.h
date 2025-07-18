//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GADObserverCollection, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface GADNetworkLogger : NSObject
{
    GADObserverCollection *_observers;
    NSObject<OS_dispatch_queue> *_logQueue;
    long long _maxLineLength;
    NSString *_initialMessage;
    NSString *_logPrefix;
    NSString *_finalMessage;
    _Atomic _Bool _verboseLoggingEnabled;
    NSSet *_excludedHeaders;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)logEvent:(id)arg1 context:(id)arg2 userInfo:(id)arg3;
- (void)logMessage:(id)arg1;
- (void)observeEvent:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)updateLoggingEnabled;
- (_Bool)verboseLoggingEnabled;
- (id)init;

@end

