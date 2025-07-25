//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL, TIPImageDiskCacheTemporaryFile, TIPPartialImage;

@interface TIPImageFetchDownloadRequest : NSObject
{
    NSURL *_imageDownloadURL;
    NSString *_imageDownloadIdentifier;
    NSDictionary *_imageDownloadHeaders;
    long long _imageDownloadOptions;
    double _imageDownloadTTL;
    CDUnknownBlockType _imageDownloadHydrationBlock;
    CDUnknownBlockType _imageDownloadAuthorizationBlock;
    NSDictionary *_decoderConfigMap;
    long long _targetContentMode;
    NSString *_imageDownloadLastModified;
    TIPPartialImage *_imageDownloadPartialImageForResuming;
    TIPImageDiskCacheTemporaryFile *_imageDownloadTemporaryFileForResuming;
    long long _imageDownloadPriority;
    struct CGSize _targetDimensions;
}

- (void).cxx_destruct;
@property(nonatomic) long long imageDownloadPriority; // @synthesize imageDownloadPriority=_imageDownloadPriority;
@property(retain) TIPImageDiskCacheTemporaryFile *imageDownloadTemporaryFileForResuming; // @synthesize imageDownloadTemporaryFileForResuming=_imageDownloadTemporaryFileForResuming;
@property(retain) TIPPartialImage *imageDownloadPartialImageForResuming; // @synthesize imageDownloadPartialImageForResuming=_imageDownloadPartialImageForResuming;
@property(copy) NSString *imageDownloadLastModified; // @synthesize imageDownloadLastModified=_imageDownloadLastModified;
@property(nonatomic) long long targetContentMode; // @synthesize targetContentMode=_targetContentMode;
@property(nonatomic) struct CGSize targetDimensions; // @synthesize targetDimensions=_targetDimensions;
@property(copy, nonatomic) NSDictionary *decoderConfigMap; // @synthesize decoderConfigMap=_decoderConfigMap;
@property(copy, nonatomic) CDUnknownBlockType imageDownloadAuthorizationBlock; // @synthesize imageDownloadAuthorizationBlock=_imageDownloadAuthorizationBlock;
@property(copy, nonatomic) CDUnknownBlockType imageDownloadHydrationBlock; // @synthesize imageDownloadHydrationBlock=_imageDownloadHydrationBlock;
@property(nonatomic) double imageDownloadTTL; // @synthesize imageDownloadTTL=_imageDownloadTTL;
@property(nonatomic) long long imageDownloadOptions; // @synthesize imageDownloadOptions=_imageDownloadOptions;
@property(copy, nonatomic) NSDictionary *imageDownloadHeaders; // @synthesize imageDownloadHeaders=_imageDownloadHeaders;
@property(readonly, copy, nonatomic) NSString *imageDownloadIdentifier; // @synthesize imageDownloadIdentifier=_imageDownloadIdentifier;
@property(readonly, nonatomic) NSURL *imageDownloadURL; // @synthesize imageDownloadURL=_imageDownloadURL;
- (id)initWithRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

