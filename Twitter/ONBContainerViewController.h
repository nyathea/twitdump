//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNViewController.h>

@class NSString, ONBComponentCollectionViewProvider, ONBSearchViewModel, TFNItemsDataViewController, TFNTwitterAccount, TFSTwitterScribeContext, UIView;
@protocol ONBContainerViewControllerDelegate;

@interface ONBContainerViewController : TFNViewController
{
    id <ONBContainerViewControllerDelegate> _delegate;
    _Bool _didScribeSearchTyping;
    ONBComponentCollectionViewProvider *_viewProvider;
    ONBSearchViewModel *_searchViewModel;
    TFNItemsDataViewController *_contentViewController;
    TFNItemsDataViewController *_searchResultsViewController;
    TFNTwitterAccount *_account;
    TFSTwitterScribeContext *_searchScribeContext;
    UIView *_headerView;
}

- (void).cxx_destruct;
- (void)private_updateSearchOverlayInsetForViewController:(id)arg1;
- (void)private_showOrUpdateSearchResultsViewController:(id)arg1;
- (void)private_showOrUpdateSearchTypeaheadResultsViewController:(id)arg1;
- (void)private_showSearchOverlayView:(_Bool)arg1;
- (void)private_layoutSearchResultsView;
- (void)private_layoutSearchOverlayView;
- (void)private_addSearchOverlayView;
- (void)private_updateToolbarWaiting:(_Bool)arg1;
- (void)private_updateToolbar;
- (void)private_updateFooterLayout;
- (void)private_updateTableHeaderLayout;
- (void)private_scribeSearchAction:(id)arg1 forElement:(id)arg2;
- (void)private_handleStartTextEditing;
- (void)updateDetailNumberValue:(id)arg1;
- (void)updateDetailRichText:(id)arg1;
- (void)updateNextButtonEnabled:(_Bool)arg1;
- (void)updateNextButtonText:(id)arg1;
- (void)private_skipTapped:(id)arg1;
- (void)private_nextTapped:(id)arg1;
- (void)componentsViewModelDidUpdate:(id)arg1 withUpdateType:(long long)arg2;
- (void)searchViewModelDidCancel:(id)arg1 fromButton:(_Bool)arg2;
- (void)searchViewModelDidSearch:(id)arg1;
- (void)searchViewModelTextDidEndEditing:(id)arg1;
- (void)searchViewModel:(id)arg1 textDidChange:(id)arg2;
- (void)searchViewModelTextDidBeginEditing:(id)arg1;
- (void)searchViewModelSearchButtonTapped:(id)arg1;
- (void)stopWaiting;
- (void)waitWithMessage:(id)arg1;
- (_Bool)canWaitWithMessage:(id)arg1;
- (id)ocf_voiceoverPresentationAnnouncement;
- (id)tfn_customizeLayoutMetrics:(id)arg1 forChildViewController:(id)arg2;
- (long long)tfn_preferredToolbarVisibility;
- (_Bool)tfn_logoTitleViewShown;
- (_Bool)tfn_prefersNavigationBarHidden;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithAccount:(id)arg1 componentsViewModel:(id)arg2 searchSpec:(id)arg3 contentViewController:(id)arg4 searchScribeContext:(id)arg5 showSeparator:(_Bool)arg6 delegate:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

