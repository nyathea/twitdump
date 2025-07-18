//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, PTVReplayChunk;

@interface PTVReplayChunkPlaylist : NSObject
{
    PTVReplayChunk *_placeholderChunkForSearch;
    NSArray *_chunks;
}

+ (CDUnknownBlockType)ComparatorForReplayChunks;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *chunks; // @synthesize chunks=_chunks;
- (void)preloadThumbnails;
- (id)closestLoadedChunkWithClosestIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfChunkClosestToVideoPosition:(double)arg1;
- (void)getPreLoadedAndBestThumbnailForVideoPosition:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fixChunksWithNoTime:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

