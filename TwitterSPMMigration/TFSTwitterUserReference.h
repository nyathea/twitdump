//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDictionary, NSNumber, NSString;

@interface TFSTwitterUserReference : NSObject
{
    MISSING_TYPE *userID;
    MISSING_TYPE *username;
    MISSING_TYPE *fullName;
}

+ (void)setSupportsSecureCoding:(_Bool)arg1;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) long long hash;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic, readonly) NSString *displayFullName;
@property(nonatomic, readonly) NSString *displayUsername;
@property(nonatomic, readonly) NSNumber *userIDNumber;
@property(nonatomic, readonly) long long userID;
- (id)initWithUserID:(long long)arg1 username:(id)arg2 fullName:(id)arg3;
- (id)initWithUsername:(id)arg1;
- (id)initWithUserID:(long long)arg1;
- (id)initWithUserID:(long long)arg1 username:(id)arg2;
@property(nonatomic, readonly) NSString *fullName;
@property(nonatomic, readonly) NSString *username;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)scribeParametersWithProfileID:(_Bool)arg1 scribeItem:(_Bool)arg2;
@property(nonatomic, readonly) NSDictionary *scribeParameters;
@property(nonatomic, readonly) NSDictionary *scribeItem;
@property(nonatomic, readonly) NSString *scribeItemImpressionID;

@end

