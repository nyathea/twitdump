//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TFSWeakValueObject : NSObject
{
    unsigned long long _hashValue;
    id _value;
}

+ (id)withValue:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id value; // @synthesize value=_value;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithValue:(id)arg1;

@end

