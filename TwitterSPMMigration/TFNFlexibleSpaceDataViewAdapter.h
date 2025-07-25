//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TFNFlexibleSpaceHelper;

@interface TFNFlexibleSpaceDataViewAdapter
{
    _Bool _isCalculatingFlexibleHeight;
    TFNFlexibleSpaceHelper *_helper;
}

- (void).cxx_destruct;
- (double)private_heightForItem:(id)arg1 inDataViewController:(id)arg2 atIndexPath:(id)arg3 withSectionCount:(long long)arg4 numberOfItemsInSectionBlock:(CDUnknownBlockType)arg5 itemHeightBlock:(CDUnknownBlockType)arg6 additionalItemHeightBlock:(CDUnknownBlockType)arg7 emptySectionHeightBlock:(CDUnknownBlockType)arg8;
- (_Bool)dataViewController:(id)arg1 shouldSelectItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 collectionViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (struct CGSize)dataViewController:(id)arg1 collectionViewSizeForItem:(id)arg2 constrainedToSize:(struct CGSize)arg3 withOptions:(id)arg4 atIndexPath:(id)arg5;
- (id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (double)dataViewController:(id)arg1 tableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (void)_tfn_keyboardChanged:(id)arg1;
- (void)dealloc;
- (id)init;

@end

