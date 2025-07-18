//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1StickerCategoryViewController, TFSTwitterSticker, TFSTwitterStickerWithVariants;

@protocol T1StickerCategoryViewControllerDelegate <NSObject>
- (TFSTwitterSticker *)stickerCategoryViewController:(T1StickerCategoryViewController *)arg1 preferredVariantForStickerWithVariants:(TFSTwitterStickerWithVariants *)arg2;
- (void)stickerCategoryViewController:(T1StickerCategoryViewController *)arg1 didSelectPreferredVariant:(TFSTwitterSticker *)arg2 fromStickerWithVariants:(TFSTwitterStickerWithVariants *)arg3;
- (void)stickerCategoryViewController:(T1StickerCategoryViewController *)arg1 didSelectSticker:(TFSTwitterSticker *)arg2;
@end

