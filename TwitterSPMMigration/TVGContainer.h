//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface TVGContainer : NSObject
{
    NSArray *_documentNames;
    NSMutableDictionary *_documentCache;
    NSObject<OS_dispatch_queue> *_documentCacheQueue;
    unsigned long long _documentCacheAutoPurgeOptions;
    NSURL *_url;
    unsigned long long _documentCacheCount;
}

+ (void)purgeContainerCache;
+ (unsigned long long)containerCacheCount;
+ (id)containerWithURL:(id)arg1 error:(id *)arg2;
+ (void)load;
+ (id)containerRegisteredWithCacheRegistryWithURL:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(readonly) unsigned long long documentCacheCount; // @synthesize documentCacheCount=_documentCacheCount;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)_updateNotificationObserversWithCurrentAutoPurgeOptions:(unsigned long long)arg1 oldAutoPurgeOptions:(unsigned long long)arg2;
- (void)purgeDocumentCache;
@property unsigned long long documentCacheAutoPurgeOptions;
@property(readonly, nonatomic) NSArray *documentNames;
- (id)documentNamed:(id)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1 error:(id *)arg2;
- (void)purgeWithReason:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)collectMetrics:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

