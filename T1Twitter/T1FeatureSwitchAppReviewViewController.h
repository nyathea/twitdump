//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNItemsDataViewController.h>

@class TFNTwitterAccount;

@interface T1FeatureSwitchAppReviewViewController : TFNItemsDataViewController
{
    TFNTwitterAccount *_account;
}

- (void).cxx_destruct;
- (id)scribePage;
- (id)scribe;
- (long long)dashContentItemType;
- (void)commitEditingStyle:(long long)arg1 forItem:(id)arg2 atIndexPath:(id)arg3;
- (long long)editingStyleForItem:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)canEditItem:(id)arg1 atIndexPath:(id)arg2;
- (void)didSelectItem:(id)arg1 atIndexPath:(id)arg2;
- (void)update:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_t1_notifyUpdatedFeatureSwitches:(id)arg1;
- (void)_t1_presentFeatureSwitches:(id)arg1 overrideForKey:(id)arg2 value:(id)arg3;
- (void)_t1_addFeatureSwitchOverrideToSection:(long long)arg1;
- (void)_t1_addFeatureSwitchOverrideAction:(id)arg1;
- (id)_t1_overridesForFeatureSwitches:(id)arg1;
- (id)_t1_featureSwitchesForSection:(long long)arg1;
- (id)init;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)initWithAccount:(id)arg1;

@end

