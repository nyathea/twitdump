//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface TFSTwitterSensitiveMediaWarning : NSObject
{
    MISSING_TYPE *adultContent;
    MISSING_TYPE *graphicViolence;
    MISSING_TYPE *other;
}

- (id)init;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic, readonly) long long hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic, readonly) NSString *description;
- (id)copyWithZone:(void *)arg1;
- (_Bool)hasAnyWarning;

@end

