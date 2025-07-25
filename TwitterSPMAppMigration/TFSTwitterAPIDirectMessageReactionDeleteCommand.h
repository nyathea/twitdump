//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFSTwitterAPICommand.h>

@class NSMutableDictionary, NSString, TFNDirectMessageReaction;

@interface TFSTwitterAPIDirectMessageReactionDeleteCommand : TFSTwitterAPICommand
{
    NSString *_conversationID;
    NSString *_dmID;
    TFNDirectMessageReaction *_reaction;
    NSMutableDictionary *_scribeParameters;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *scribeParameters; // @synthesize scribeParameters=_scribeParameters;
@property(readonly, copy, nonatomic) TFNDirectMessageReaction *reaction; // @synthesize reaction=_reaction;
@property(readonly, copy, nonatomic) NSString *dmID; // @synthesize dmID=_dmID;
@property(readonly, copy, nonatomic) NSString *conversationID; // @synthesize conversationID=_conversationID;
- (void)scribeCommandResponse:(id)arg1 to:(id)arg2;
- (id)request;
- (id)initWithAccountID:(id)arg1 conversationID:(id)arg2 dmID:(id)arg3 reaction:(id)arg4 scribeParams:(id)arg5 context:(id)arg6 source:(unsigned long long)arg7 completionBlock:(CDUnknownBlockType)arg8;
- (id)initWithAccountID:(id)arg1 context:(id)arg2 authContext:(id)arg3 networkTransactionMetrics:(id)arg4 source:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;

@end

