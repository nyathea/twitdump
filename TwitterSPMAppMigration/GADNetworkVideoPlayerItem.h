//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVPlayerItem, NSString, NSURL;

@interface GADNetworkVideoPlayerItem : NSObject
{
    AVPlayerItem *_playerItem;
    NSURL *_videoURL;
    _Bool gcacheUsed;
    _Bool gcacheHit;
    _Bool gcacheDownloaded;
    long long _totalBytes;
    NSString *_MIMEType;
    long long cachedBytes;
    long long loadedBytes;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long loadedBytes; // @synthesize loadedBytes;
@property(readonly, nonatomic) long long cachedBytes; // @synthesize cachedBytes;
@property(readonly, nonatomic) _Bool gcacheDownloaded; // @synthesize gcacheDownloaded;
@property(readonly, nonatomic) _Bool gcacheHit; // @synthesize gcacheHit;
@property(readonly, nonatomic) _Bool gcacheUsed; // @synthesize gcacheUsed;
@property(readonly) NSString *MIMEType; // @synthesize MIMEType=_MIMEType;
@property(readonly, nonatomic) long long totalBytes; // @synthesize totalBytes=_totalBytes;
- (id)videoURL;
- (id)playerItem;
- (id)initWithVideoURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

