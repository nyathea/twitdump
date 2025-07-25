//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNItemsTableRowAdapter.h>

@class TFNTwitterAccount, TFSTwitterScribeContext, TUCViewRegistry;

@interface T1UnifiedCardItemTableRowAdapter : TFNItemsTableRowAdapter
{
    TFSTwitterScribeContext *_scribeContext;
    TFNTwitterAccount *_account;
    TUCViewRegistry *_viewRegistry;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TUCViewRegistry *viewRegistry; // @synthesize viewRegistry=_viewRegistry;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
- (id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 cellLayoutObjectIdentifierForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 cellLayoutForItem:(id)arg2 withOptions:(id)arg3 previousLayout:(id)arg4 atIndexPath:(id)arg5;
- (id)dataViewController:(id)arg1 objectIdentifierForItem:(id)arg2 withOptions:(id)arg3;
- (id)initWithAccount:(id)arg1 viewRegistry:(id)arg2 scribeContext:(id)arg3;
- (id)init;

@end

