//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNViewController.h>

@class MISSING_TYPE;

@interface _TtC33TwitterListsFeatureImplementation37ListsDiscoveryContainerViewController : TFNViewController
{
    MISSING_TYPE *account;
    MISSING_TYPE *discoveryViewController;
    MISSING_TYPE *listFeatures;
    MISSING_TYPE *contentViewController;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)scribePage;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (void)didTapActionFromBarButtonItemWithSender:(id)arg1;
- (id)tui_buttonItemForCategory:(unsigned long long)arg1;
- (id)tui_actionButtonItemCategories;
- (_Bool)tui_showsActionButton;
- (void)createAndEditListViewController:(id)arg1 didCreateListID:(long long)arg2;
- (void)createAndEditListViewController:(id)arg1 didUpdateListMembership:(long long)arg2;
- (void)createAndEditListViewControllerDidDeleteList:(id)arg1;
- (void)t1_appSplitModeDidChangeFromPrevious:(long long)arg1 toCurrent:(long long)arg2;

@end

