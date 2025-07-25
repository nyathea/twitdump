//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNItemsTableRowAdapter.h>

@class NSArray, NSMapTable, NSString, TFNTwitterAccount, TFSObjectCache, TFSTwitterScribeContext, UIViewController;
@protocol T1UserOrRecommendationTableRowAdapterDelegate, T1UserViewActionControlProvider, _TtP14TFSTwitterCore18URTImpressionCache_;

@interface T1UserOrRecommendationTableRowAdapter : TFNItemsTableRowAdapter
{
    TFSObjectCache *_followControlProviderCache;
    TFSObjectCache *_subscribeControlProviderCache;
    NSMapTable *_userViewForItemTable;
    _Bool _showFollowsYou;
    _Bool _showCheckmark;
    _Bool _showDesignatorBadge;
    _Bool _showMuteBadge;
    _Bool _showMuteBadgeForFleets;
    _Bool _showUnblocked;
    _Bool _showUnmuted;
    _Bool _confirmBlock;
    _Bool _showSocialBadge;
    _Bool _showAdminTextLabel;
    _Bool _showUserBlocked;
    _Bool _showUserPreview;
    _Bool _showTweetNotificationsButton;
    _Bool _disableAvatarLongPress;
    _Bool _disableCellSelection;
    _Bool _enableAvatarSelection;
    _Bool _avatarAccessibilityElement;
    _Bool _enableDisplayInModal;
    _Bool _enableUserInfoSelection;
    _Bool _scribeLingers;
    _Bool _hideFollowControl;
    _Bool _showDMBlocked;
    TFNTwitterAccount *_account;
    long long _cellStyle;
    NSArray *_unmentionedUserIDs;
    id <T1UserOrRecommendationTableRowAdapterDelegate> _delegate;
    id <T1UserViewActionControlProvider> _actionControlProvider;
    unsigned long long _followControlType;
    unsigned long long _followControlVariant;
    unsigned long long _actionSheetOptions;
    CDUnknownBlockType _didSelectUserInfoBlock;
    CDUnknownBlockType _didSelectUserBlock;
    CDUnknownBlockType _didLoadUserViewBlock;
    CDUnknownBlockType _displaySelectedUserProfileBlock;
    CDUnknownBlockType _followActionBlock;
    CDUnknownBlockType _caretTapBlock;
    CDUnknownBlockType _caretTypeBlock;
    CDUnknownBlockType _isBlockedUserBlock;
    unsigned long long _bioInclusionMode;
    TFSTwitterScribeContext *_scribeContext;
    UIViewController *_presentationViewController;
    id <_TtP14TFSTwitterCore18URTImpressionCache_> _scribeImpressionCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <_TtP14TFSTwitterCore18URTImpressionCache_> scribeImpressionCache; // @synthesize scribeImpressionCache=_scribeImpressionCache;
@property(nonatomic) __weak UIViewController *presentationViewController; // @synthesize presentationViewController=_presentationViewController;
@property(copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(nonatomic) unsigned long long bioInclusionMode; // @synthesize bioInclusionMode=_bioInclusionMode;
@property(nonatomic) _Bool showDMBlocked; // @synthesize showDMBlocked=_showDMBlocked;
@property(nonatomic) _Bool hideFollowControl; // @synthesize hideFollowControl=_hideFollowControl;
@property(nonatomic) _Bool scribeLingers; // @synthesize scribeLingers=_scribeLingers;
@property(nonatomic) _Bool enableUserInfoSelection; // @synthesize enableUserInfoSelection=_enableUserInfoSelection;
@property(nonatomic) _Bool enableDisplayInModal; // @synthesize enableDisplayInModal=_enableDisplayInModal;
@property(nonatomic) _Bool avatarAccessibilityElement; // @synthesize avatarAccessibilityElement=_avatarAccessibilityElement;
@property(nonatomic) _Bool enableAvatarSelection; // @synthesize enableAvatarSelection=_enableAvatarSelection;
@property(nonatomic) _Bool disableCellSelection; // @synthesize disableCellSelection=_disableCellSelection;
@property(nonatomic) _Bool disableAvatarLongPress; // @synthesize disableAvatarLongPress=_disableAvatarLongPress;
@property(nonatomic) _Bool showTweetNotificationsButton; // @synthesize showTweetNotificationsButton=_showTweetNotificationsButton;
@property(nonatomic) _Bool showUserPreview; // @synthesize showUserPreview=_showUserPreview;
@property(nonatomic) _Bool showUserBlocked; // @synthesize showUserBlocked=_showUserBlocked;
@property(nonatomic) _Bool showAdminTextLabel; // @synthesize showAdminTextLabel=_showAdminTextLabel;
@property(nonatomic) _Bool showSocialBadge; // @synthesize showSocialBadge=_showSocialBadge;
@property(nonatomic) _Bool confirmBlock; // @synthesize confirmBlock=_confirmBlock;
@property(nonatomic) _Bool showUnmuted; // @synthesize showUnmuted=_showUnmuted;
@property(nonatomic) _Bool showUnblocked; // @synthesize showUnblocked=_showUnblocked;
@property(nonatomic) _Bool showMuteBadgeForFleets; // @synthesize showMuteBadgeForFleets=_showMuteBadgeForFleets;
@property(nonatomic) _Bool showMuteBadge; // @synthesize showMuteBadge=_showMuteBadge;
@property(nonatomic) _Bool showDesignatorBadge; // @synthesize showDesignatorBadge=_showDesignatorBadge;
@property(nonatomic) _Bool showCheckmark; // @synthesize showCheckmark=_showCheckmark;
@property(nonatomic) _Bool showFollowsYou; // @synthesize showFollowsYou=_showFollowsYou;
@property(copy, nonatomic) CDUnknownBlockType isBlockedUserBlock; // @synthesize isBlockedUserBlock=_isBlockedUserBlock;
@property(copy, nonatomic) CDUnknownBlockType caretTypeBlock; // @synthesize caretTypeBlock=_caretTypeBlock;
@property(copy, nonatomic) CDUnknownBlockType caretTapBlock; // @synthesize caretTapBlock=_caretTapBlock;
@property(copy, nonatomic) CDUnknownBlockType followActionBlock; // @synthesize followActionBlock=_followActionBlock;
@property(copy, nonatomic) CDUnknownBlockType displaySelectedUserProfileBlock; // @synthesize displaySelectedUserProfileBlock=_displaySelectedUserProfileBlock;
@property(copy, nonatomic) CDUnknownBlockType didLoadUserViewBlock; // @synthesize didLoadUserViewBlock=_didLoadUserViewBlock;
@property(copy, nonatomic) CDUnknownBlockType didSelectUserBlock; // @synthesize didSelectUserBlock=_didSelectUserBlock;
@property(copy, nonatomic) CDUnknownBlockType didSelectUserInfoBlock; // @synthesize didSelectUserInfoBlock=_didSelectUserInfoBlock;
@property(nonatomic) unsigned long long actionSheetOptions; // @synthesize actionSheetOptions=_actionSheetOptions;
@property(nonatomic) unsigned long long followControlVariant; // @synthesize followControlVariant=_followControlVariant;
@property(nonatomic) unsigned long long followControlType; // @synthesize followControlType=_followControlType;
@property(retain, nonatomic) id <T1UserViewActionControlProvider> actionControlProvider; // @synthesize actionControlProvider=_actionControlProvider;
@property(nonatomic) __weak id <T1UserOrRecommendationTableRowAdapterDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *unmentionedUserIDs; // @synthesize unmentionedUserIDs=_unmentionedUserIDs;
@property(nonatomic) long long cellStyle; // @synthesize cellStyle=_cellStyle;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (id)_t1_userViewOptionsForController:(id)arg1 withItem:(id)arg2 options:(id)arg3 indexPath:(id)arg4;
- (void)_t1_setOptionsForUserView:(id)arg1 withDataViewController:(id)arg2 item:(id)arg3 options:(id)arg4 indexPath:(id)arg5;
- (void)_t1_didLoadUserView:(id)arg1 forItem:(id)arg2 withOptions:(id)arg3;
- (void)_t1_setActionsForUserView:(id)arg1 withDataViewController:(id)arg2 item:(id)arg3 options:(id)arg4 indexPath:(id)arg5 userViewModel:(id)arg6;
- (id)_t1_actionControlProviderForController:(id)arg1 withItem:(id)arg2 options:(id)arg3 indexPath:(id)arg4 userViewModel:(id)arg5;
- (id)_t1_actionControlProviderForAccount:(id)arg1 controller:(id)arg2 withItem:(id)arg3 options:(id)arg4 indexPath:(id)arg5 userViewModel:(id)arg6 showTweetNotificationsButton:(_Bool)arg7;
- (void)_t1_setupUserView:(id)arg1 forDataViewController:(id)arg2 item:(id)arg3 withOptions:(id)arg4 indexPath:(id)arg5;
- (void)_t1_userDesignatorBadgeIsTapped:(id)arg1 indexPath:(id)arg2 forItem:(id)arg3;
- (void)_t1_navigateToUserProfile:(id)arg1 indexPath:(id)arg2 forItem:(id)arg3 displayInModal:(_Bool)arg4 sourceView:(id)arg5 sourceRect:(struct CGRect)arg6;
- (id)_t1_baseScribeContextForUserViewModel:(id)arg1 atIndexPath:(id)arg2 controller:(id)arg3 item:(id)arg4;
- (void)_t1_setupLingerScriberForItem:(id)arg1 withDataViewController:(id)arg2 cell:(id)arg3 atIndexPath:(id)arg4;
- (id)_t1_cellForTableView:(id)arg1 indexPath:(id)arg2;
- (id)_t1_viewModelDataFromUserRepresentation:(id)arg1;
- (void)_t1_setupCheckableCell:(id)arg1 forDataViewController:(id)arg2 item:(id)arg3 withOptions:(id)arg4 indexPath:(id)arg5;
- (long long)_t1_checkmarkStyle;
- (unsigned long long)_t1_followControlVariantForUserViewModel:(id)arg1;
- (long long)_t1_subscribeControlForUserViewModel:(id)arg1;
- (unsigned long long)_t1_followControlTypeForUserViewModel:(id)arg1;
- (_Bool)_t1_bioShownForRecord:(id)arg1;
- (unsigned long long)_bioMaxLinesForRecord:(id)arg1;
- (void)followControlProvider:(id)arg1 didPerformAction:(unsigned long long)arg2 forFollowControl:(id)arg3 inUserView:(id)arg4 withMetadata:(id)arg5 success:(_Bool)arg6 error:(id)arg7;
- (id)followControlProvider:(id)arg1 metadataForAction:(unsigned long long)arg2 withFollowControl:(id)arg3 inUserView:(id)arg4;
- (id)dataViewController:(id)arg1 calculatedLayoutMetricsForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 previewConfigurationForItem:(id)arg2 withOptions:(id)arg3 location:(struct CGPoint)arg4 inCell:(id)arg5 atIndexPath:(id)arg6;
- (_Bool)_shouldDisableActionsForItem:(id)arg1;
- (void)dataViewController:(id)arg1 didSelectItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (_Bool)dataViewController:(id)arg1 shouldHighlightItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 scribeImpressionContextForItem:(id)arg2 atIndexPath:(id)arg3;
- (void)dataViewController:(id)arg1 willDisplayCell:(id)arg2 forItem:(id)arg3 withOptions:(id)arg4 atIndexPath:(id)arg5;
- (struct CGSize)dataViewController:(id)arg1 collectionViewSizeForItem:(id)arg2 constrainedToSize:(struct CGSize)arg3 withOptions:(id)arg4 atIndexPath:(id)arg5;
- (id)dataViewController:(id)arg1 collectionViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 scribeItemForItem:(id)arg2 atIndexPath:(id)arg3;
- (id)dataViewController:(id)arg1 scribeContextForItem:(id)arg2 atIndexPath:(id)arg3;
- (double)dataViewController:(id)arg1 estimatedTableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (double)dataViewController:(id)arg1 tableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 cellLayoutObjectIdentifierForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 cellLayoutForItem:(id)arg2 withOptions:(id)arg3 previousLayout:(id)arg4 atIndexPath:(id)arg5;
- (id)dataViewController:(id)arg1 objectIdentifierForItem:(id)arg2 withOptions:(id)arg3;
- (id)init;
- (id)initWithAccount:(id)arg1 scribeImpressionCache:(id)arg2;
- (void)adapterWasUsedByURTViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

