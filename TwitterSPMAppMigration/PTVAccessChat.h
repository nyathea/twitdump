//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PTVChatRoomPerms;

@interface PTVAccessChat : NSObject
{
    _Bool _shouldLog;
    _Bool _readOnly;
    _Bool _isModerator;
    _Bool _sendStats;
    long long _participant_index;
    PTVChatRoomPerms *_chatRoomPerms;
    NSString *_roomID;
    NSString *_endpoint;
    NSString *_accessToken;
    NSString *_replayEndpoint;
    NSString *_replayAccessToken;
}

- (void).cxx_destruct;
@property(readonly) NSString *replayAccessToken; // @synthesize replayAccessToken=_replayAccessToken;
@property(readonly) NSString *replayEndpoint; // @synthesize replayEndpoint=_replayEndpoint;
@property(readonly) _Bool sendStats; // @synthesize sendStats=_sendStats;
@property(readonly) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(readonly) NSString *endpoint; // @synthesize endpoint=_endpoint;
@property(readonly, nonatomic) _Bool isModerator; // @synthesize isModerator=_isModerator;
@property(readonly) NSString *roomID; // @synthesize roomID=_roomID;
@property(readonly) PTVChatRoomPerms *chatRoomPerms; // @synthesize chatRoomPerms=_chatRoomPerms;
@property(readonly) _Bool readOnly; // @synthesize readOnly=_readOnly;
@property(readonly) _Bool shouldLog; // @synthesize shouldLog=_shouldLog;
@property(readonly) long long participant_index; // @synthesize participant_index=_participant_index;
- (id)initWithDictionary:(id)arg1;
- (id)bestReplayAccessToken;
- (id)bestReplayEndpoint;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

