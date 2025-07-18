//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFSConcurrentOperation.h>

@class NSString;

@interface TFNDirectMessageLookupTrustedIdentityOperation : TFSConcurrentOperation
{
    NSString *_conversationID;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, copy, nonatomic) NSString *conversationID; // @synthesize conversationID=_conversationID;
- (void)run;
- (id)initWithConversationID:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

