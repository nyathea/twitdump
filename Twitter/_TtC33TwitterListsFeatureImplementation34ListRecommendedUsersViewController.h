//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNViewController.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC33TwitterListsFeatureImplementation34ListRecommendedUsersViewController : TFNViewController
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *account;
    MISSING_TYPE *contentViewController;
    MISSING_TYPE *stateManager;
    MISSING_TYPE *scribeContext;
    MISSING_TYPE *viewModel;
    MISSING_TYPE *style;
    MISSING_TYPE *additionalSearchResultsTopInset;
    MISSING_TYPE *listFeatures;
    MISSING_TYPE *$__lazy_storage_$_summaryViewController;
    MISSING_TYPE *$__lazy_storage_$_contentStackView;
    MISSING_TYPE *$__lazy_storage_$_searchResultsController;
    MISSING_TYPE *$__lazy_storage_$_searchController;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)layoutMetricsDidChange:(id)arg1 to:(id)arg2;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, readonly) _Bool shouldAutorotate;
@property(nonatomic, readonly) unsigned long long tfn_supportedInterfaceOrientations;
@property(nonatomic, readonly) long long preferredInterfaceOrientationForPresentation;
- (_Bool)t1_showsExpandedSearchBox;
- (long long)positionForBar:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)didDismissSearchController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;

@end

