//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMapTable, NSString, T1AppNavigationContext, T1NavigationMetadata, T1ProfileDisplayContentProvider, T1ProfileDisplayNormalSubheaderContentProvider, T1ProfileHeaderViewController, T1ProfileSpriteAnimationBehavior, TFNTwitterAccount, TFSStopwatch, TFSTimer, TFSTwitterScribeContext, TUITwitterUserContext;
@protocol T1ProfileViewModel, _TtP8TAPTweet19TAPTweetPerspective_;

@interface T1ProfileViewController
{
    _Bool _headerZooming;
    _Bool _hasPerformedAccessibilityScroll;
    _Bool _didExpandProfileModal;
    _Bool _didScrollProfileModal;
    _Bool _didScribeProfileCompleteTime;
    _Bool _needsSubheaderUpdate;
    _Bool _shouldShowDeferredFollowConfirmation;
    _Bool _shouldShowDeferredProfileAbout;
    _Bool _shouldShowDeferredProfileVideos;
    _Bool _shouldShowDeferredProfileFavoriteTweets;
    _Bool _shouldShowDeferredTweetsWithReplies;
    _Bool _shouldShowDeferredTweetsWithMedia;
    _Bool _shouldShowDeferredBusinessAffiliates;
    _Bool _shouldShowDeferredSuperFollowsTweets;
    _Bool _shouldShowDeferredHighlights;
    _Bool _shouldShowDeferredExpandedBio;
    _Bool _shouldShowDeferredJobList;
    _Bool _isInitiallyUnfollowed;
    _Bool _needsFollowButtonImpressionScribe;
    _Bool _userTimelineDataReady;
    T1AppNavigationContext *_navigationContext;
    long long _headerButtonGroup;
    TFSTwitterScribeContext *_sourceScribeContext;
    id <_TtP8TAPTweet19TAPTweetPerspective_> _sourceStatus;
    id <T1ProfileViewModel> _viewModel;
    TFNTwitterAccount *_account;
    double _lastLayoutWidth;
    NSArray *_displayContentProviders;
    NSMapTable *_subheaderEntriesByViewController;
    NSMapTable *_subheaderViewControllersByEntry;
    T1ProfileSpriteAnimationBehavior *_spriteAnimationBehavior;
    TFSStopwatch *_stopwatch;
    TFSTimer *_subheaderUpdateTimer;
    CDUnknownBlockType _showFollowersBlock;
    CDUnknownBlockType _enableAccountLinkDisplayActionBlock;
    T1ProfileDisplayContentProvider *_currentDisplayContentProvider;
    T1ProfileDisplayNormalSubheaderContentProvider *_normalSubheaderContentProvider;
    T1NavigationMetadata *_navigationMetadata;
    T1NavigationMetadata *_sourceNavigationMetadata;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) T1NavigationMetadata *sourceNavigationMetadata; // @synthesize sourceNavigationMetadata=_sourceNavigationMetadata;
