//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

@interface TFNExternalURLAbuseProtection : NSObject
{
    _Bool _shouldBlockAllAttempts;
    NSDate *_firstAttemptedDate;
    unsigned long long _count;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(retain, nonatomic) NSDate *firstAttemptedDate; // @synthesize firstAttemptedDate=_firstAttemptedDate;
@property(nonatomic) _Bool shouldBlockAllAttempts; // @synthesize shouldBlockAllAttempts=_shouldBlockAllAttempts;
- (void)resetAbuseProtection;
- (_Bool)shouldBlockAttempt;
- (id)init;

@end

