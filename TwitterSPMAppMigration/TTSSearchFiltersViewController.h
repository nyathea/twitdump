//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNItemsDataViewController.h>

@class NSDictionary, NSString, TFNBooleanItem, TFNSettingsNavigationItem;
@protocol TTSSearchFiltersViewControllerContext, TTSSearchFiltersViewControllerDelegate;

@interface TTSSearchFiltersViewController : TFNItemsDataViewController
{
    _Bool _locationFilterEnabled;
    _Bool _followingFilterEnabled;
    id <TTSSearchFiltersViewControllerDelegate> _delegate;
    NSDictionary *_scribeParameters;
    id <TTSSearchFiltersViewControllerContext> _context;
    TFNBooleanItem *_socialFilterNoneItem;
    TFNBooleanItem *_socialFilterSearcherFollowsItem;
    TFNBooleanItem *_socialFilterLocationNoneItem;
    TFNBooleanItem *_socialFilterLocationNearMeItem;
    TFNSettingsNavigationItem *_fromFilterItem;
    TFNSettingsNavigationItem *_timeFilterItem;
    TFNSettingsNavigationItem *_languageFilterItem;
    TFNSettingsNavigationItem *_postActivityFilterItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TFNSettingsNavigationItem *postActivityFilterItem; // @synthesize postActivityFilterItem=_postActivityFilterItem;
@property(retain, nonatomic) TFNSettingsNavigationItem *languageFilterItem; // @synthesize languageFilterItem=_languageFilterItem;
@property(retain, nonatomic) TFNSettingsNavigationItem *timeFilterItem; // @synthesize timeFilterItem=_timeFilterItem;
@property(retain, nonatomic) TFNSettingsNavigationItem *fromFilterItem; // @synthesize fromFilterItem=_fromFilterItem;
@property(retain, nonatomic) TFNBooleanItem *socialFilterLocationNearMeItem; // @synthesize socialFilterLocationNearMeItem=_socialFilterLocationNearMeItem;
@property(retain, nonatomic) TFNBooleanItem *socialFilterLocationNoneItem; // @synthesize socialFilterLocationNoneItem=_socialFilterLocationNoneItem;
@property(retain, nonatomic) TFNBooleanItem *socialFilterSearcherFollowsItem; // @synthesize socialFilterSearcherFollowsItem=_socialFilterSearcherFollowsItem;
@property(retain, nonatomic) TFNBooleanItem *socialFilterNoneItem; // @synthesize socialFilterNoneItem=_socialFilterNoneItem;
@property(retain, nonatomic) id <TTSSearchFiltersViewControllerContext> context; // @synthesize context=_context;
@property(nonatomic) _Bool followingFilterEnabled; // @synthesize followingFilterEnabled=_followingFilterEnabled;
@property(nonatomic) _Bool locationFilterEnabled; // @synthesize locationFilterEnabled=_locationFilterEnabled;
@property(retain, nonatomic) NSDictionary *scribeParameters; // @synthesize scribeParameters=_scribeParameters;
@property(nonatomic) __weak id <TTSSearchFiltersViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)menuActionSheetAdapter:(id)arg1 didSelectActionItem:(id)arg2 atIndexPath:(id)arg3;
- (id)scribeComponent;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (unsigned long long)tfn_supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)init;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

