//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC8TAVCache19TAVCacheFetcherTask : NSObject
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *progress;
    MISSING_TYPE *locationURL;
    MISSING_TYPE *error;
    MISSING_TYPE *fileSize;
    MISSING_TYPE *durationMs;
    MISSING_TYPE *url;
    MISSING_TYPE *downloadTask;
    MISSING_TYPE *didFinishSuccess;
    MISSING_TYPE *resourceLoaderHolder;
}

- (void).cxx_destruct;
- (id)init;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 assetDownloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 assetDownloadTask:(id)arg2 didLoadTimeRange:(CDStruct_e83c9415)arg3 totalTimeRangesLoaded:(id)arg4 timeRangeExpectedToLoad:(CDStruct_e83c9415)arg5;

@end

