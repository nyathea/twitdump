//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNItemsDataViewSectionController.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC23T1TwitterDirectMessages48DirectMessageInboxConversationsSectionController : TFNItemsDataViewSectionController
{
    MISSING_TYPE *supportedEditActions;
    MISSING_TYPE *flipEditActionIcon;
    MISSING_TYPE *noMoreSearchResults;
    MISSING_TYPE *cellType;
    MISSING_TYPE *conversationAdapter;
    MISSING_TYPE *messageResultAdapter;
    MISSING_TYPE *markAsViewedHelper;
    MISSING_TYPE *account;
    MISSING_TYPE *dmFeatureSwitches;
    MISSING_TYPE *delegate;
}

- (void).cxx_destruct;
- (id)init;
- (void)markAsViewedHelper:(id)arg1 didViewCells:(id)arg2;
- (void)willBeginEditingItem:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)canEditItem:(id)arg1 atIndexPath:(id)arg2;
- (void)didSelectItem:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)shouldSelectItem:(id)arg1 atIndexPath:(id)arg2;
- (id)previewConfigurationForItem:(id)arg1 location:(struct CGPoint)arg2 inCell:(id)arg3 atIndexPath:(id)arg4;
- (void)dataViewDidEndDisplaying;
- (void)willDisplayCell:(id)arg1 forItem:(id)arg2 atIndexPath:(id)arg3;
- (void)didMoveToDataViewController:(id)arg1;

@end

