//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNViewController.h>

@class NSArray, NSDictionary, NSString, TASFiltersViewController, TFNNavigationBarSearchView, TFNSearchBar, TFSTwitterScribeContext, TTSSearchFiltersViewController, TTSSearchResultsParameters, TTSSearchTypeaheadViewController, TTSUserSelectionViewController, UIViewController;
@protocol TTSSearchContainerViewControllerContext;

@interface TTSSearchContainerViewController : TFNViewController
{
    _Bool _focusSearchFieldOnNextAppear;
    _Bool _shouldShowComposeTooltip;
    _Bool _shouldHideTypeahead;
    _Bool _tfn_prefersNavigationBarHidden;
    _Bool _searchInputEnabled;
    TFSTwitterScribeContext *_scribeContext;
    long long _selectedTab;
    TTSSearchResultsParameters *_searchParameters;
    TFNSearchBar *_searchBar;
    NSString *_prefilledQuery;
    NSString *_prefilledSource;
    NSString *_searchBarPlaceholder;
    NSString *_scribeParameterContext;
    TFNViewController *_searchResultsViewController;
    NSArray *_tabScribeElements;
    NSDictionary *_hashfettiImages;
    id <TTSSearchContainerViewControllerContext> _context;
    UIViewController *_visibleViewController;
    NSArray *_typeheadRightBarButtonItems;
    TTSSearchFiltersViewController *_filtersController;
    TASFiltersViewController *_filtersViewController;
    TFNNavigationBarSearchView *_navigationBarSearchView;
    TTSSearchTypeaheadViewController *_typeaheadVC;
    NSString *_uuidString;
    TTSUserSelectionViewController *_userSelectionViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TTSUserSelectionViewController *userSelectionViewController; // @synthesize userSelectionViewController=_userSelectionViewController;
@property(copy, nonatomic) NSString *uuidString; // @synthesize uuidString=_uuidString;
@property(nonatomic) _Bool searchInputEnabled; // @synthesize searchInputEnabled=_searchInputEnabled;
@property(retain, nonatomic) TTSSearchTypeaheadViewController *typeaheadVC; // @synthesize typeaheadVC=_typeaheadVC;
@property(nonatomic) _Bool tfn_prefersNavigationBarHidden; // @synthesize tfn_prefersNavigationBarHidden=_tfn_prefersNavigationBarHidden;
@property(readonly, nonatomic) TFNNavigationBarSearchView *navigationBarSearchView; // @synthesize navigationBarSearchView=_navigationBarSearchView;
@property(retain, nonatomic) TASFiltersViewController *filtersViewController; // @synthesize filtersViewController=_filtersViewController;
@property(retain, nonatomic) TTSSearchFiltersViewController *filtersController; // @synthesize filtersController=_filtersController;
@property(retain, nonatomic) NSArray *typeheadRightBarButtonItems; // @synthesize typeheadRightBarButtonItems=_typeheadRightBarButtonItems;
@property(retain, nonatomic) UIViewController *visibleViewController; // @synthesize visibleViewController=_visibleViewController;
@property(readonly, nonatomic) id <TTSSearchContainerViewControllerContext> context; // @synthesize context=_context;
@property(copy, nonatomic) NSDictionary *hashfettiImages; // @synthesize hashfettiImages=_hashfettiImages;
@property(copy, nonatomic) NSArray *tabScribeElements; // @synthesize tabScribeElements=_tabScribeElements;
@property(retain, nonatomic) TFNViewController *searchResultsViewController; // @synthesize searchResultsViewController=_searchResultsViewController;
@property(copy, nonatomic) NSString *scribeParameterContext; // @synthesize scribeParameterContext=_scribeParameterContext;
@property(nonatomic) _Bool shouldHideTypeahead; // @synthesize shouldHideTypeahead=_shouldHideTypeahead;
@property(copy, nonatomic) NSString *searchBarPlaceholder; // @synthesize searchBarPlaceholder=_searchBarPlaceholder;
@property(copy, nonatomic) NSString *prefilledSource; // @synthesize prefilledSource=_prefilledSource;
@property(copy, nonatomic) NSString *prefilledQuery; // @synthesize prefilledQuery=_prefilledQuery;
@property(nonatomic) _Bool shouldShowComposeTooltip; // @synthesize shouldShowComposeTooltip=_shouldShowComposeTooltip;
@property(nonatomic) _Bool focusSearchFieldOnNextAppear; // @synthesize focusSearchFieldOnNextAppear=_focusSearchFieldOnNextAppear;
@property(readonly, nonatomic) TFNSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(readonly, nonatomic) TTSSearchResultsParameters *searchParameters; // @synthesize searchParameters=_searchParameters;
- (id)_t1_scribeParameterSearchDetails;
- (id)scribeSection;
- (id)scribePage;
- (id)scribeImpressionParameters;
@property(copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
- (id)scribe;
- (_Bool)tui_showsActionButton;
- (_Bool)tfn_isContentScrolledToBottom;
- (_Bool)tfn_prefersNavigationBarExpandedWhenScrolledToBottom;
- (_Bool)tfn_supportsNavigationBarCollapsing;
- (_Bool)tfn_prefersNavigationBarShadowHidden;
- (long long)preferredStatusBarStyle;
- (unsigned long long)tfn_supportedInterfaceOrientations;
- (void)_t1_showLocationErrorPrompt;
- (void)_t1_pushNewSearchWithParameters:(id)arg1 selectedTab:(long long)arg2;
- (void)searchTypeaheadViewController:(id)arg1 didTapAheadWithTerm:(id)arg2;
- (void)_t1_presentTypeaheadSearchForTerm:(id)arg1 source:(id)arg2 selectedTab:(long long)arg3;
- (void)searchTypeaheadViewController:(id)arg1 didSelectEvent:(id)arg2;
- (void)searchTypeaheadViewController:(id)arg1 didSelectTopic:(id)arg2;
- (void)searchTypeaheadViewController:(id)arg1 didSelectSavedSearch:(id)arg2;
- (void)searchTypeaheadViewController:(id)arg1 didSelectRecentSearch:(id)arg2;
- (void)searchTypeaheadViewController:(id)arg1 didSelectUser:(id)arg2;
- (void)searchTypeaheadViewControllerViewWillBeginDragging:(id)arg1;
- (void)_t1_openProfileViewControllerWithTypeaheadViewController:(id)arg1 userReference:(id)arg2;
- (void)textDidChange:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
@property(readonly, nonatomic, getter=isShowingTypeahead) _Bool showingTypeahead;
- (void)_t1_addFadeTransitionAnimationToView:(id)arg1;
- (void)_t1_setVisibleViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_t1_swapToSearchViewControllerAnimated:(_Bool)arg1;
- (void)_t1_swapToTypeaheadViewControllerAnimated:(_Bool)arg1;
- (void)_t1_swapToViewController:(id)arg1 searchContainerViewHidden:(_Bool)arg2 animated:(_Bool)arg3;
- (void)searchFiltersControllerDidTapMoreFilters:(id)arg1;
- (void)searchFiltersControllerDidChangeFilters:(id)arg1;
- (void)_t1_performAdvancedSearch;
- (void)_t1_applyFilterChange;
- (void)_t1_cancelFilterChange;
- (void)_t1_removeSavedSearchMenu:(id)arg1;
- (void)_t1_addSavedSearchMenu:(id)arg1;
- (void)_t1_presentFilterMenu:(id)arg1;
- (void)didAskLocationPermissionsWithUpdateBlock:(CDUnknownBlockType)arg1;
- (void)didApplyFilters;
- (id)makeUserSelectionViewController;
- (id)userSelectionViewController:(id)arg1 nonSelectableReasonForUser:(id)arg2;
- (_Bool)userSelectionViewController:(id)arg1 canSelectUser:(id)arg2;
- (void)userSelectionViewControllerDidChangeUserSelection:(id)arg1;
- (void)_t1_presentAdvancedSearchMenu:(id)arg1;
- (void)_t1_didTapFilter:(id)arg1;
- (void)_t1_typeaheadCancelled;
- (void)_t1_performSearchWithFollowingFilterEnabled:(_Bool)arg1 locationFilterEnabled:(_Bool)arg2 filtered:(_Bool)arg3;
- (id)_t1_rightBarButtonItemsWithFill:(_Bool)arg1;
- (void)_t1_updateSearchNavigationBar:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)_t1_hasScopedVC;
- (void)_t1_searchBarBecomeFirstResponderIfNecessaryAnimated:(_Bool)arg1;
@property(nonatomic) long long selectedTab; // @synthesize selectedTab=_selectedTab;
- (id)tfn_navigationBarAccessoryView;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)viewDidFullyAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (_Bool)shouldNavigateInSearchControllerWithParameters:(id)arg1;
- (void)dealloc;
- (id)initWithParameters:(id)arg1 context:(id)arg2 searchInputEnabled:(_Bool)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

