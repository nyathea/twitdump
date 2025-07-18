//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PTVEmptyTableView;
@protocol PTVFollowingUserModalTableViewControllerDelegate;

@interface PTVFollowingUserModalTableViewController
{
    id <PTVFollowingUserModalTableViewControllerDelegate> _tableViewDelegate;
    PTVEmptyTableView *_emptyTableView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PTVEmptyTableView *emptyTableView; // @synthesize emptyTableView=_emptyTableView;
@property(nonatomic) __weak id <PTVFollowingUserModalTableViewControllerDelegate> tableViewDelegate; // @synthesize tableViewDelegate=_tableViewDelegate;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didSelectDataRowAtIndexPath:(id)arg1;
- (void)stateChanged;
- (_Bool)shouldLoad;
- (id)dataCellForRowAtIndexPath:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (id)initWithLoggedInUser:(id)arg1 userId:(id)arg2 style:(long long)arg3;

@end

