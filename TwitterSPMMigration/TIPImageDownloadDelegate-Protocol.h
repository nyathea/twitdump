//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/NSObject-Protocol.h>

@class NSData, NSError, NSObject, NSString, TIPImageContainer, TIPImageDiskCacheTemporaryFile, TIPImagePipeline, TIPPartialImage;
@protocol OS_dispatch_queue, TIPImageDownloadContext, TIPImageDownloadRequest;

@protocol TIPImageDownloadDelegate <NSObject>
- (void)imageDownload:(id <TIPImageDownloadContext>)arg1 didCompleteWithPartialImage:(TIPPartialImage *)arg2 lastModified:(NSString *)arg3 byteSize:(unsigned long long)arg4 imageType:(NSString *)arg5 image:(TIPImageContainer *)arg6 imageData:(NSData *)arg7 imageRenderLatency:(double)arg8 statusCode:(long long)arg9 error:(NSError *)arg10;
- (void)imageDownload:(id <TIPImageDownloadContext>)arg1 didAppendBytes:(unsigned long long)arg2 toPartialImage:(TIPPartialImage *)arg3 result:(long long)arg4;
- (void)imageDownload:(id <TIPImageDownloadContext>)arg1 didResetFromPartialImage:(TIPPartialImage *)arg2;
- (void)imageDownloadDidStart:(id <TIPImageDownloadContext>)arg1;
- (TIPImageDiskCacheTemporaryFile *)regenerateImageDownloadTemporaryFileForImageDownload:(id <TIPImageDownloadContext>)arg1;
- (TIPImagePipeline *)imagePipeline;
- (NSObject<OS_dispatch_queue> *)imageDownloadDelegateQueue;
- (id <TIPImageDownloadRequest>)imageDownloadRequest;
@end