@property(readonly, nonatomic) T1NavigationMetadata *navigationMetadata; // @synthesize navigationMetadata=_navigationMetadata;
@property(nonatomic) __weak T1ProfileDisplayNormalSubheaderContentProvider *normalSubheaderContentProvider; // @synthesize normalSubheaderContentProvider=_normalSubheaderContentProvider;
@property(nonatomic) __weak T1ProfileDisplayContentProvider *currentDisplayContentProvider; // @synthesize currentDisplayContentProvider=_currentDisplayContentProvider;
@property(copy, nonatomic) CDUnknownBlockType enableAccountLinkDisplayActionBlock; // @synthesize enableAccountLinkDisplayActionBlock=_enableAccountLinkDisplayActionBlock;
@property(copy, nonatomic) CDUnknownBlockType showFollowersBlock; // @synthesize showFollowersBlock=_showFollowersBlock;
@property(retain, nonatomic) TFSTimer *subheaderUpdateTimer; // @synthesize subheaderUpdateTimer=_subheaderUpdateTimer;
@property(retain, nonatomic) TFSStopwatch *stopwatch; // @synthesize stopwatch=_stopwatch;
@property(retain, nonatomic) T1ProfileSpriteAnimationBehavior *spriteAnimationBehavior; // @synthesize spriteAnimationBehavior=_spriteAnimationBehavior;
@property(retain, nonatomic) NSMapTable *subheaderViewControllersByEntry; // @synthesize subheaderViewControllersByEntry=_subheaderViewControllersByEntry;
@property(retain, nonatomic) NSMapTable *subheaderEntriesByViewController; // @synthesize subheaderEntriesByViewController=_subheaderEntriesByViewController;
@property(retain, nonatomic) NSArray *displayContentProviders; // @synthesize displayContentProviders=_displayContentProviders;
@property(nonatomic) double lastLayoutWidth; // @synthesize lastLayoutWidth=_lastLayoutWidth;
@property(nonatomic, getter=isUserTimelineDataReady) _Bool userTimelineDataReady; // @synthesize userTimelineDataReady=_userTimelineDataReady;
@property(nonatomic) _Bool needsFollowButtonImpressionScribe; // @synthesize needsFollowButtonImpressionScribe=_needsFollowButtonImpressionScribe;
@property(nonatomic) _Bool isInitiallyUnfollowed; // @synthesize isInitiallyUnfollowed=_isInitiallyUnfollowed;
@property(nonatomic) _Bool shouldShowDeferredJobList; // @synthesize shouldShowDeferredJobList=_shouldShowDeferredJobList;
@property(nonatomic) _Bool shouldShowDeferredExpandedBio; // @synthesize shouldShowDeferredExpandedBio=_shouldShowDeferredExpandedBio;
@property(nonatomic) _Bool shouldShowDeferredHighlights; // @synthesize shouldShowDeferredHighlights=_shouldShowDeferredHighlights;
@property(nonatomic) _Bool shouldShowDeferredSuperFollowsTweets; // @synthesize shouldShowDeferredSuperFollowsTweets=_shouldShowDeferredSuperFollowsTweets;
@property(nonatomic) _Bool shouldShowDeferredBusinessAffiliates; // @synthesize shouldShowDeferredBusinessAffiliates=_shouldShowDeferredBusinessAffiliates;
@property(nonatomic) _Bool shouldShowDeferredTweetsWithMedia; // @synthesize shouldShowDeferredTweetsWithMedia=_shouldShowDeferredTweetsWithMedia;
@property(nonatomic) _Bool shouldShowDeferredTweetsWithReplies; // @synthesize shouldShowDeferredTweetsWithReplies=_shouldShowDeferredTweetsWithReplies;
@property(nonatomic) _Bool shouldShowDeferredProfileFavoriteTweets; // @synthesize shouldShowDeferredProfileFavoriteTweets=_shouldShowDeferredProfileFavoriteTweets;
@property(nonatomic) _Bool shouldShowDeferredProfileVideos; // @synthesize shouldShowDeferredProfileVideos=_shouldShowDeferredProfileVideos;
@property(nonatomic) _Bool shouldShowDeferredProfileAbout; // @synthesize shouldShowDeferredProfileAbout=_shouldShowDeferredProfileAbout;
@property(nonatomic) _Bool shouldShowDeferredFollowConfirmation; // @synthesize shouldShowDeferredFollowConfirmation=_shouldShowDeferredFollowConfirmation;
@property(nonatomic) _Bool needsSubheaderUpdate; // @synthesize needsSubheaderUpdate=_needsSubheaderUpdate;
@property(nonatomic) _Bool didScribeProfileCompleteTime; // @synthesize didScribeProfileCompleteTime=_didScribeProfileCompleteTime;
@property(nonatomic) _Bool didScrollProfileModal; // @synthesize didScrollProfileModal=_didScrollProfileModal;
@property(nonatomic) _Bool didExpandProfileModal; // @synthesize didExpandProfileModal=_didExpandProfileModal;
@property(nonatomic) _Bool hasPerformedAccessibilityScroll; // @synthesize hasPerformedAccessibilityScroll=_hasPerformedAccessibilityScroll;
@property(nonatomic) _Bool headerZooming; // @synthesize headerZooming=_headerZooming;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) id <T1ProfileViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) id <_TtP8TAPTweet19TAPTweetPerspective_> sourceStatus; // @synthesize sourceStatus=_sourceStatus;
@property(copy, nonatomic) TFSTwitterScribeContext *sourceScribeContext; // @synthesize sourceScribeContext=_sourceScribeContext;
@property(nonatomic) long long headerButtonGroup; // @synthesize headerButtonGroup=_headerButtonGroup;
@property(retain, nonatomic) T1AppNavigationContext *navigationContext; // @synthesize navigationContext=_navigationContext;
- (id)scribePageForToaster:(id)arg1;
- (void)presentDrafts;
- (void)presentComposer;
@property(readonly, copy, nonatomic) NSString *presentComposerPlaceholderText;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N

