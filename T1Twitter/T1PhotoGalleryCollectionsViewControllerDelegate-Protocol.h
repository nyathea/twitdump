//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/NSObject-Protocol.h>

@class PHAssetCollection, T1PhotoGalleryCollectionsViewController;

@protocol T1PhotoGalleryCollectionsViewControllerDelegate <NSObject>

@optional
- (void)photoGalleryCollectionsViewControllerDidCancel:(T1PhotoGalleryCollectionsViewController *)arg1;
- (void)photoGalleryCollectionsViewController:(T1PhotoGalleryCollectionsViewController *)arg1 didSelectAssetCollection:(PHAssetCollection *)arg2;
@end

