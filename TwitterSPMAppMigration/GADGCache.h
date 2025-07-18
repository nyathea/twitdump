//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GADObserverCollection, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface GADGCache : NSObject
{
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSMutableDictionary *_filePathsToResourceBuffers;
    GADObserverCollection *_cacheMonitorObservers;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)cacheMonitorDidCompleteCaching:(id)arg1;
- (void)cacheMonitorDidStartCaching:(id)arg1;
- (void)loadGCacheURL:(id)arg1 withSDKCoreContext:(id)arg2 gcacheContext:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)loadGCacheURL:(id)arg1 queue:(id)arg2 gcacheContext:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)init;

@end

