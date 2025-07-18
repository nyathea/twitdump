//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNItemsDataViewController.h>

@class MISSING_TYPE, TwitterAdvancedSearch;
@protocol TASFiltersViewControllerDelegate;

@interface TASFiltersViewController : TFNItemsDataViewController
{
    MISSING_TYPE *filtersDelegate;
    MISSING_TYPE *advancedSearch;
    MISSING_TYPE *searchFilter;
    MISSING_TYPE *searchConditions;
    MISSING_TYPE *featureSwitches;
}

- (void).cxx_destruct;
- (id)initWithCollectionViewLayout:(id)arg1;
- (void)collapseModalSheet;
- (void)expandModalSheet;
- (void)updateTweetAuthorWithAuthor:(id)arg1;
- (void)menuActionSheetAdapter:(id)arg1 didSelectActionItem:(id)arg2 atIndexPath:(id)arg3;
- (void)dataViewDidUpdate:(long long)arg1 animated:(_Bool)arg2;
- (void)didTapReset;
- (void)update:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithAccountID:(id)arg1 advancedSearch:(id)arg2 filtersDelegate:(id)arg3;
@property(nonatomic, retain) TwitterAdvancedSearch *advancedSearch; // @synthesize advancedSearch;
@property(nonatomic) __weak id <TASFiltersViewControllerDelegate> filtersDelegate; // @synthesize filtersDelegate;

@end

