//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSNumber, NSString;

@interface TFSDirectMessagesIdentityKeyManager : NSObject
{
    MISSING_TYPE *publicKey;
    MISSING_TYPE *privateKey;
    MISSING_TYPE *registrationID;
    MISSING_TYPE *registrationToken;
    MISSING_TYPE *userID;
}

+ (id)generateUniqueKeychainTagWithUserID:(long long)arg1;
- (void).cxx_destruct;
- (id)init;
- (void)clearKeysWithIsECIES:(_Bool)arg1;
- (void)restore;
- (void)save;
- (id)initWithUserID:(long long)arg1;
@property(nonatomic, copy) NSString *registrationToken;
@property(nonatomic, retain) NSNumber *registrationID; // @synthesize registrationID;
@property(nonatomic, copy) NSString *privateKey;
@property(nonatomic, copy) NSString *publicKey;

@end

