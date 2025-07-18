//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PTVTableView;
@protocol PTVTableViewRefresh;

@interface PTVTableViewController
{
    long long _tableViewStyle;
    _Bool _shouldScrollToTopWhenStatusBarTapped;
    _Bool _shouldTrackMaxRowScrolled;
    id <PTVTableViewRefresh> _refreshControl;
    unsigned long long _maxRowScrolled;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long maxRowScrolled; // @synthesize maxRowScrolled=_maxRowScrolled;
@property(nonatomic) _Bool shouldTrackMaxRowScrolled; // @synthesize shouldTrackMaxRowScrolled=_shouldTrackMaxRowScrolled;
@property(nonatomic) _Bool shouldScrollToTopWhenStatusBarTapped; // @synthesize shouldScrollToTopWhenStatusBarTapped=_shouldScrollToTopWhenStatusBarTapped;
@property(retain, nonatomic) id <PTVTableViewRefresh> refreshControl; // @synthesize refreshControl=_refreshControl;
- (_Bool)isAtTop;
- (void)scrollToTopAnimated:(_Bool)arg1;
- (void)statusBarTapped;
- (id)emptyCellForRowAtIndexPath:(id)arg1;
- (id)loadingCellForRowAtIndexPath:(id)arg1;
- (id)errorCellForRowAtIndexPath:(id)arg1;
- (id)dataCellForRowAtIndexPath:(id)arg1;
- (void)accessoryButtonTappedForDataRowWithIndexPath:(id)arg1;
- (void)didSelectErrorRowAtIndexPath:(id)arg1;
- (void)didSelectDataRowAtIndexPath:(id)arg1;
- (void)didSelectLoadingRowAtIndexPath:(id)arg1;
- (void)didSelectEmptyRowAtIndexPath:(id)arg1;
- (void)didEndDisplayingDataCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)willDisplayDataCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (unsigned long long)rankedPositionOfIndexPath:(id)arg1;
- (unsigned long long)verticalPositionOfIndexPath:(id)arg1;
- (unsigned long long)horizontalPositionOfIndexPath:(id)arg1;
- (double)heightForDataRowAtIndexPath:(id)arg1;
- (double)heightForErrorRowAtIndexPath:(id)arg1;
- (double)heightForLoadingRowAtIndexPath:(id)arg1;
- (double)heightForEmptyRowAtIndexPath:(id)arg1;
- (long long)numberOfDataRowsInSection:(long long)arg1;
- (long long)numberOfErrorRowsInSection:(long long)arg1;
- (long long)numberOfLoadingRowsInSection:(long long)arg1;
- (long long)numberOfEmptyRowsInSection:(long long)arg1;
- (void)prepareForDataReloadFromPullToRefresh;
- (void)refreshTriggered;
- (id)objectAtIndexPath:(id)arg1;
- (void)reloadRowsHeight;
- (void)reloadData;
@property(readonly, nonatomic) PTVTableView *tableView;
- (id)initWithStyle:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)isLoadingChanged;
- (void)stateChanged;
- (void)setData:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

