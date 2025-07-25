//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterAppSPMMigration/NSObject-Protocol.h>

@class NSArray, NSURL, TIPImageContainer, TIPImagePipeline, TIPImageViewFetchHelper, UIImage;
@protocol TIPImageFetchRequest;

@protocol TIPImageViewFetchHelperDataSource <NSObject>

@optional
- (NSArray *)tip_additionalDebugInfoStringsForFetchHelper:(TIPImageViewFetchHelper *)arg1;
- (long long)tip_fetchOperationPriorityForFetchHelper:(TIPImageViewFetchHelper *)arg1;
- (_Bool)tip_shouldRefetchOnTargetSizingChangeForFetchHelper:(TIPImageViewFetchHelper *)arg1;
- (TIPImagePipeline *)tip_imagePipelineForFetchHelper:(TIPImageViewFetchHelper *)arg1;
- (id <TIPImageFetchRequest>)tip_imageFetchRequestForFetchHelper:(TIPImageViewFetchHelper *)arg1;
- (NSURL *)tip_imageURLForFetchHelper:(TIPImageViewFetchHelper *)arg1;
- (UIImage *)tip_imageForFetchHelper:(TIPImageViewFetchHelper *)arg1;
- (TIPImageContainer *)tip_imageContainerForFetchHelper:(TIPImageViewFetchHelper *)arg1;
@end

