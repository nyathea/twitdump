//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSDictionary, NSNumber, NSString, TFSTwitterEntityMedia, TFSTwitterTypeaheadResultContext, TFSTwitterUserDesignatorInfo, TFSTwitterUserReference, _TtC14TFSTwitterCore43TFSTwitterStatusAuthorAndActorSocialContext;

@interface TFSTwitterTypeaheadUser : NSObject
{
    MISSING_TYPE *userID;
    MISSING_TYPE *username;
    MISSING_TYPE *fullName;
    MISSING_TYPE *verified;
    MISSING_TYPE *isBlueVerified;
    MISSING_TYPE *profileImageShape;
    MISSING_TYPE *identityType;
    MISSING_TYPE *protectedUser;
    MISSING_TYPE *profileImageMediaEntity;
    MISSING_TYPE *highlightedDesignatorInfo;
    MISSING_TYPE *canDM;
    MISSING_TYPE *canReceiveEncryptedDM;
    MISSING_TYPE *canMediaTag;
    MISSING_TYPE *canPay;
    MISSING_TYPE *socialContext;
    MISSING_TYPE *resultContext;
    MISSING_TYPE *score;
    MISSING_TYPE *tokens;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) NSDictionary *scribeParameters;
@property(nonatomic, readonly) NSDictionary *scribeItem;
@property(nonatomic, readonly) NSString *userIDString;
@property(nonatomic, readonly) TFSTwitterUserReference *userReference;
@property(nonatomic, readonly) long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCanonicalUser:(id)arg1;
- (id)initWithUserID:(long long)arg1 username:(id)arg2 fullName:(id)arg3 verified:(_Bool)arg4 isBlueVerified:(id)arg5 profileImageShape:(long long)arg6 identityType:(long long)arg7 protectedUser:(_Bool)arg8 profileImageMediaEntity:(id)arg9 highlightedDesignatorInfo:(id)arg10 canDM:(_Bool)arg11 canReceiveEncryptedDM:(_Bool)arg12 canMediaTag:(_Bool)arg13 canPay:(_Bool)arg14 socialContext:(id)arg15 resultContext:(id)arg16 score:(long long)arg17 tokens:(id)arg18;
@property(nonatomic, readonly) NSArray *tokens;
@property(nonatomic, readonly) long long score; // @synthesize score;
@property(nonatomic, readonly) TFSTwitterTypeaheadResultContext *resultContext; // @synthesize resultContext;
@property(nonatomic, readonly) _TtC14TFSTwitterCore43TFSTwitterStatusAuthorAndActorSocialContext *socialContext; // @synthesize socialContext;
@property(nonatomic, readonly) _Bool canPay; // @synthesize canPay;
@property(nonatomic, readonly) _Bool canMediaTag; // @synthesize canMediaTag;
@property(nonatomic, readonly) _Bool canReceiveEncryptedDM; // @synthesize canReceiveEncryptedDM;
@property(nonatomic, readonly) _Bool canDM; // @synthesize canDM;
@property(nonatomic, readonly) TFSTwitterUserDesignatorInfo *highlightedDesignatorInfo; // @synthesize highlightedDesignatorInfo;
@property(nonatomic, readonly) TFSTwitterEntityMedia *profileImageMediaEntity; // @synthesize profileImageMediaEntity;
@property(nonatomic, readonly) _Bool protectedUser; // @synthesize protectedUser;
@property(nonatomic, readonly) long long identityType; // @synthesize identityType;
@property(nonatomic, readonly) long long profileImageShape; // @synthesize profileImageShape;
@property(nonatomic, readonly) NSNumber *isBlueVerified; // @synthesize isBlueVerified;
@property(nonatomic, readonly) _Bool verified; // @synthesize verified;
@property(nonatomic, readonly) NSString *fullName;
@property(nonatomic, readonly) NSString *username;
@property(nonatomic, readonly) long long userID; // @synthesize userID;

@end

