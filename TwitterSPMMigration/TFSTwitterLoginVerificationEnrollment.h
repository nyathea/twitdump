//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TFSTwitterLoginVerificationEnrollment : NSObject
{
    _Bool _enrolledElsewhere;
    int _enrolled;
}

+ (id)loginVerificationEnrollmentWithJSONData:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic, getter=isEnrolledElsewhere) _Bool enrolledElsewhere; // @synthesize enrolledElsewhere=_enrolledElsewhere;
@property(readonly, nonatomic) int enrolled; // @synthesize enrolled=_enrolled;
- (int)_verificationModeWithString:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;

@end

