//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APMEvent, APMValue, NSString;

@interface APMConditionalUserProperty : NSObject
{
    _Bool _active;
    NSString *_name;
    NSString *_origin;
    APMValue *_value;
    NSString *_triggerEventName;
    double _triggerTimeout;
    double _timeToLive;
    APMEvent *_triggeredEvent;
    APMEvent *_timedOutEvent;
    APMEvent *_expiredEvent;
    double _creationTimestamp;
    double _triggeredTimestamp;
}

- (void).cxx_destruct;
@property(nonatomic) double triggeredTimestamp; // @synthesize triggeredTimestamp=_triggeredTimestamp;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) double creationTimestamp; // @synthesize creationTimestamp=_creationTimestamp;
@property(copy, nonatomic) APMEvent *expiredEvent; // @synthesize expiredEvent=_expiredEvent;
@property(copy, nonatomic) APMEvent *timedOutEvent; // @synthesize timedOutEvent=_timedOutEvent;
@property(copy, nonatomic) APMEvent *triggeredEvent; // @synthesize triggeredEvent=_triggeredEvent;
@property(nonatomic) double timeToLive; // @synthesize timeToLive=_timeToLive;
@property(nonatomic) double triggerTimeout; // @synthesize triggerTimeout=_triggerTimeout;
@property(copy, nonatomic) NSString *triggerEventName; // @synthesize triggerEventName=_triggerEventName;
@property(copy, nonatomic) APMValue *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *origin; // @synthesize origin=_origin;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

