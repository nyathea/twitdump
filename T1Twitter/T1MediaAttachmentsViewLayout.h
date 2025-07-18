//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSArray, TFSObjectCache;

@interface T1MediaAttachmentsViewLayout : UICollectionViewFlowLayout
{
    NSArray *_reloadingItems;
    NSArray *_insertingItems;
    NSArray *_deletingItems;
    TFSObjectCache *_attributesCache;
    struct UIEdgeInsets _cellMarginInsets;
    struct CGRect _oldBounds;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TFSObjectCache *attributesCache; // @synthesize attributesCache=_attributesCache;
@property(retain, nonatomic) NSArray *deletingItems; // @synthesize deletingItems=_deletingItems;
@property(retain, nonatomic) NSArray *insertingItems; // @synthesize insertingItems=_insertingItems;
@property(retain, nonatomic) NSArray *reloadingItems; // @synthesize reloadingItems=_reloadingItems;
@property(nonatomic) struct CGRect oldBounds; // @synthesize oldBounds=_oldBounds;
@property(nonatomic) struct UIEdgeInsets cellMarginInsets; // @synthesize cellMarginInsets=_cellMarginInsets;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (void)invalidateLayout;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (void)finalizeCollectionViewUpdates;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (void)finalizeAnimatedBoundsChange;
- (void)prepareForAnimatedBoundsChange:(struct CGRect)arg1;
- (_Bool)_t1_isReloadingForIndexPath:(id)arg1;
- (_Bool)_t1_isDeletingForIndexPath:(id)arg1;
- (_Bool)_t1_isInsertingForIndexPath:(id)arg1;
- (id)_t1_alignLayoutAttributesForItemToTop:(id)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)init;

@end

