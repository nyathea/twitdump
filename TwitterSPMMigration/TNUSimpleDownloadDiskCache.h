//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, TNLLRUCache;
@protocol OS_dispatch_queue;

@interface TNUSimpleDownloadDiskCache : NSObject
{
    NSString *_cachePath;
    NSObject<OS_dispatch_queue> *_diskCacheQueue;
    TNLLRUCache *_manifest;
    NSMutableDictionary *_runnningOperations;
    unsigned long long _currentUsage;
    _Bool _pseudoOn;
    NSString *_identifier;
    unsigned long long _maximumCapacity;
    CDUnknownBlockType _configurationBlock;
}

+ (id)rootDiskCacheDirectoryPath;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType configurationBlock; // @synthesize configurationBlock=_configurationBlock;
@property(readonly, nonatomic) unsigned long long maximumCapacity; // @synthesize maximumCapacity=_maximumCapacity;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)diskCache_populateEntries:(id)arg1 falseEntryPaths:(id)arg2 totalSize:(unsigned long long *)arg3 fromEntryURLs:(id)arg4;
- (void)diskCache_sortEntries:(id)arg1;
- (void)diskCache_loadDiskCacheManifest;
- (_Bool)diskCache_storeToDiskCache:(id)arg1 incomingError:(id)arg2 fileURL:(out id *)arg3 error:(out id *)arg4;
- (_Bool)diskCache_storeOperationToDiskCache:(id)arg1 response:(id)arg2 fileURL:(id *)arg3 error:(id *)arg4;
- (id)diskCache_loadFromDiskCache:(id)arg1;
- (void)diskCache_prune:(_Bool)arg1;
- (_Bool)diskCache_shouldPrune:(_Bool)arg1;
- (_Bool)diskCache_clearRunningRequestOperation:(id)arg1;
- (void)diskCache_storeRunningRequestOperation:(id)arg1 identifier:(id)arg2;
- (id)diskCache_findRunningRequestOperation:(id)arg1;
- (void)diskCache_startDownload:(id)arg1 withPseudoSupport:(_Bool)arg2;
- (void)diskCache_startDownload:(id)arg1;
- (void)private_addDownload:(id)arg1 toRunningOperation:(id)arg2;
- (void)private_handleCompletion:(id)arg1 response:(id)arg2;
- (void)storeFile:(id)arg1 copyingFile:(_Bool)arg2 forDownloadURL:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)cacheLookupForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isActivelyDownloadingURL:(id)arg1;
- (void)cancelAllDownloads:(id)arg1 source:(id)arg2;
- (void)startDownload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)simpleDownloadForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearAllCacheEntries;
@property(readonly) unsigned long long currentUsage;
- (id)initWithIdentifier:(id)arg1 maximumCapacity:(unsigned long long)arg2;
- (_Bool)pseudoNetworkProtocolEnabled;
- (void)setPseudoNetworkProtocolEnabled:(_Bool)arg1;

@end

