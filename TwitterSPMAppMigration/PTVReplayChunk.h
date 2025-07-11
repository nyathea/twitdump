//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PTVReplayThumbnail, PTVWorkClient;

@interface PTVReplayChunk : NSObject
{
    PTVWorkClient *_workClient;
    _Bool _isCurrentlyLoading;
    _Bool _hasLoadedThumbnail;
    long long _chunkIndex;
    double _mediaTime;
    PTVReplayThumbnail *_thumbnail;
}

- (void).cxx_destruct;
@property _Bool hasLoadedThumbnail; // @synthesize hasLoadedThumbnail=_hasLoadedThumbnail;
@property(retain, nonatomic) PTVReplayThumbnail *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(nonatomic) double mediaTime; // @synthesize mediaTime=_mediaTime;
@property(nonatomic) long long chunkIndex; // @synthesize chunkIndex=_chunkIndex;
- (void)loadThumbnail;
- (id)initWithDictionary:(id)arg1;
- (id)context;
- (void)error:(id)arg1 context:(id)arg2;
- (void)eventual:(id)arg1 context:(id)arg2;
- (void)immediate:(id)arg1 context:(id)arg2 loadingFromNetwork:(_Bool)arg3;
- (void)load:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

