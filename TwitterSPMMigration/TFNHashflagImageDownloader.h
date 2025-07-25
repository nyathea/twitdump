//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, TFNHashflagImageCache, TIPImagePipeline;

@interface TFNHashflagImageDownloader : NSObject
{
    TIPImagePipeline *_imagePipeline;
    TFNHashflagImageCache *_cache;
    NSMutableDictionary *_hashflagOperations;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TIPImagePipeline *imagePipeline; // @synthesize imagePipeline=_imagePipeline;
- (void)tip_imageFetchOperation:(id)arg1 didFailToLoadFinalImage:(id)arg2;
- (void)tip_imageFetchOperation:(id)arg1 didLoadFinalImage:(id)arg2;
- (void)downloadImageForHashflag:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithImagePipeline:(id)arg1 cache:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