- (long long)dashContentItemType;
- (_Bool)tui_showsActionButton;
- (id)_confirmFollowMenuSheet;
- (id)_confirmFollowSheet;
- (void)_updateCountAtIndex:(long long)arg1;
- (void)profileHeaderViewControllerDidTapSearch:(id)arg1;
- (void)profileHeaderViewControllerDidTapClose:(id)arg1;
- (void)profileHeaderViewControllerDidTapBack:(id)arg1;
- (id)navigationControllerTransitionForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;
- (id)_t1_aboutTabView;
- (void)_t1_triggerTooltip;
- (void)_t1_cleanupTooltip;
- (void)_t1_initializeTooltip;
- (void)_setChildContentViewControllersHidden:(_Bool)arg1;
- (void)_getAccessibilityItemNumbersForDataView:(in id)arg1 first:(out unsigned long long *)arg2 last:(out unsigned long long *)arg3 total:(out unsigned long long *)arg4;
- (id)_scrollingStringForAccessibility;
- (double)_yOffsetForAccessibilityScrollDirection:(long long)arg1 forScrollView:(id)arg2;
- (void)_cancelSubheaderUpdateTimer;
- (void)_setNeedsSubheaderUpdate;
- (void)_updateSubheaders;
- (double)preferredHeightForModalSheetViewController:(id)arg1 modalContentViewVisibleEdgeInsets:(struct UIEdgeInsets)arg2;
- (void)modalSheetViewController:(id)arg1 didPanToCurrentHeight:(double)arg2 preferredHeight:(double)arg3 maximumHeight:(double)arg4 mode:(long long)arg5;
- (void)_t1_updateModalDisplayHeightAnimated:(_Bool)arg1;
- (void)_t1_initializeModalDisplay;
- (void)_t1_determineIsInitiallyUnfollowed;
- (void)_t1_determineFollowButtonDisplay;
- (void)_t1_updateBackMenuTitle;
- (void)_updateDisplayForCurrentState;
- (_Bool)_isCurrentDisplayStateScrollable;
- (_Bool)_updateCurrentDisplayState;
- (void)private_didFocusElement:(id)arg1;
- (void)_t1_showTweetsOnlyTab;
- (id)_addChildViewController:(id)arg1 toSubheaderArray:(id)arg2;
- (void)_allDataReady;
- (void)_checkAllDataReady;
- (void)_profileViewModelDidInvalidateWithReason:(long long)arg1;
- (void)_profileViewModelDidInvalidate:(id)arg1;
- (void)private_accountSettingsDidUpdate:(id)arg1;
- (id)scribeImpressionParameters;
- (id)scribeParameters;
- (id)scribeComponent;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (_Bool)accessibilityScroll:(long long)arg1;
- (void)tfn_contentScrollViewDidScroll:(id)arg1 animate:(_Bool)arg2;
- (id)resizableHeaderContainerViewController:(id)arg1 customHighlightedBarColorAtIndex:(long long)arg2;
- (void)showSuperFollowsTweetsTab;
- (void)finalizeGifting;
- (void)finalizeSubscription;
- (void)showJobListModal;
- (void)showExpandedBioModal;
- (void)showHighlightsTab;
- (void)showBusinessAffiliatesTab;
- (void)showTweetsMediaTab;
- (void)showTweetsWithRepliesTab;
- (void)showProfileFavoritesTab;
- (void)showProfileVideosTab;
- (void)showProfileAboutTab;
- (void)showFollowConfirmation;
- (void)showFollowersWithTab:(unsigned long long)arg1;
- (void)setNeedsModalDisplayHeightUpdateAnimated:(_Bool)arg1;
- (_Bool)isProfileForUserDataSource:(id)arg1;
- (_Bool)isProfileForUserReference:(id)arg1;
- (_Bool)isProfileForUser:(id)arg1;
- (void)displayContentProviderDidLoadInitialTimeline:(id)arg1;
- (void)displayContentProviderWillLoadInitialTimeline:(id)arg1;
- (id)viewControllerForDisplayContentProvider:(id)arg1;
- (_Bool)isUserDataDisplayableForDisplayContentProvider:(id)arg1;
- (_Bool)isDisplayContentProviderCurrent:(id)arg1;
- (void)displayContentProviderDidUpdateModalContentHeight:(id)arg1;
- (void)displayContentProviderDidUpdateSubheaderValidity:(id)arg1;
- (void)displayContentProvider:(id)arg1 didSelectMainEntry:(id)arg2;
- (void)displayContentProviderDidUpdateMainValidity:(id)arg1;
- (void)resizableHeaderContainerViewController:(id)arg1 didUpdateContentHeight:(double)arg2 fromContentHeight:(double)arg3;
- (id)resizableHeaderContainerViewController:(id)arg1 titleAtIndex:(long long)arg2;
- (id)resizableHeaderContainerViewController:(id)arg1 viewControllerAtIndex:(long long)arg2;
- (long long)numberOfEntriesForResizableHeaderContainerViewController:(id)arg1;
- (void)resizableHeaderContainerViewController:(id)arg1 didSelectViewController:(id)arg2 atIndex:(long long)arg3 indexChanged:(_Bool)arg4;
- (id)viewController:(id)arg1 willPresentWithPresentationInfo:(id)arg2;
- (void)resizableHeaderViewControllerDidUpdateActionButtons:(id)arg1;
- (void)resizableHeaderViewControllerDidFinishAnimatingSubheaders:(id)arg1;
- (void)resizableHeaderViewControllerDidStartAnimatingSubheaders:(id)arg1;
- (void)resizableHeaderViewControllerDidUpdateCurrentHeaderHeight:(id)arg1;
- (id)resizableHeaderSubheaderViewControllersForResizableHeaderViewController:(id)arg1;
@property(readonly, nonatomic) TUITwitterUserContext *profileViewControllerUserContext;
- (double)bottomContentPadding;
- (void)refresh;
- (_Bool)isScrollViewAnimating;
- (_Bool)canCollapseHeader;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)viewSafeAreaInsetsDidChange;
- (void)finalizePinPost:(id)arg1;
- (void)finalizeHighlighting:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)editProfileActionWithSelectedEditField:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)editProfileActionWithCompletion:(CDUnknownBlockType)arg1;
- (void)enableAccountLinkDisplayActionWithAccountType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (void)dealloc;
- (id)initWithHeaderViewController:(id)arg1 contentDelegate:(id)arg2 accountID:(id)arg3 scribe:(id)arg4;
- (id)initWithViewModel:(id)arg1 account:(id)arg2 sourceNavigationMetadata:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) T1ProfileHeaderViewController *headerViewController; // @dynamic headerViewController;
@property(readonly) Class superclass;

@end

