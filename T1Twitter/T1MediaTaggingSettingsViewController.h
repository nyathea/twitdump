//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNItemsDataViewController.h>

@class TFNBooleanItem, TFNTwitterAccount;

@interface T1MediaTaggingSettingsViewController : TFNItemsDataViewController
{
    TFNBooleanItem *_switchItem;
    TFNBooleanItem *_allItem;
    TFNBooleanItem *_followingItem;
    TFNTwitterAccount *_account;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void)_scribeSettingChange:(long long)arg1;
- (id)scribeComponent;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (_Bool)_sectionEnabled:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
@property(nonatomic) long long allowMediaTagging;
- (void)_updateSections;
- (unsigned long long)sectionBreaksForIndexPath:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_updateMediaTaggingSetting:(long long)arg1;
- (void)update:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)init;
- (id)initWithAccount:(id)arg1;

@end

