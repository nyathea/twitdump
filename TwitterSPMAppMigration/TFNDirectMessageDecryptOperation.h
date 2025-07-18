//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFSConcurrentOperation.h>

@class NSError, NSString;

@interface TFNDirectMessageDecryptOperation : TFSConcurrentOperation
{
    NSString *_conversationID;
    NSString *_accountID;
    long long _senderUserID;
    NSString *_ciphertext;
    NSString *_registrationToken;
    NSString *_signature;
    NSString *_encryptedFrankingKey;
    NSString *_frankingTag;
    CDUnknownBlockType _completion;
    NSString *_plaintext;
    NSError *_error;
    unsigned long long _signatureVerificationStatus;
    NSString *_frankingKey;
    unsigned long long _frankingVerificationStatus;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long frankingVerificationStatus; // @synthesize frankingVerificationStatus=_frankingVerificationStatus;
@property(copy) NSString *frankingKey; // @synthesize frankingKey=_frankingKey;
@property(nonatomic) unsigned long long signatureVerificationStatus; // @synthesize signatureVerificationStatus=_signatureVerificationStatus;
@property(copy) NSError *error; // @synthesize error=_error;
@property(copy) NSString *plaintext; // @synthesize plaintext=_plaintext;
@property(readonly, copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, copy, nonatomic) NSString *frankingTag; // @synthesize frankingTag=_frankingTag;
@property(readonly, copy, nonatomic) NSString *encryptedFrankingKey; // @synthesize encryptedFrankingKey=_encryptedFrankingKey;
@property(readonly, copy, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(readonly, copy, nonatomic) NSString *registrationToken; // @synthesize registrationToken=_registrationToken;
@property(readonly, copy, nonatomic) NSString *ciphertext; // @synthesize ciphertext=_ciphertext;
@property(readonly, nonatomic) long long senderUserID; // @synthesize senderUserID=_senderUserID;
@property(readonly, copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(readonly, copy, nonatomic) NSString *conversationID; // @synthesize conversationID=_conversationID;
- (void)private_completeWithError:(id)arg1;
- (void)private_completeWithPlaintext:(id)arg1 frankingKey:(id)arg2;
- (void)completeOperation;
- (void)_verifyFranking;
- (void)_verifySignature;
- (void)run;
- (id)initWithConversationID:(id)arg1 accountID:(id)arg2 senderUserID:(long long)arg3 ciphertext:(id)arg4 registrationToken:(id)arg5 signature:(id)arg6 encryptedFrankingKey:(id)arg7 frankingTag:(id)arg8 completion:(CDUnknownBlockType)arg9;

@end

