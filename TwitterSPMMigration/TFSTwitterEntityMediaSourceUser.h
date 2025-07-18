//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, TFSTwitterUserDesignatorInfo, TFSTwitterUserReference;

@interface TFSTwitterEntityMediaSourceUser : NSObject
{
    MISSING_TYPE *verified;
    MISSING_TYPE *isBlueVerified;
    MISSING_TYPE *identityType;
    MISSING_TYPE *highlightedDesignatorInfo;
    MISSING_TYPE *userId;
    MISSING_TYPE *fullName;
    MISSING_TYPE *username;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(void *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic, readonly) TFSTwitterUserDesignatorInfo *highlightedDesignatorInfo; // @synthesize highlightedDesignatorInfo;
@property(nonatomic, readonly) TFSTwitterUserReference *userReference;
@property(nonatomic, readonly) long long identityType; // @synthesize identityType;
@property(nonatomic, readonly) _Bool isBlueVerified; // @synthesize isBlueVerified;
@property(nonatomic, readonly) _Bool verified; // @synthesize verified;

@end

