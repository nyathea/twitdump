//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSString, PTVBroadcast, PTVBroadcastModerationReport, PTVTitleAndActionTableHeaderView;
@protocol PTVBroadcastModerationReportTableViewControllerDelegate, PTVLoggedInUserProtocol;

@interface PTVBroadcastModerationReportTableViewController
{
    PTVTitleAndActionTableHeaderView *_messageHeaderView;
    _Bool _useLargeChatFont;
    id <PTVBroadcastModerationReportTableViewControllerDelegate> _delegate;
    PTVBroadcast *_broadcast;
    PTVBroadcastModerationReport *_report;
    id <PTVLoggedInUserProtocol> _loggedInUser;
    NSString *_cursor;
    NSMutableDictionary *_cachedCellHeightsByWidth;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *cachedCellHeightsByWidth; // @synthesize cachedCellHeightsByWidth=_cachedCellHeightsByWidth;
@property(readonly, nonatomic) NSString *cursor; // @synthesize cursor=_cursor;
@property(readonly, nonatomic) id <PTVLoggedInUserProtocol> loggedInUser; // @synthesize loggedInUser=_loggedInUser;
@property(readonly, nonatomic) PTVBroadcastModerationReport *report; // @synthesize report=_report;
@property(readonly, nonatomic) PTVBroadcast *broadcast; // @synthesize broadcast=_broadcast;
@property(nonatomic) _Bool useLargeChatFont; // @synthesize useLargeChatFont=_useLargeChatFont;
@property(nonatomic) __weak id <PTVBroadcastModerationReportTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_propagateSelectionChanges;
- (void)deselectAllMutedRows;
- (void)selectAllMutedRows;
- (void)showBlockedButtonPressed:(id)arg1;
- (void)addModeratorsButtonPressed:(id)arg1;
- (void)setSelectionStateForAllRowsForUserAtIndexPath:(id)arg1 selected:(_Bool)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)didSelectDataRowAtIndexPath:(id)arg1;
- (id)dataCellForRowAtIndexPath:(id)arg1;
- (long long)numberOfDataRowsInSection:(long long)arg1;
- (id)cachedCellHeightsForCurrentTableWidth;
- (double)heightForMessageAtIndexPath:(id)arg1;
- (double)heightForDataRowAtIndexPath:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (unsigned long long)numberOfEvents;
- (unsigned long long)numberOfUnmutedEvents;
- (id)headerViewStringForSection:(long long)arg1;
- (id)eventAtIndexPath:(id)arg1;
- (id)userAtIndexPath:(id)arg1;
- (void)mainQueue_handleUsersHydrated:(id)arg1;
- (void)handleUsersHydrated:(id)arg1;
- (void)processModerationReportResults:(id)arg1;
- (void)stateChanged;
- (_Bool)shouldLoad;
- (void)setData:(id)arg1;
- (void)error:(id)arg1 context:(id)arg2;
- (id)context;
- (void)load:(long long)arg1;
- (void)viewDidLoad;
- (void)refilter;
- (unsigned long long)selectedUserCount;
- (id)usersForSelectedIndexPaths;
- (id)initWithBroadcast:(id)arg1 loggedInUser:(id)arg2;

@end

