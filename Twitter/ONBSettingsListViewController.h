//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, OCFCondition, ONBComponentTransformerController, TFNPillControl, TFNTwitterAccount;
@protocol OCFNavigationLinkHandler, OCFSubtaskDataProvider, ONBComponentListViewControllerDelegate, ONBSettingsListViewControllerDelegate;

@interface ONBSettingsListViewController
{
    id <ONBSettingsListViewControllerDelegate> _delegate;
    id <ONBComponentListViewControllerDelegate> _componentListDelegate;
    id <OCFNavigationLinkHandler> _navigationLinkHandler;
    id <OCFSubtaskDataProvider> _subtaskDataProvider;
    OCFCondition *_nextLinkEnableCondition;
    _Bool _shouldDisplayCellBorders;
    NSArray *_mutableSettings;
    NSString *_scrollHint;
    ONBComponentTransformerController *_dataItemProvider;
    TFNPillControl *_pillControl;
    TFNTwitterAccount *_account;
}

- (void).cxx_destruct;
- (void)private_updateSections;
- (void)private_updateSubmittability;
- (void)abandon;
- (void)submit;
- (void)private_scrollPageDown;
- (_Bool)private_isPageScrolledToBottom;
- (double)private_bottomContentOffsetY;
- (void)private_updatePillVisibilityForced:(_Bool)arg1;
- (void)private_updatePillPosition;
- (double)private_pillPresentationOffset;
- (void)pillControlTapped:(id)arg1;
- (void)scrollViewDidProgrammaticallyScrollToBottom:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onboardingComponentTransformer:(id)arg1 didUpdateComponent:(id)arg2 needsReload:(_Bool)arg3;
- (id)subtaskDataProviderForOnboardingComponentTransformer:(id)arg1;
- (id)navigationLinkHandlerForOnboardingComponentTransformer:(id)arg1;
- (void)onboardingComponentTransformer:(id)arg1 presentViewController:(id)arg2;
- (id)onboardingComponentTransformer:(id)arg1 pickerViewControllerWithTitle:(id)arg2 dataSource:(id)arg3 options:(unsigned long long)arg4 delegate:(id)arg5;
- (id)onboardingComponentTransformer:(id)arg1 componentListViewControllerWithTitle:(id)arg2 mutableComponents:(id)arg3 delegate:(id)arg4;
- (void)onboardingComponentTransformerController:(id)arg1 didTapShowMore:(id)arg2;
- (long long)tfn_preferredToolbarVisibility;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) NSArray *settings;
- (id)initWithAccount:(id)arg1 componentsViewModel:(id)arg2 mutableSettings:(id)arg3 scrollHint:(id)arg4 showMore:(id)arg5 shouldDisplayCellBorders:(_Bool)arg6 nextLinkEnableCondition:(id)arg7 navigationLinkHandler:(id)arg8 subtaskDataProvider:(id)arg9 delegate:(id)arg10;
- (id)initWithAccount:(id)arg1 mutableSettings:(id)arg2 title:(id)arg3 shouldDisplayCellBorders:(_Bool)arg4 navigationLinkHandler:(id)arg5 subtaskDataProvider:(id)arg6 delegate:(id)arg7;
- (id)initWithAccount:(id)arg1 componentsViewModel:(id)arg2 settings:(id)arg3 scrollHint:(id)arg4 showMore:(id)arg5 shouldDisplayCellBorders:(_Bool)arg6 nextLinkEnableCondition:(id)arg7 subtaskDataProvider:(id)arg8 delegate:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

