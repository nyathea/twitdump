//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFSGroupOperation.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, TFNDirectMessageConversation, TFNTwitterAccount;
@protocol TFNDirectMessageGenerateConversationEncryptedKeysOperationDelegate;

@interface TFNDirectMessageGenerateConversationEncryptedKeysOperation : TFSGroupOperation
{
    id <TFNDirectMessageGenerateConversationEncryptedKeysOperationDelegate> _delegate;
    NSString *_generatedConversationKey;
    NSString *_conversationKeySignature;
    NSArray *_encryptedConversationKeys;
    TFNTwitterAccount *_account;
    TFNDirectMessageConversation *_conversation;
    unsigned long long _conversationParticipantsCount;
    NSMutableDictionary *_publicKeysByUserIDNumber;
    NSMutableArray *_publicKeysErrors;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *publicKeysErrors; // @synthesize publicKeysErrors=_publicKeysErrors;
@property(retain, nonatomic) NSMutableDictionary *publicKeysByUserIDNumber; // @synthesize publicKeysByUserIDNumber=_publicKeysByUserIDNumber;
@property(readonly, nonatomic) unsigned long long conversationParticipantsCount; // @synthesize conversationParticipantsCount=_conversationParticipantsCount;
@property(readonly, nonatomic) TFNDirectMessageConversation *conversation; // @synthesize conversation=_conversation;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) NSArray *encryptedConversationKeys; // @synthesize encryptedConversationKeys=_encryptedConversationKeys;
@property(readonly, nonatomic) NSString *conversationKeySignature; // @synthesize conversationKeySignature=_conversationKeySignature;
@property(readonly, nonatomic) NSString *generatedConversationKey; // @synthesize generatedConversationKey=_generatedConversationKey;
@property __weak id <TFNDirectMessageGenerateConversationEncryptedKeysOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)extractEncryptionKeysOperation:(id)arg1 didFailWithError:(id)arg2;
- (void)extractEncryptionKeysOperationDidSucceed:(id)arg1 fetchResponse:(id)arg2;
- (void)_tfn_main_processPublicKeys;
- (id)initWithAccount:(id)arg1 conversation:(id)arg2 commandLoader:(id)arg3 commandContext:(id)arg4;

@end

