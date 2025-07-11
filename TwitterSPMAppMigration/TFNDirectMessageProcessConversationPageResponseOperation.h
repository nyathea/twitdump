//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFSConcurrentOperation.h>

@class NSArray, TFNDirectMessageConversation, TFNDirectMessageConversationPageResponse, TFNDirectMessageModel;

@interface TFNDirectMessageProcessConversationPageResponseOperation : TFSConcurrentOperation
{
    TFNDirectMessageConversation *_conversation;
    TFNDirectMessageModel *_model;
    TFNDirectMessageConversationPageResponse *_response;
    NSArray *_entries;
    NSArray *_conversations;
}

- (void).cxx_destruct;
@property(copy) NSArray *conversations; // @synthesize conversations=_conversations;
@property(copy) NSArray *entries; // @synthesize entries=_entries;
@property(retain) TFNDirectMessageConversationPageResponse *response; // @synthesize response=_response;
@property(readonly, nonatomic) TFNDirectMessageModel *model; // @synthesize model=_model;
@property(readonly, nonatomic) TFNDirectMessageConversation *conversation; // @synthesize conversation=_conversation;
- (void)private_processResponse:(id)arg1 conversation:(id)arg2 model:(id)arg3;
- (void)run;
- (id)initWithConversation:(id)arg1 model:(id)arg2;

@end

