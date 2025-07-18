//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC14T1TwitterSwift31ImmersiveBroadcastChatViewModel : NSObject
{
    MISSING_TYPE *broadcast;
    MISSING_TYPE *ptvBroadcast;
    MISSING_TYPE *account;
    MISSING_TYPE *periscopeAccount;
    MISSING_TYPE *externalVideoAccessManager;
    MISSING_TYPE *watcher;
    MISSING_TYPE *accessVideo;
    MISSING_TYPE *lastObservedPlaybackState;
    MISSING_TYPE *lastObservedTXXXFrame;
    MISSING_TYPE *replayChatWorker;
    MISSING_TYPE *historyLoader;
    MISSING_TYPE *chatStore;
    MISSING_TYPE *liveMessagesChatStore;
    MISSING_TYPE *lastObservedItemIdentifiersLimitDate;
    MISSING_TYPE *itemIdentifiersNextExpectedLimitDate;
    MISSING_TYPE *mutedMessageIDs;
    MISSING_TYPE *loadHistoryOnConnected;
    MISSING_TYPE *delegate;
    MISSING_TYPE *connectionStatus;
    MISSING_TYPE *chatMessageAuthorTapHandler;
    MISSING_TYPE *canSendUpdateBlock;
    MISSING_TYPE *updateBlock;
    MISSING_TYPE *didSendMessageBlock;
    MISSING_TYPE *didUpdateIsConnectingOrLoadingBlock;
    MISSING_TYPE *encounterErrorBlock;
    MISSING_TYPE *replyTarget;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)broadcastWatcher:(id)arg1 didUpdateVideoAccess:(id)arg2 previousVideoAccess:(id)arg3;
- (void)chatController:(id)arg1 messageWasMuted:(id)arg2;
- (void)chatController:(id)arg1 didSubscribeWithSuccess:(_Bool)arg2;
- (void)chatControllerDidJoinChatRoom:(id)arg1;
- (void)chatController:(id)arg1 didSendMessage:(id)arg2;
- (void)chatController:(id)arg1 didReceiveQueuedMessage:(id)arg2 deliveryQueueSize:(unsigned long long)arg3;
- (void)chatControllerDidChangeChatRoomAccess:(id)arg1;
- (void)chatController:(id)arg1 didChangeChatState:(unsigned long long)arg2 error:(id)arg3;
- (double)broadcastControllerReplayDuration:(id)arg1;
- (double)broadcastControllerCurrentReplayTimeInterval:(id)arg1;
- (id)broadcastControllerProgramDateTime:(id)arg1;
- (unsigned long long)broadcastControllerNTPForNow:(id)arg1;
- (unsigned long long)broadcastControllerNTPForCurrentFrame:(id)arg1;

@end

