//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSString;
@protocol TNLCommunicationAgentObserver;

@protocol PTVWebRTCClientNetworkHelperProtocol
- (void)removeReachabilityStatusObserver:(id <TNLCommunicationAgentObserver>)arg1;
- (void)addReachabilityStatusObserver:(id <TNLCommunicationAgentObserver>)arg1;
@property(nonatomic, readonly) long long currentReachabilityStatus;
- (void)getTURNServersForGuestBroadcastingWithCompletionHandler:(void (^)(NSDictionary *, NSError *))arg1;
- (void)get:(NSString *)arg1 responseClass:(Class)arg2 queryParameters:(NSArray *)arg3 completionHandler:(void (^)(NSDictionary *, NSError *))arg4;
- (void)sendPostRequest:(NSString *)arg1 parameters:(NSDictionary *)arg2 completionHandler:(void (^)(NSDictionary *, NSError *))arg3;
@end

