//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSString, TLPEventStreamConnectionMetadata;
@protocol TFSTwitterScribeWriter, TLPTimeProvider;

@interface TLPStreamMetadata : NSObject
{
    id <TLPTimeProvider> _timeProvider;
    _Bool _willReconnect;
    id <TFSTwitterScribeWriter> _scribeWriter;
    NSString *_group;
    NSString *_seriesID;
    double _startTime;
    double _endTime;
    long long _totalResubscribeRequestsSent;
    long long _totalUpdateSubscriptionsRequestsSent;
    long long _totalSubscribedTopics;
    long long _totalResubscribedTopics;
    long long _totalUnsubscribedTopics;
    long long _totalFailedTopics;
    NSError *_disconnectError;
    TLPEventStreamConnectionMetadata *_eventStreamMetadata;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TLPEventStreamConnectionMetadata *eventStreamMetadata; // @synthesize eventStreamMetadata=_eventStreamMetadata;
@property(readonly, nonatomic) _Bool willReconnect; // @synthesize willReconnect=_willReconnect;
@property(readonly, nonatomic) NSError *disconnectError; // @synthesize disconnectError=_disconnectError;
@property(readonly, nonatomic) long long totalFailedTopics; // @synthesize totalFailedTopics=_totalFailedTopics;
@property(readonly, nonatomic) long long totalUnsubscribedTopics; // @synthesize totalUnsubscribedTopics=_totalUnsubscribedTopics;
@property(readonly, nonatomic) long long totalResubscribedTopics; // @synthesize totalResubscribedTopics=_totalResubscribedTopics;
@property(readonly, nonatomic) long long totalSubscribedTopics; // @synthesize totalSubscribedTopics=_totalSubscribedTopics;
@property(readonly, nonatomic) long long totalUpdateSubscriptionsRequestsSent; // @synthesize totalUpdateSubscriptionsRequestsSent=_totalUpdateSubscriptionsRequestsSent;
@property(readonly, nonatomic) long long totalResubscribeRequestsSent; // @synthesize totalResubscribeRequestsSent=_totalResubscribeRequestsSent;
@property(readonly, nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(readonly, copy, nonatomic) NSString *seriesID; // @synthesize seriesID=_seriesID;
@property(readonly, copy, nonatomic) NSString *group; // @synthesize group=_group;
@property(readonly, nonatomic) id <TFSTwitterScribeWriter> scribeWriter; // @synthesize scribeWriter=_scribeWriter;
- (void)writeToScribe;
- (id)scribeParameters;
- (id)customScribeParametersDictionary;
- (id)_disconnectionReason;
- (void)didDisconnectWithError:(id)arg1 willReconnect:(_Bool)arg2 eventStreamMetadata:(id)arg3;
- (void)didFailTopic;
- (void)didSendUpdateSubscriptionsRequestWithSubTopics:(unsigned long long)arg1 unsubTopics:(unsigned long long)arg2;
- (void)didSendResubscribeRequestWithTopics:(unsigned long long)arg1;
- (void)connectingWithTopicCount:(unsigned long long)arg1;
- (void)didStart;
- (id)initWithScribeWriter:(id)arg1 group:(id)arg2 seriesID:(id)arg3 timeProvider:(id)arg4;

@end

