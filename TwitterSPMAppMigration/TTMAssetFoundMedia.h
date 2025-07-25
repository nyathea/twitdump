//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, TFSTwitterFoundMediaItem;

@interface TTMAssetFoundMedia
{
    TFSTwitterFoundMediaItem *_foundMediaItem;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TFSTwitterFoundMediaItem *foundMediaItem; // @synthesize foundMediaItem=_foundMediaItem;
- (_Bool)supportsAltText;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)renderAnimatedGIFImageWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_saveLocalBackupToFilePath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveAssetToLibraryWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_generatePreviewWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)sourceURLString;
- (id)mediaMetadata;
- (void)renderFinalDataWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (struct CGSize)estimatedPreviewSizeThatFits:(struct CGSize)arg1;
- (struct CGSize)assetDimensions;
- (void)renderPreviewAnimatedGIFImageWithOptions:(id)arg1 firstFrameCallback:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, copy, nonatomic) NSString *providerAltText;
- (unsigned long long)sourceType;
- (id)initWithFoundMediaItem:(id)arg1;

@end

