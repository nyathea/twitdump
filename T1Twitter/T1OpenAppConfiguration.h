//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface T1OpenAppConfiguration : NSObject
{
}

+ (_Bool)isFeatureEnabled:(long long)arg1 account:(id)arg2;
+ (_Bool)isFeatureGated:(long long)arg1 account:(id)arg2;
+ (_Bool)isFeatureHidden:(long long)arg1 account:(id)arg2;
+ (_Bool)isFeatureVisible:(long long)arg1 account:(id)arg2;
+ (long long)suppressionModeForFeature:(long long)arg1 account:(id)arg2;
- (id)init;

@end

