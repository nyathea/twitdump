//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterAppSPMMigration/NSObject-Protocol.h>

@class AVPlayerItem, NSString, NSURL;

@protocol GADAVPlayerItemProvider <NSObject>
@property(readonly) NSString *MIMEType;
@property(readonly, nonatomic) long long loadedBytes;
@property(readonly, nonatomic) long long cachedBytes;
@property(readonly, nonatomic) long long totalBytes;
@property(readonly, nonatomic) _Bool gcacheDownloaded;
@property(readonly, nonatomic) _Bool gcacheHit;
@property(readonly, nonatomic) _Bool gcacheUsed;
- (AVPlayerItem *)playerItem;
- (NSURL *)videoURL;
@end

