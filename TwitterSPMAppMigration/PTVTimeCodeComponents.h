//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PTVTimeCodeComponents : NSObject
{
    long long _hours;
    long long _minutes;
    long long _seconds;
}

+ (double)TimeCodeFromQueryItemNamed:(id)arg1 InURL:(id)arg2;
+ (double)TimeCodeFromURL:(id)arg1;
+ (id)TimeCodeComponentsFromQueryItemNamed:(id)arg1 InURL:(id)arg2;
+ (double)TimeCodeFromString:(id)arg1;
+ (id)TimeCodeStringFromTimeInterval:(double)arg1;
+ (id)TimeCodeComponentsFromString:(id)arg1;
+ (id)TimeCodeComponentsExpression;
+ (id)TimeCodeComponentsFromTimeInterval:(double)arg1;
@property(readonly, nonatomic) long long seconds; // @synthesize seconds=_seconds;
@property(readonly, nonatomic) long long minutes; // @synthesize minutes=_minutes;
@property(readonly, nonatomic) long long hours; // @synthesize hours=_hours;
- (id)stringValue;
@property(readonly, nonatomic) double timeInterval;
@property(readonly, nonatomic) long long durationInSeconds;
- (id)initWithHours:(long long)arg1 minutes:(long long)arg2 seconds:(long long)arg3;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqualToTimeComponents:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

