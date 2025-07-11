//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, T1AdFormatsFeatures;

@interface T1CardRegistry : NSObject
{
    MISSING_TYPE *cardRegistration;
    MISSING_TYPE *account;
    MISSING_TYPE *cardMap;
    MISSING_TYPE *features;
}

- (void).cxx_destruct;
- (id)init;
- (void)featureSwitchesDidUpdate;
- (id)layoutDelegateForCardName:(long long)arg1 displayMode:(long long)arg2;
- (id)cardViewForCardName:(long long)arg1 displayMode:(long long)arg2;
- (_Bool)legacyShouldForceRenderingCardName:(long long)arg1 displayMode:(long long)arg2;
- (_Bool)isCardRegisteredForCardName:(long long)arg1 displayMode:(long long)arg2;
- (id)initWithAccount:(id)arg1;
@property(nonatomic, retain) T1AdFormatsFeatures *mock_features; // @synthesize mock_features=features;

@end

