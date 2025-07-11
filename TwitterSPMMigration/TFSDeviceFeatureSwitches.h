//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSSet;
@protocol TFSFeatureSwitchProvider;

@interface TFSDeviceFeatureSwitches : NSObject
{
    MISSING_TYPE *provider;
    MISSING_TYPE *accessOnceProvider;
}

+ (id)emptyFeatureSwitches;
+ (id)didUpdateNotification;
+ (id)sharedFeatureSwitches;
- (void).cxx_destruct;
- (id)init;
- (id)initWithProvider:(id)arg1;
@property(nonatomic, readonly) id <TFSFeatureSwitchProvider> accessOnceProvider; // @synthesize accessOnceProvider;
@property(nonatomic, readonly) id <TFSFeatureSwitchProvider> provider; // @synthesize provider;
@property(readonly, nonatomic) NSSet *menuSheetAsMenuLongStringWarningsExemptionPrefixes;
@property(readonly, nonatomic) long long menuSheetAsMenuLongStringWarningsExemptionPrefixLength;
@property(readonly, nonatomic) _Bool isMenuSheetAsMenuLongStringWarningsEnabled;

@end

