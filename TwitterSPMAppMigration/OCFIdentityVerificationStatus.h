//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface OCFIdentityVerificationStatus : NSObject
{
    _Bool _isVerified;
    NSString *_pinCode;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *pinCode; // @synthesize pinCode=_pinCode;
@property(readonly, nonatomic) _Bool isVerified; // @synthesize isVerified=_isVerified;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

@end

