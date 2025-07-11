//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterAppSPMMigration/NSObject-Protocol.h>

@class NSError, NSString, NSURL, TIPImageContainer, TIPImageViewFetchHelper, UIImage;
@protocol TIPImageFetchResult;

@protocol TIPImageViewFetchHelperDelegate <NSObject>

@optional
- (void)tip_fetchHelper:(TIPImageViewFetchHelper *)arg1 didUpdateDisplayedImage:(UIImage *)arg2 fromSourceDimensions:(struct CGSize)arg3 isFinal:(_Bool)arg4;
- (_Bool)tip_fetchHelper:(TIPImageViewFetchHelper *)arg1 shouldReloadAfterDifferentFetchCompletedWithImage:(UIImage *)arg2 dimensions:(struct CGSize)arg3 identifier:(NSString *)arg4 URL:(NSURL *)arg5 treatedAsPlaceholder:(_Bool)arg6 manuallyStored:(_Bool)arg7;
- (void)tip_fetchHelperDidStartLoadingFromNetwork:(TIPImageViewFetchHelper *)arg1;
- (void)tip_fetchHelperDidReset:(TIPImageViewFetchHelper *)arg1;
- (void)tip_fetchHelper:(TIPImageViewFetchHelper *)arg1 didFailToLoadFinalImage:(NSError *)arg2;
- (void)tip_fetchHelper:(TIPImageViewFetchHelper *)arg1 didLoadFinalImageFromSource:(long long)arg2;
- (void)tip_fetchHelper:(TIPImageViewFetchHelper *)arg1 didUpdateDisplayedImageContainer:(TIPImageContainer *)arg2 fromSourceDimensions:(struct CGSize)arg3 isFinal:(_Bool)arg4;
- (void)tip_fetchHelper:(TIPImageViewFetchHelper *)arg1 didUpdateProgress:(float)arg2;
- (void)tip_fetchHelperDidStartLoading:(TIPImageViewFetchHelper *)arg1;
- (_Bool)tip_fetchHelper:(TIPImageViewFetchHelper *)arg1 shouldReloadAfterDifferentFetchCompletedWithImageContainer:(TIPImageContainer *)arg2 dimensions:(struct CGSize)arg3 identifier:(NSString *)arg4 URL:(NSURL *)arg5 treatedAsPlaceholder:(_Bool)arg6 manuallyStored:(_Bool)arg7;
- (_Bool)tip_fetchHelper:(TIPImageViewFetchHelper *)arg1 shouldLoadProgressivelyWithIdentifier:(NSString *)arg2 URL:(NSURL *)arg3 imageType:(NSString *)arg4 originalDimensions:(struct CGSize)arg5;
- (_Bool)tip_fetchHelper:(TIPImageViewFetchHelper *)arg1 shouldContinueLoadingAfterFetchingPreviewImageResult:(id <TIPImageFetchResult>)arg2;
- (_Bool)tip_fetchHelper:(TIPImageViewFetchHelper *)arg1 shouldUpdateImageWithPreviewImageResult:(id <TIPImageFetchResult>)arg2;
@end

