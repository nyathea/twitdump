//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface FIRSessions : NSObject
{
    MISSING_TYPE *appID;
    MISSING_TYPE *coordinator;
    MISSING_TYPE *initiator;
    MISSING_TYPE *sessionGenerator;
    MISSING_TYPE *appInfo;
    MISSING_TYPE *settings;
    MISSING_TYPE *subscribers;
    MISSING_TYPE *subscriberPromises;
    MISSING_TYPE *notificationCenter;
}

+ (id)componentsToRegister;
- (void).cxx_destruct;
- (id)init;
- (void)registerWithSubscriber:(id)arg1;

@end

