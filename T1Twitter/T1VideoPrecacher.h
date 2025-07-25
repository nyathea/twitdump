//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, T1PlayerFactory;

@interface T1VideoPrecacher : NSObject
{
    T1PlayerFactory *_playerFactory;
    NSMutableDictionary *_lastCachedEntries;
    NSMutableArray *_recentlyCachedVideos;
    unsigned long long _lastIndex;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long lastIndex; // @synthesize lastIndex=_lastIndex;
@property(readonly, nonatomic) NSMutableArray *recentlyCachedVideos; // @synthesize recentlyCachedVideos=_recentlyCachedVideos;
@property(readonly, nonatomic) NSMutableDictionary *lastCachedEntries; // @synthesize lastCachedEntries=_lastCachedEntries;
@property(readonly, nonatomic) T1PlayerFactory *playerFactory; // @synthesize playerFactory=_playerFactory;
- (id)_t1_buildScribeContextWithController:(id)arg1 withStatus:(id)arg2;
- (id)_t1_scribeContextForStatus:(id)arg1 withDataViewController:(id)arg2;
- (id)_t1_playerSessionProducersForStatus:(id)arg1 account:(id)arg2;
- (id)_t1_playerSessionProducer:(id)arg1;
- (id)_t1_unifiedCardPlayerIdentifiableForStatus:(id)arg1;
- (void)precacheVideosForStatuses:(id)arg1 withAccount:(id)arg2 withDataViewController:(id)arg3;
- (_Bool)_t1_precachingEnabledForEntity:(id)arg1 withAccount:(id)arg2;
- (_Bool)_t1_precachingEnabledForMediaForwardStatus:(id)arg1 withAccount:(id)arg2;
- (void)removeAllNotActivePlayers;
- (void)removeAllPlayers;
- (id)initWithPlayerFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

