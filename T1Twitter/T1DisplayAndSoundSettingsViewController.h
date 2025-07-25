//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNItemsDataViewController.h>

@class NSString, T1StatusTableRowAdapter, TFNBarButtonItem, TFNBooleanItem, TFNDataViewItem, TFNTwitterAccount, TFNTwitterStatus;

@interface T1DisplayAndSoundSettingsViewController : TFNItemsDataViewController
{
    _Bool _onlyShowDarkModeSettings;
    TFNTwitterAccount *_account;
    T1StatusTableRowAdapter *_statusAdapter;
    TFNBooleanItem *_darkModeItem;
    TFNBooleanItem *_lighterItem;
    TFNBooleanItem *_darkerItem;
    TFNDataViewItem *_darkModeSettingsItem;
    TFNDataViewItem *_onItem;
    TFNDataViewItem *_offItem;
    TFNBarButtonItem *_closeButton;
    TFNTwitterStatus *_sampleStatus;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TFNTwitterStatus *sampleStatus; // @synthesize sampleStatus=_sampleStatus;
@property(readonly, nonatomic) TFNBarButtonItem *closeButton; // @synthesize closeButton=_closeButton;
@property(readonly, nonatomic) _Bool onlyShowDarkModeSettings; // @synthesize onlyShowDarkModeSettings=_onlyShowDarkModeSettings;
@property(retain, nonatomic) TFNDataViewItem *offItem; // @synthesize offItem=_offItem;
@property(retain, nonatomic) TFNDataViewItem *onItem; // @synthesize onItem=_onItem;
@property(retain, nonatomic) TFNDataViewItem *darkModeSettingsItem; // @synthesize darkModeSettingsItem=_darkModeSettingsItem;
@property(retain, nonatomic) TFNBooleanItem *darkerItem; // @synthesize darkerItem=_darkerItem;
@property(retain, nonatomic) TFNBooleanItem *lighterItem; // @synthesize lighterItem=_lighterItem;
@property(retain, nonatomic) TFNBooleanItem *darkModeItem; // @synthesize darkModeItem=_darkModeItem;
@property(retain, nonatomic) T1StatusTableRowAdapter *statusAdapter; // @synthesize statusAdapter=_statusAdapter;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (id)scribeComponent;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (double)preferredHeightForModalSheetViewController:(id)arg1 modalContentViewVisibleEdgeInsets:(struct UIEdgeInsets)arg2;
- (void)modalSheetViewController:(id)arg1 willTransitionToLayoutMode:(long long)arg2 withTransitionCoordinator:(id)arg3;
- (void)t1_appSplitExtendedContentAvailableDidChange:(_Bool)arg1;
- (void)_t1_userDefaultsDidChange;
- (void)_t1_updateDarkModeSettingsItem;
- (void)_t1_addColorItemsToArray:(id)arg1;
- (void)_t1_addImagePreviewsItemToArray:(id)arg1;
- (void)_t1_addSFVCSectionToArray:(id)arg1;
- (void)_t1_addSettingsSectionToArray:(id)arg1;
- (void)_t1_addExtendedContentSectionToArray:(id)arg1;
- (void)loadExampleStatusForAccountModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_t1_addStatusAndTextSizeSliderSectionsToArray:(id)arg1;
- (void)dataViewDidUpdate:(long long)arg1 animated:(_Bool)arg2;
- (void)update:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)init;
- (id)initWithAccount:(id)arg1;
- (id)initWithAccount:(id)arg1 onlyShowDarkModeSettings:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

