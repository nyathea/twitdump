//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNItemsDataViewController.h>

@class MISSING_TYPE, NSArray;

@interface T1DataUsageSettingsViewController : TFNItemsDataViewController
{
    MISSING_TYPE *account;
    MISSING_TYPE *dataSaverSettings;
    MISSING_TYPE *mediaCacheViewController;
    MISSING_TYPE *webViewCacheViewController;
    MISSING_TYPE *searchableFeatures;
    MISSING_TYPE *$__lazy_storage_$_dataSaverItem;
    MISSING_TYPE *$__lazy_storage_$_dataSaverDescriptionItem;
    MISSING_TYPE *$__lazy_storage_$_imageQualityDescriptionItem;
    MISSING_TYPE *$__lazy_storage_$_highQualityImagesUploadDescriptionItem;
    MISSING_TYPE *$__lazy_storage_$_videoQualityDescriptionItem;
    MISSING_TYPE *$__lazy_storage_$_highQualityVideoUploadsDescriptionItem;
    MISSING_TYPE *$__lazy_storage_$_videoAutoplayHelpItem;
    MISSING_TYPE *$__lazy_storage_$_videoAutoplayDescriptionItem;
}

- (void).cxx_destruct;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (void)mediaSettingsDidChange:(id)arg1;
- (void)dataSaverSettingsDidChange:(id)arg1;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (void)update:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithAccount:(id)arg1;
@property(nonatomic, copy) NSArray *searchableFeatures;

@end

