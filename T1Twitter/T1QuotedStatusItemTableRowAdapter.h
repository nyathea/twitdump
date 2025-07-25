//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNItemsTableRowAdapter.h>

@class TFNTwitterAccount;

@interface T1QuotedStatusItemTableRowAdapter : TFNItemsTableRowAdapter
{
    TFNTwitterAccount *_account;
    CDUnknownBlockType _statusOptionsBlock;
    CDUnknownBlockType _customEventHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType customEventHandler; // @synthesize customEventHandler=_customEventHandler;
@property(copy, nonatomic) CDUnknownBlockType statusOptionsBlock; // @synthesize statusOptionsBlock=_statusOptionsBlock;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (double)_t1_quotedStatusCellHeightForStatus:(id)arg1 account:(id)arg2 width:(double)arg3 layoutMetrics:(id)arg4 withOptions:(unsigned long long)arg5;
- (id)_t1_quotedStatusCellInitializedFromDataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)_t1_statusBackgroundColorForItem:(id)arg1 withOptions:(id)arg2;
- (id)dataViewController:(id)arg1 previewConfigurationForItem:(id)arg2 withOptions:(id)arg3 location:(struct CGPoint)arg4 inCell:(id)arg5 atIndexPath:(id)arg6;
- (id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (double)dataViewController:(id)arg1 tableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 calculatedLayoutMetricsForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)init;
- (id)initWithAccount:(id)arg1 statusOptionsBlock:(CDUnknownBlockType)arg2 customEventHandler:(CDUnknownBlockType)arg3;

@end

