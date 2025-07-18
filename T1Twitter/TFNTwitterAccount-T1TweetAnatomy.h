//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterAppSPMMigration/TFNTwitterAccount.h>

@class NSArray, NSObject, NSString, T1AccountNotificationSettingsManager, TBCPeriscopeAccount, TBCPeriscopeAccountManager, TCMCommunitiesContext, TFNDirectMessageService, TFNTwitterPromotedEventLogger, TFNTwitterTimelineManager, TFSAccountFeatureSwitches, TTAAdaptiveMediaParameters;
@protocol TASSpacesContext, TFSTwitterLegacyScribeLogMethods, TFSTwitterPushSettingsManager, TPSFeatureSwitchesAccess, TUICardViewRegistry, _TtP14T1TwitterSwift24PeopleAddressBookService_;

@interface TFNTwitterAccount (T1TweetAnatomy)
+ (void)updateBadgingFromServerForAccounts:(id)arg1 maxConcurrentRequests:(long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)accountType;
- (_Bool)canShareStatus:(id)arg1;
- (_Bool)canQuoteStatus:(id)arg1;
- (_Bool)canRetweetStatus:(id)arg1;
- (id)interruptedTransactionExpiryTime;
- (id)globalTransactionExpiryTime;
- (_Bool)isInAppPurchaseOnTestFlightEnabled;
- (_Bool)isInAppPurchaseEnabled;
- (_Bool)isSubscriptionsPremiumAppIconsChristmasEnabled;
- (_Bool)isSubscriptionsPremiumAppIconsJapaneseNewYearEnabled;
- (_Bool)isSubscriptionsGiftingPremiumPollingEnabled;
- (_Bool)isSubscriptionsGiftingPremiumIntroCopyEnabled;
- (_Bool)isSubscriptionsGiftingPremiumEnabled;
- (_Bool)isSubscriptionsUpsellsIosGetVerifiedProfileRotationEnabled;
- (id)subscriptionsUpsellsPostAnalyticsMessageTextVariant;
- (id)subscriptionsUpsellsPostAnalyticsTitleTextVariant;
- (double)subscriptionsUpsellsPostAnalyticsDismissForSeconds;
- (double)subscriptionsUpsellsPostAnalyticsReappearAfterSeconds;
- (double)subscriptionsUpsellsPostAnalyticsShowForSeconds;
- (double)subscriptionsUpsellsPostAnalyticsTriggerSeconds;
- (_Bool)isSubscriptionsUpsellsPostAnalyticsEnabled;
- (double)subscriptionsUpsellsReplyBoostDismissForSeconds;
- (double)subscriptionsUpsellsReplyBoostReappearAfterSeconds;
- (double)subscriptionsUpsellsReplyBoostShowForSeconds;
- (_Bool)isSubscriptionsUpsellsReplyBoostPopupEnabled;
- (_Bool)isSubscriptionsUpsellsReplyBoostEnabled;
- (_Bool)isSubscriptionsUpsellsCreatorSupportPostConversationEnabled;
- (id)subscriptionsOffersGroupID;
- (_Bool)isSubscriptionsOffersPromotionalPremiumHubCardEnabled;
- (_Bool)isSubscriptionsOffersPromotionalPremiumMonthlyEnabled;
- (_Bool)isSubscriptionsOffersPromotionalEnabled;
- (_Bool)isSubscriptionsCancelDowngradeEnabled;
- (_Bool)isSubscriptionsUpsellIsBlueVerifiedReviewStatusProfileEnabled;
- (_Bool)isSubscriptionsCancelFlowFinalEnabled;
- (_Bool)isSubscriptionsUpsellGetVerifiedProfileEnabled;
- (_Bool)isSubscriptionsCancelFlowSupportEnabled;
- (_Bool)isSubscriptionsCancelFlowHighlightsEnabled;
- (_Bool)isSubscriptionsCancelFlowEnabled;
- (_Bool)isInAppPurchaseReceiptRefresherEnabled;
- (_Bool)isSubscriptionsStoreKitV2EnabledForQuickPromote;
- (_Bool)isSubscriptionsOneDollarCheckProductBeforePresentingEnabled;
- (_Bool)isSubscriptionsStoreKitV2EnabledForOneDollar;
- (_Bool)isSubscriptionsStoreKitV2EnabledForSuperFollow;
- (_Bool)isSubscriptionsStoreKitV2Enabled;
- (_Bool)isSubscriptionsAdvancedSearchEnabled;
- (_Bool)isSubscriptionsBlueBusinessGoldCheckmarkUsernameEditConfirmationEnabledKey;
- (_Bool)isSubscriptionsBlueVerifiedEditProfileBackendErrorMessageEnabled;
- (_Bool)isSubscriptionsBlueBusinessSubscriptionsManagementPageUpdatesEnabled;
- (_Bool)isSubscriptionsBlueVerifiedEditProfileErrorMessageEnabled;
- (_Bool)isSubscriptionsBlueVerifiedEditProfileEnabled;
- (id)subscriptionsBlueVerifiedEligibilityCheckFlowNameOverride;
- (_Bool)isSubscriptionsBlueVerifiedEligibilityCheckEnabled;
- (_Bool)isSubscriptionsBlueVerifiedHideSubscriptionsEnabled;
- (_Bool)isSubscriptionsBlueVerifiedHideLikesEnabled;
- (_Bool)isSubscriptionsBlueVerifiedHideCheckmarkEnabled;
- (_Bool)clientNetworkEventsCESEndpointEnabledWithoutImpression;
- (_Bool)clientNetworkEventsCESEndpointEnabled;
- (_Bool)_tfn_canShowPromoteModeForSMBAccount;
- (_Bool)areAdsCategoriesForExcludedTagsEnabled;
- (_Bool)canShowPromoteModeForAccount;
- (_Bool)hasSMBAccountServiceLevel;
- (_Bool)hasAdvertiserAccountSubscription;
- (_Bool)isAdsPromoteModeAllowListingEnabled;
- (_Bool)isAdsPromoteModeSMBServiceLevelEnabled;
- (_Bool)isAdsPromoteModeEnabled;
- (_Bool)isAdvertiser;
- (_Bool)isAdsCompanionEnabled;
- (_Bool)isOnboardingNewUsersTweetComposesStatusPromptsHidingUntilUserTweetsEnabled;
- (_Bool)isOnboardingNewUsersTweetComposePromptsHidingForWeekEnabled;
- (_Bool)isOnboardingNewUsersTweetComposeStatusPromptHidingEnabled;
- (_Bool)isOnboardingNewUsersProfileDeviceFollowTooltipHidingEnabled;
- (_Bool)isOnboardingNewUsersTweetComposeRecordTooltipHidingEnabled;
- (_Bool)isOnboardingNewUsersTweetComposeReplyControlTooltipHidingEnabled;
- (_Bool)isOnboardingNewUsersTweetComposeLocationTooltipHidingEnabled;
- (_Bool)isOnboardingNewUsersTweetComposeGIFTooltipHidingEnabled;
- (_Bool)isOnboardingNewUsersNtabNotificationControlTooltipHidingEnabled;
- (_Bool)isOnboardingNewUsersNtabFilterControlTooltipHidingEnabled;
- (_Bool)isOnboardingNewUsersNtabMuteWordsTooltipHidingEnabled;
- (_Bool)isOnboardingNewUsersTweetDetailTooltipHidingEnabled;
- (_Bool)isOnboardingNewUsersSpacesPromptHidingEnabled;
- (_Bool)isWTFDeviceFollowNudgeButtonEnabled;
- (_Bool)isWTFDeviceFollowNudgeTurnOffReactiveBlendingEnabled;
- (id)papagoTweetTranslationFromKoreanEntityUnprotectedDestinations;
- (_Bool)isOnboardingPapagoTweetTranslationFromKoreanEntityUnprotectedEnabled;
- (id)papagoTweetTranslationFromKoreanEntityProtectedDestinations;
- (_Bool)isOnboardingPapagoTweetTranslationFromKoreanEntityProtectedEnabled;
- (id)papagoTweetTranslationToKoreanSources;
- (_Bool)isOnboardingPapagoTweetTranslationToKoreanEnabled;
- (_Bool)isConnectTabUrtFollowingSimilarToEnabled;
- (long long)reactivePromptTimeoutOverride;
- (long long)reactivePromptMaxLikeCount;
- (long long)reactivePromptMaxFollowCount;
- (_Bool)isReactivePromptUserFollowReactionEnabled;
- (_Bool)isReactivePromptFirstLikeReactionEnabled;
- (_Bool)onboardingBonusFollowsExperimentalFeaturesInNuxEnabled;
- (_Bool)onboardingBonusFollowsProfileNavigationEnabled;
- (_Bool)onboardingBonusFollowsCompactLayoutInProfilesEnabled;
- (id)onboardingBonusFollowsDebugTemplateName;
- (_Bool)shouldShowOnboardingAccountFollowEmbeddedPromptToast;
- (_Bool)isOnboardingNotificationsBackstopPromptEnabled;
@property(readonly, nonatomic, getter=isLoadingHighestQualityImageVariantPermitted) _Bool loadingHighestQualityImageVariantPermitted;
- (double)photoStickersFeaturedCategoryRefreshRate;
- (id)invalidStickersLastModifiedDate;
- (id)foundMediaConfiguration;
- (long long)foundMediaImageFormat;
@property(readonly, nonatomic) unsigned long long animatedLivePhotoType;
@property(readonly, nonatomic, getter=isAnimatedLivePhotoAttachmentEnabled) _Bool animatedLivePhotoAttachmentEnabled;
- (id)photoFilterLibraryId;
- (unsigned long long)waitTimeSampleRate;
- (id)isReportIllegalContentURLString;
- (_Bool)isReportIllegalContentInEUEnabled;
@property(readonly, copy, nonatomic) NSString *isNetzDGInSpacesURLString;
@property(readonly, nonatomic) _Bool isNetzDGInSpacesEnabled;
- (_Bool)isMoreFromOtherSourcesMomentPivotEnabled;
- (_Bool)isWantMoreInfoMomentPivotEnabled;
@property(readonly, nonatomic) _Bool isZazuSurfaceSpacesEnabled;
- (_Bool)isNativeZazuReportTweetsEnabled;
- (_Bool)isNativeZazuReportSpacesEnabled;
- (_Bool)isNativeZazuReportProfilesEnabled;
- (_Bool)isNativeZazuReportListsEnabled;
- (_Bool)isNativeZazuReportDMsEnabled;
- (_Bool)isTweetDeamplificationTransparencyCursorEnabled;
- (_Bool)isCustomProfileTombstoneEnabled;
- (_Bool)isMisinfoLabelRedesignPofmaEnabled;
- (_Bool)isMisinfoLabelRedesignEnabled;
- (_Bool)isAppealSensitiveContentEnabled;
- (_Bool)isAppealMisinfoEnabled;
- (_Bool)isGlobalMentionSettingsEnabled;
- (_Bool)isDontMentionMeEnabled;
- (_Bool)isSensitiveMediaSettingsEnabled;
- (_Bool)isSettingsForYouRecommendationEnabled;
- (_Bool)isSettingsHideLocationInUKEnabled;
- (_Bool)isSettingsSearchBarEnabled;
- (_Bool)isSettingsRevampEnabled;
- (_Bool)isSensitiveTweetWarningsComposeEnabled;
- (_Bool)isSensitiveTweetWarningsConsumeEnabled;
- (_Bool)isU2FSecurityKeyAuthManagementEnabled;
- (_Bool)isReportFlowIdReportTypeEnabled;
- (_Bool)isReportFlowIdEnabled;
- (_Bool)unsafePeekIsSoftInterventionsRetweetNudgeEnabled;
- (_Bool)isSoftInterventionsShareNudgeEnabled;
- (_Bool)isSoftInterventionsRetweetNudgeEnabled;
- (_Bool)isSoftInterventionsNudgeBackendControlEnabled;
- (_Bool)isSoftInterventionsLikeNudgeEnabled;
- (_Bool)isNavigationStackReportClientEventsEnabled;
- (_Bool)isNavigationStackReferrerParamEnabled;
- (_Bool)isDominantColorInCardsEnabled;
- (_Bool)isVerifiedAudiencePollsConsumptionEnabled;
- (_Bool)isVerifiedAudiencePollsCreationEnabled;
- (double)pollDurationComposeMaxInterval;
- (double)pollDurationComposeMinInterval;
- (double)pollDurationComposeDefaultInterval;
- (double)poll2ChoiceTextCapiRefreshInterval;
- (double)cardComposePreviewRetryTotalTimeout;
- (unsigned long long)cardComposePreviewPermittedRetryCount;
- (_Bool)shouldCardComposePreviewTombstoneIfNotDisplayed;
- (long long)cardComposePreviewFetchDelayMsec;
- (id)_t1_revealedContentStore;
- (_Bool)isComposerLiveBroadcastEnabled;
- (_Bool)isComposerGeoPreciseLocationEnabled;
- (long long)selfThreadComposerAddToThreadTooltipCharacterLimit;
- (_Bool)selfThreadComposerLimitAttachments;
- (long long)selfThreadComposerMaxTweets;
- (double)dockingVideoMinimumDuration;
@property(readonly, nonatomic, getter=isDockingHapticFeedbackEnabled) _Bool dockingHapticFeedbackEnabled;
- (double)dockingViewSwipeVelocity;
- (_Bool)isUserMuteCacheUpdateOnForegroundEnabled;
- (_Bool)isRecurringTaskServiceHashflagTriggerOnRegistrationEnabled;
- (_Bool)isRecurringTaskServiceBadgesUpdateTriggerOnRegistrationEnabled;
- (_Bool)isDeferNotificationsLoadingUntilViewWillAppearEnabled;
- (_Bool)isDeferFleetlineLoadingUntilHomeTimelineIsLoadedEnabled;
- (_Bool)isStatusViewLayoutStateGeneratorCachedViewAdapterSetEnabled;
- (_Bool)isHomeLivePipelineFixEnabled;
- (_Bool)isHomeScribeImpressionParametersForVisibleIndexPathsEnabled;
- (_Bool)isTabItemPixelAlignmentEnabled;
- (_Bool)isTFNButtonDisableClippingEnabled;
- (_Bool)isPreClippedAvatarImagesEnabled;
- (_Bool)isUseGradientLayerAvatarShadowsEnabled;
- (_Bool)isDockedVideoShadowPathEnabled;
- (_Bool)isAddStatusCellAutoplayableOncePerVisibilityCallEnabled;
- (_Bool)isFilterNoActualCanonicalStatusChangeNotificationsEnabled;
- (_Bool)isTIPImageDeferredProgressiveRenderingEnabled;
- (unsigned long long)dataViewModelBoundViewCacheLimit;
- (unsigned long long)dataViewGeneralViewCacheLimit;
- (long long)statusViewLayoutSamplingFractionalPercentage;
- (unsigned long long)frameDropMaxReportCount;
- (_Bool)isDoubleMaxZoomFor4KImagesEnabled;
- (void)_updateBadgingFromServerWithCompletion:(CDUnknownBlockType)arg1;
- (double)networkMonitorContentEntryTTL;
- (unsigned long long)networkMonitorContentHighQualityThreshold;
- (unsigned long long)networkMonitorContentLowQualityThreshold;
- (unsigned int)networkMonitorContentMinimumPayload;
- (double)networkMonitorAPIEntryTTL;
- (unsigned long long)networkMonitorAPIHighQualityThreshold;
- (unsigned long long)networkMonitorAPILowQualityThreshold;
- (unsigned int)networkMonitorAPIMinimumPayload;
- (_Bool)isCountryWithheldContentProfileInterstitialEnabled;
- (_Bool)is2faTempPasswordEnabled;
- (_Bool)isAuthorModeratedReplyURTContainerEnabled;
- (_Bool)isOCF2faEnrollmentNativeSecurityKeyFlowEnabled;
- (_Bool)isOCF2faUnenrollmentEnabled;
- (_Bool)isOCF2faEnrollmentEnabled;
- (_Bool)is2faStandaloneSecurityKeyEnabled;
- (_Bool)isTOTPGeneratorEnabled;
- (_Bool)isSMS2faEnabled;
- (_Bool)isTweetDetailsHiddenTooltipDisabledActionEnabled;
- (_Bool)isTweetDetailsConversationContextRemovalEnabled;
- (_Bool)performAnimationOnSkippedStatusNavigation;
- (_Bool)isRedundantStatusNavigationDisabled;
- (_Bool)isInternalProtocolHandlerParserResultNavigationEnabled;
- (_Bool)isSafariViewControllerDisabledForPromotedWebsiteClicks;
- (_Bool)isProfileBioTranslationEnabled;
- (_Bool)isProfileQRCodeButtonEnabled;
- (id)profileBirthdayBalloonOverrides;
- (_Bool)isProfileBirthdayBalloonOverridesEnabled;
- (_Bool)isEditProfileUsernameEnabled;
- (long long)appColdStartTimeIntervalMinutes;
- (_Bool)homeJetfuelEnabled;
- (_Bool)isPCTZipkinMetadataEnabled;
- (long long)homeTimelineExtendedReactivityTweetClicksFatigueSessionLengthInMinutes;
- (long long)homeTimelineExtendedReactivityTweetClicksFatigue;
- (long long)homeTimelineExtendedReactivityTweetClicksTriggerSeconds;
- (_Bool)isHomeTimelineExtendedReactivityTweetClicksEnabled;
- (_Bool)isReplyFeedbackImmediateDismissEnabled;
- (id)homeTimelineFeedbackImmediateDismissTreatment;
- (_Bool)isHomeTimelineFeedbackImmediateDismissEnabled;
- (_Bool)isBookmarkTimelineV2GraphQLEnabled;
- (_Bool)relevancePromptDeduplicatedScribingEnabled;
- (_Bool)homeTimelineScribingScrollEnabled;
- (long long)minutesToIncludeSeenIDImpressions;
- (long long)uprankUnseenTweetsListCountNeeded;
- (_Bool)startAtTopLoadBottomEnabled;
- (_Bool)startAtTopCombineCSATAndSATEnabled;
- (_Bool)startAtTopUnseenCachedEnabled;
- (long long)startAtTopFailureThreshold;
- (long long)startAtTopSuccessThreshold;
- (long long)numberOfStartAtTopAttemptsTracked;
- (long long)homeTimelineFetchNewerOnNavigateMinMinutes;
- (_Bool)isHomeTimelinePullToRefreshAnimationNavigateEnabled;
- (_Bool)isHomeTimelinePullToRefreshAnimationForegroundEnabled;
- (_Bool)isHomeTimelinePullToRefreshAnimationLatestEnabled;
- (_Bool)isHomeTimelinePullToRefreshAnimationEnabled;
- (long long)homeTimelineWarmStartMinBackgroundMinutes;
- (_Bool)isHomeTimelineForegroundRequestCheckEnabled;
- (_Bool)isStartAtTopLatestEnabled;
- (_Bool)isStartAtTopLoadingShimmerEnabled;
- (long long)stickyNewTweetsPillManualRefreshDuration;
- (long long)stickyNewTweetsPillAutoRefreshDuration;
- (_Bool)isStickyNewTweetsPillAllEnabled;
- (_Bool)isStartAtTopDisableHomeScrollPositionRestorationOnColdLaunchEnabled;
- (_Bool)isHomeTimelineRestoreScrollPositionAfterStartAtTopTimeoutEnabled;
- (_Bool)isHomeTimelineRestoreScrollPositionAfterStartAtTopSuccessEnabled;
- (_Bool)isStartAtTopClearCacheAutoloadBottomEnabled;
- (long long)startAtTopClearCacheMinEntries;
- (_Bool)isStartAtTopClearCacheEnabled;
- (long long)startAtTopMinBackgroundMinutes;
- (long long)homeTimelineStartAtTopTimeoutSeconds;
- (_Bool)isStartAtTopExcludePoorNetworkEnabled;
- (long long)homeTimelineBottomCursorTweetDistanceTrigger;
- (_Bool)isAppLaunchPerformancePrefetchTopCursorEarlierEnabled;
- (_Bool)isHomeTimelineFetchNewerOnNavigationEnabled;
- (long long)homeTimelineUprankUnseenTweetsMaxAgeMinutes;
- (double)homeTimelineUprankUnseenTweetsDelayMs;
- (long long)homeTimelineUprankUnseenTweetsMaxCountPTR;
- (long long)homeTimelineUprankUnseenTweetsMaxCount;
- (double)homeTimelineBottomBackoffMaxIntervalSeconds;
- (_Bool)isHomeTimelineUprankUnseenTweetsPTREnabled;
- (_Bool)isHomeTimelineUprankUnseenTweetsEnabled;
- (_Bool)isHomeTimelineImprovedNavigationEnabled;
- (_Bool)isSpacesTimelineAvatarDiscoveryAnimationEnabled;
- (_Bool)isSpacesTimelineAvatarDiscoveryEnabled;
- (_Bool)isLiveTimelineAvatarDiscoveryEnabled;
- (_Bool)isFleetsTimelineAvatarDiscoveryEnabled;
- (_Bool)isTimelineAvatarDiscoveryExperimentEnabled;
- (long long)homeTimelineAdsMinimumSpacingPostHydration;
- (id)pinToTopManagerConfiguration;
- (long long)clearCacheAfterManualJTTMinEntries;
- (_Bool)clearCacheAutoloadBottomAfterManualJTTEnabled;
- (_Bool)clearCacheAfterManualJTTEnabled;
- (long long)jumpToTopNavigationMinBackgroundMinutes;
- (_Bool)showTopicFollowPrompt;
- (unsigned long long)implicitTopicContextStyle;
- (unsigned long long)followedTopicContextStyle;
- (_Bool)isTopicsTweetDetailsRecommendedTopicContextEnabled;
- (_Bool)isTopicsContextFollowControlLeftAlignedEnabled;
- (_Bool)isTopicsContextInlineNotInterestedEnabled;
- (_Bool)isTopicsNewSocialContextIconColorEnabled;
- (_Bool)isTopicsRecommendedNewSocialContextEnabled;
- (_Bool)isTopicsMenuSeparatorEnabled;
- (_Bool)isTopicsProfileEntryPointEnabled;
- (id)creatorSubscriptionsTimeline;
- (id)homeLatestTimeline;
- (id)homeTimeline;
- (long long)maxUserOwnedOrSubscribedListsUnsafePeek;
- (id)tileCustomTitleLineCount;
- (double)_jumpBackToHomeTimeInterval;
- (_Bool)_isJumpBackToHomeEnabled;
- (_Bool)_inactivePeriodSatisfiesJumpBackIntervalWithActiveTimeStamp:(double)arg1 inactiveTimeStamp:(double)arg2;
- (_Bool)isJumpBackToHomeDefaultAllowJumpBackEnabled;
- (_Bool)isJumpBackToHomePopToRootEnabled;
- (_Bool)isJumpBackToHomeWarmLaunchFixEnabled;
- (_Bool)shouldJumpBackToHomeWithActiveTimeStamp:(double)arg1 inactiveTimeStamp:(double)arg2;
- (_Bool)isShowSimilarPostsEnabled;
- (_Bool)isEdgeProfileDominantColorEnabled;
- (id)spacesNavigation;
@property(readonly, nonatomic) id <TASSpacesContext> spacesContext;
@property(readonly, nonatomic) TTAAdaptiveMediaParameters *adaptiveMediaParameters;
@property(readonly, nonatomic) _Bool isPinchToZoomEnabled;
- (_Bool)canUseNativePictureInPicture;
@property(readonly, nonatomic) unsigned long long videoPrefetchVideosKeptInCache;
@property(readonly, nonatomic) unsigned long long videoPrefetchRange;
@property(readonly, nonatomic) unsigned long long videoPrefetchBatchSize;
@property(readonly, nonatomic) long long hlsPlaylistEmbeddedConfiguration;
@property(readonly, nonatomic) _Bool tavErrorRetryTreatResourceUnavailableAsNetworkError;
@property(readonly, nonatomic) double tavErrorRetrySimpleBackoffMinimumValue;
@property(readonly, nonatomic) _Bool isNonDecreasingPreferredPeakBitrateCapEnabled;
@property(readonly, nonatomic) double playerCacheTTL;
@property(readonly, nonatomic) double playerCacheKeepAliveInBackground;
- (unsigned long long)playerFactoryThresholdForCacheSizeOne;
- (unsigned long long)playerFactoryThresholdForCacheSizeTwo;
- (id)playerCacheResizingPolicy;
@property(readonly, nonatomic) double autoplayBitRateForHighQuality;
@property(readonly, nonatomic) double networkBandwidthFractionForMp4VariantSelection;
@property(readonly, nonatomic) _Bool tavFoundationAvoidBlockingReads;
@property(readonly, nonatomic) _Bool isAVCoreSingleThreaded;
@property(readonly, nonatomic) _Bool shouldCheckForECDErrorOnPlaybackError;
@property(readonly, nonatomic) _Bool shouldUseDominantColorBackground;
@property(readonly, nonatomic) _Bool shouldUseComponentizedInlineMediaViewsForEverythingElse;
@property(readonly, nonatomic) _Bool shouldUseComponentizedInlineMediaViewsForGIF;
@property(readonly, nonatomic) _Bool shouldUseComponentizedInlineMediaViewsForMediaEntityVod;
@property(readonly, nonatomic) double viewThresholdContent;
@property(readonly, nonatomic) _Bool isVideoZoomEnabled;
@property(readonly, nonatomic) _Bool isPostPlaybackEnabled;
@property(readonly, nonatomic) _Bool isVideoSettingsPreservePlaybackRateEnabled;
@property(readonly, nonatomic) _Bool isVideoSettingsPlaybackRateEnabled;
@property(readonly, nonatomic) _Bool isVODInlineAudioToggleEnabled;
@property(readonly, nonatomic) _Bool shouldShowViewerCountOutsideVideoInBroadcastCards;
@property(readonly, nonatomic) _Bool loadImageAssetsAsynchronously;
@property(readonly, nonatomic) _Bool isVoiceCaptionsEnabled;
@property(readonly, nonatomic) _Bool shouldExtractPreviewFromPrecachedVideo;
@property(readonly, nonatomic) _Bool areSmallerVideoThumbnailsEnabled;
@property(readonly, nonatomic) _Bool isGIFPrecachingEnabled;
@property(readonly, nonatomic) _Bool isPrecachingDisabled;
@property(readonly, nonatomic) _Bool isPrecachingAllowedByLegacyAutoplaySystem;
@property(readonly, nonatomic) _Bool isVideoDynamicAdEnabled;
@property(readonly, nonatomic) double autoplayStartPlayerViewVisibleYFraction;
- (void)initiateMagicRecsPushForLoggedInStateWithCompletion:(CDUnknownBlockType)arg1;
- (double)viewDidAppearUrtNtabThrottleRate;
- (double)appDidBecomeActiveUrtNtabThrottleRate;
- (double)pushReceiptUrtNtabThrottleRate;
- (double)baselineUrtNtabThrottleRate;
- (double)notificationsEarliestBeginIntervalForClientInitiatedMRPush;
- (_Bool)isNotificationsBlueIntroductoryOfferPrefixVisible;
- (_Bool)isNotificationsBlueIntroductoryOfferVisible;
- (long long)verifiedNotificationTabIndex;
- (_Bool)isNotificationsForceURTEmptyStatesEnabled;
- (_Bool)isNotificationsBlueVerifiedEnabled;
- (_Bool)isNotificationsClientInitiatedMRForLoggedInStateEnabled;
- (_Bool)isNotificationsAuthorizationBgTaskEnabled;
- (_Bool)isNtabSuperFollowersTabEnabled;
- (_Bool)isNtabInlineActionsHideCountsEnabled;
- (_Bool)ntabCellRedesignTextChangeEnabled;
- (_Bool)ntabCellRedesignEnabled;
- (_Bool)ntabCellPaddingsExtraBottomEnabled;
- (double)ntabCellPaddingsExtraBottom;
- (double)ntabCellPaddingsBottom;
- (double)ntabCellPaddingsTop;
- (double)ntabForwardFeedbackButtonTapAreaIncrease;
- (double)ntabForwardFeedbackButtonSize;
- (_Bool)isNtabForwardFeedbackUndoTombstoneEnabled;
- (_Bool)isNtabForwardFeedbackTombstoningEnabled;
- (_Bool)isNtabForwardFeedbackServerDrivenEnabled;
- (_Bool)isNtabForwardFeedbackNoToggleEnabled;
- (_Bool)isNtabForwardFeedbackHidePositiveFeedbackButtonEnabled;
- (_Bool)isNtabForwardFeedbackHideOverflowButtonEnabled;
- (_Bool)isNtabForwardFeedbackEnabled;
- (_Bool)isNtabForwardFeedbackArrowsEnabled;
- (_Bool)isNotificationsSettingsProfessionalFilteringEnabled;
- (_Bool)isLegacyVoiceRoomCardViewInNTabEnabled;
- (_Bool)isDismissTypeX;
- (_Bool)isNotificationsLastSeenCursorGraphQLEnabled;
- (_Bool)isNotificationsGraphQLChromePageEnabled;
- (_Bool)isNotificationsGraphQLAPIEnabled;
@property(readonly, nonatomic) id <TUICardViewRegistry> cardRegistry;
- (_Bool)isBetaBugButtonEnabled;
@property(nonatomic, readonly) NSObject *identifier;
- (void)debugResetTabBarItems;
- (void)debugRandomizeTabBarItems;
@property(nonatomic, readonly) _Bool isXChatBadgeEnabled;
@property(nonatomic, readonly) _Bool isXChatLegacyShareSheetActionEnabled;
@property(nonatomic, readonly) _Bool isXChatShareSheetEnabled;
@property(nonatomic, readonly) _Bool isXChatEnabled;
- (void)updateNotificationInitiateMRPushLoggedInStatusWith:(CDUnknownBlockType)arg1;
- (void)scribeForCurrentAccountWithPage:(id)arg1 section:(id)arg2 component:(id)arg3 element:(id)arg4 action:(id)arg5;
@property(nonatomic, readonly) id <_TtP14T1TwitterSwift24PeopleAddressBookService_> addressBookService;
@property(nonatomic, readonly) T1AccountNotificationSettingsManager *notificationSettingsManager;
- (id)homeTimelineVariantCoordinator;
@property(nonatomic, readonly) _Bool isAnalyticsNewWebviewEnabled;
@property(readonly, nonatomic) TFNTwitterTimelineManager *timelineManager;
- (void)exclusiveTweetUnfollowWithUserID:(long long)arg1;
- (void)exclusiveTweetFollowWithUserID:(long long)arg1;

// Remaining properties
@property(readonly, nonatomic) TFSAccountFeatureSwitches *accountFeatureSwitches;
@property(readonly, copy, nonatomic) NSString *accountID;
@property(readonly, nonatomic) TCMCommunitiesContext *communitiesContext;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) TFNDirectMessageService *directMessages;
@property(readonly, copy, nonatomic) NSString *displayFullName;
@property(readonly, nonatomic) id <TPSFeatureSwitchesAccess> featureSwitches;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isActiveCreator;
@property(readonly, nonatomic) TBCPeriscopeAccount *periscopeAccount;
@property(readonly, nonatomic) TBCPeriscopeAccountManager *periscopeAccountManager;
@property(readonly, nonatomic) TFNTwitterPromotedEventLogger *promotedEventLogger;
@property(readonly, nonatomic) id <TFSTwitterPushSettingsManager> pushSettings;
@property(readonly, nonatomic) id <TFSTwitterLegacyScribeLogMethods> scribe;
@property(readonly, copy, nonatomic) NSArray *subscriptionClaims;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long userID;
@property(readonly, nonatomic) long long userType;
@property(readonly, copy, nonatomic) NSString *username;
@end

