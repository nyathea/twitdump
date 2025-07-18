//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUserDefaults;

@interface T1VideoQualitySettings : NSObject
{
    _Bool _hasCellularInterface;
    NSUserDefaults *_userDefaults;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(readonly, nonatomic) _Bool hasCellularInterface; // @synthesize hasCellularInterface=_hasCellularInterface;
@property(nonatomic) long long currentValue;
- (void)setHasCellularInterface:(_Bool)arg1;
- (id)initWithUserDefaults:(id)arg1;
- (id)init;

@end

