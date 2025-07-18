//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface APMPlatformIdentitySupport : NSObject
{
    Class _trackingManagerClass;
    id _identifierManager;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *resettableDeviceID;
@property(readonly, nonatomic) _Bool limitedAdTracking;
@property(readonly, nonatomic) _Bool hasLimitedAdTracking;
@property(readonly, nonatomic) unsigned long long appDataConsentStatus;
@property(readonly, nonatomic) _Bool hasAppDataConsentStatus;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

