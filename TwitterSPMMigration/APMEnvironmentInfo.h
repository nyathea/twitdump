//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface APMEnvironmentInfo : NSObject
{
    NSString *_deviceModel;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) int timeZoneOffsetMinutes;
@property(readonly, nonatomic) NSString *userDefaultLanguage;
@property(readonly, nonatomic) NSString *deviceOSVersion;
@property(readonly, nonatomic) NSString *deviceModel;

@end

