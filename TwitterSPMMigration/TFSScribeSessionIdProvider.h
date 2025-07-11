//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TFSScribeSessionIdProvider : NSObject
{
    struct os_unfair_lock_s lock;
    NSString *_sessionId;
    _Bool observing;
}

+ (id)sharedProvider;
- (void).cxx_destruct;
- (void)refreshSessionId:(id)arg1;
- (id)sessionId;
- (void)setupObserversWithDidBecomeActiveNotificationName:(id)arg1 accountChangeNotificationName:(id)arg2;
- (void)dealloc;
- (id)init;

@end

