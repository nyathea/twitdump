//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSNumber;
@protocol PTVWebRTCClientDelegate;

@interface PTVJanusMultistreamClient : NSObject
{
    MISSING_TYPE *isWebRTCActive;
    MISSING_TYPE *state;
    MISSING_TYPE *disconnectedWithError;
    MISSING_TYPE *configuration;
    MISSING_TYPE *delegate;
    MISSING_TYPE *loggedInUserId;
    MISSING_TYPE *hostUserId;
    MISSING_TYPE *networkClient;
    MISSING_TYPE *audioMonitorProvider;
    MISSING_TYPE *janusSessionId;
    MISSING_TYPE *loggedInUserJanusPublisherId;
    MISSING_TYPE *publisherHandlerId;
    MISSING_TYPE *subscriberHandlerId;
    MISSING_TYPE *keepAliveTimer;
    MISSING_TYPE *pollingToken;
    MISSING_TYPE *didJoinAsSubscriber;
    MISSING_TYPE *peerConnectionFactory;
    MISSING_TYPE *publisherPeerConnection;
    MISSING_TYPE *subscriberPeerConnection;
    MISSING_TYPE *publisherRestartPending;
    MISSING_TYPE *subscriberRestartPending;
    MISSING_TYPE *localVideoSource;
    MISSING_TYPE *localVideoTrack;
    MISSING_TYPE *localAudioTrack;
    MISSING_TYPE *audioMonitorsByUserId;
    MISSING_TYPE *userIdsByMid;
    MISSING_TYPE *userIdsByFeedId;
    MISSING_TYPE *mediaStreamByUserId;
    MISSING_TYPE *subscribedStreamsByFeedId;
    MISSING_TYPE *audioLevelsTimer;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, retain) NSNumber *loggedInUserJanusPublisherId; // @synthesize loggedInUserJanusPublisherId;
@property(nonatomic, readonly) NSNumber *loggedInUserJanusHandlerId;
@property(nonatomic) unsigned long long janusSessionId; // @synthesize janusSessionId;
- (id)userIdForMediaStream:(id)arg1;
- (_Bool)isFullyConnectedToUserID:(id)arg1;
- (void)resume;
- (void)leaveWithError:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reconfigureWithVideoIfNeeded;
- (void)join;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 loggedInUserId:(id)arg3 hostUserId:(id)arg4 networkHelper:(id)arg5 audioMonitorProvider:(CDUnknownBlockType)arg6;
@property(nonatomic) __weak id <PTVWebRTCClientDelegate> delegate; // @synthesize delegate;
@property(nonatomic) _Bool disconnectedWithError; // @synthesize disconnectedWithError;
@property(nonatomic) long long state; // @synthesize state;
@property(nonatomic) _Bool isWebRTCActive; // @synthesize isWebRTCActive;
- (void)peerConnectionShouldNegotiate:(id)arg1;
- (void)peerConnection:(id)arg1 didOpenDataChannel:(id)arg2;
- (void)peerConnection:(id)arg1 didRemoveIceCandidates:(id)arg2;
- (void)peerConnection:(id)arg1 didChangeIceGatheringState:(long long)arg2;
- (void)peerConnection:(id)arg1 didRemoveStream:(id)arg2;
- (void)peerConnection:(id)arg1 didAddStream:(id)arg2;
- (void)peerConnection:(id)arg1 didChangeIceConnectionState:(long long)arg2;
- (void)peerConnection:(id)arg1 didChangeSignalingState:(long long)arg2;
- (void)peerConnection:(id)arg1 didGenerateIceCandidate:(id)arg2;
- (void)peerConnection:(id)arg1 didChangeConnectionState:(long long)arg2;
- (void)peerConnection:(id)arg1 didRemoveReceiver:(id)arg2;
- (void)peerConnection:(id)arg1 didAddReceiver:(id)arg2 streams:(id)arg3;
- (void)tnl_communicationAgent:(id)arg1 didUpdateReachabilityFromPreviousFlags:(unsigned int)arg2 previousStatus:(long long)arg3 toCurrentFlags:(unsigned int)arg4 currentStatus:(long long)arg5;

@end

