//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, TIPImageDiskCache, TIPImageDownloader, TIPImageMemoryCache, TIPImageRenderedCache;
@protocol TIPImagePipelineObserver;

@interface TIPImagePipeline : NSObject
{
    NSString *_imagePipelinePath;
    TIPImageRenderedCache *_renderedCache;
    TIPImageMemoryCache *_memoryCache;
    TIPImageDiskCache *_diskCache;
    NSArray *_additionalCaches;
    id <TIPImagePipelineObserver> _observer;
    NSString *_identifier;
    TIPImageDownloader *_downloader;
}

+ (void)getKnownImagePipelineIdentifiers:(CDUnknownBlockType)arg1;
+ (id)allRegisteredImagePipelines;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain) id <TIPImagePipelineObserver> observer; // @synthesize observer=_observer;
@property(copy) NSArray *additionalCaches; // @synthesize additionalCaches=_additionalCaches;
- (void)_tip_applicationDidEnterBackground;
- (id)cacheOfType:(long long)arg1;
- (void)copyDiskCacheFileWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearDiskCache;
- (void)clearMemoryCaches;
- (void)dirtyRenderedMemoryCacheImageWithIdentifier:(id)arg1;
- (void)clearRenderedMemoryCacheImageWithIdentifier:(id)arg1;
- (void)clearImageWithIdentifier:(id)arg1;
- (id)storeImageWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)changeIdentifierForImageWithIdentifier:(id)arg1 toIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchImageWithOperation:(id)arg1;
- (id)memoryCachedCompleteImageWithOperation:(id)arg1;
- (id)operationWithRequest:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)operationWithRequest:(id)arg1 context:(id)arg2 delegate:(id)arg3;
- (id)initWithIdentifier:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)inspect:(CDUnknownBlockType)arg1;

@end

