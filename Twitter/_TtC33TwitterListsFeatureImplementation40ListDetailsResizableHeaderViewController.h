//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/T1ResizableHeaderViewController.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC33TwitterListsFeatureImplementation40ListDetailsResizableHeaderViewController : T1ResizableHeaderViewController
{
    MISSING_TYPE *listUpdateDelegate;
    MISSING_TYPE *account;
    MISSING_TYPE *bottomSeparatorView;
    MISSING_TYPE *mutationsManager;
    MISSING_TYPE *pinnedTimelinesRepository;
    MISSING_TYPE *viewModel;
    MISSING_TYPE *rankingMode;
    MISSING_TYPE *listFeatures;
}

- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithHeaderViewClass:(Class)arg1 scribe:(id)arg2;
- (id)initWithHeaderViewConstructor:(CDUnknownBlockType)arg1 scribe:(id)arg2;
- (void)resizableHeaderViewDidTapBannerImage:(id)arg1;
- (void)blockListDidChangeWithNotification:(id)arg1;
- (void)resizableHeaderView:(id)arg1 didTapMoreActionsButton:(id)arg2;
- (void)resizableHeaderView:(id)arg1 didTapShareHeaderButton:(id)arg2;
- (void)resizableHeaderViewDidTapSearchButton:(id)arg1;
- (void)resizableHeaderViewDidTapBackButton:(id)arg1;
- (long long)mediaTransitionPreviewContentModeForObject:(id)arg1;
- (struct CGRect)mediaTransitionPreviewFrameInWindow:(id)arg1 forObject:(id)arg2;
- (void)createAndEditListViewController:(id)arg1 didCreateListID:(long long)arg2;
- (void)createAndEditListViewController:(id)arg1 didUpdateListMembership:(long long)arg2;
- (void)createAndEditListViewControllerDidDeleteList:(id)arg1;
- (id)scribePage;
- (id)scribe;

@end

