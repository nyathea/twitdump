//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVPlayerItem, NSArray, TAVVideoQualityEndpoint;
@protocol AVAssetResourceLoaderDelegate;

@interface TAVFoundationItem : NSObject
{
    _Bool _hasAnyAudio;
    AVPlayerItem *_avPlayerItem;
    id <AVAssetResourceLoaderDelegate> _resourceLoader;
    TAVVideoQualityEndpoint *_videoQualityEndpoint;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TAVVideoQualityEndpoint *videoQualityEndpoint; // @synthesize videoQualityEndpoint=_videoQualityEndpoint;
@property(nonatomic) _Bool hasAnyAudio; // @synthesize hasAnyAudio=_hasAnyAudio;
@property(readonly, nonatomic) id <AVAssetResourceLoaderDelegate> resourceLoader; // @synthesize resourceLoader=_resourceLoader;
@property(readonly, nonatomic) AVPlayerItem *avPlayerItem; // @synthesize avPlayerItem=_avPlayerItem;
@property(readonly, copy, nonatomic) NSArray *accessLogEvents;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithAVPlayerItem:(id)arg1;
- (id)initWithAVPlayerItem:(id)arg1 resourceLoader:(id)arg2 videoQualityEndpoint:(id)arg3;

@end

