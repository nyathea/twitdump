//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface T1GeoConfigurationChangeListener : NSObject
{
    _Bool _started;
}

+ (id)defaultListener;
@property(nonatomic, getter=hasStarted) _Bool started; // @synthesize started=_started;
- (void)_startUpdates;
- (void)start;
- (id)init;

@end

