//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol OS_dispatch_queue;

@interface T1UserGeneratedContentDeletionManager : NSObject
{
    _Bool _didDeleteUGC;
    NSObject<OS_dispatch_queue> *_deletionQueue;
    CDUnknownBlockType _scribeProvider;
    CDUnknownBlockType _modelServiceProvider;
    long long _UGCDeleteLevel;
    NSArray *_imagePipelines;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *imagePipelines; // @synthesize imagePipelines=_imagePipelines;
@property(readonly, nonatomic) _Bool didDeleteUGC; // @synthesize didDeleteUGC=_didDeleteUGC;
@property(readonly, nonatomic) long long UGCDeleteLevel; // @synthesize UGCDeleteLevel=_UGCDeleteLevel;
@property(readonly, nonatomic) CDUnknownBlockType modelServiceProvider; // @synthesize modelServiceProvider=_modelServiceProvider;
@property(readonly, nonatomic) CDUnknownBlockType scribeProvider; // @synthesize scribeProvider=_scribeProvider;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *deletionQueue; // @synthesize deletionQueue=_deletionQueue;
- (_Bool)_t1_deletionQueue_purgeDirectory:(id)arg1;
- (id)_t1_modelService;
- (id)_t1_scribe;
- (void)_t1_deletionQueue_deleteTIPImageCaches;
- (void)_t1_setupImagePipelines;
- (void)_t1_deletionQueue_deleteDatabases;
- (void)_t1_deletionQueue_deleteNetworkCaches;
- (void)_t1_deleteDNSCache;
- (void)_t1_deletionQueue_deleteMediaCaches;
- (void)_t1_deletionQueue_deleteDrafts;
- (void)_t1_deletionQueue_deleteLocalFiles;
- (void)_t1_deletionQueue_deleteUserGeneratedContent;
- (void)deleteUserGeneratedContent;
- (id)initWithUGCDeleteLevel:(long long)arg1 scribeProvider:(CDUnknownBlockType)arg2 modelServiceProvider:(CDUnknownBlockType)arg3;

@end

