//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TFNTwitterURLParser : NSObject
{
}

+ (_Bool)_tfn_isPaymentsURL:(id)arg1;
+ (_Bool)_tfn_isGrokShareURL:(id)arg1;
+ (_Bool)_tfn_isProfessionalHomeURL:(id)arg1;
+ (_Bool)_tfn_isSafetyCenterURL:(id)arg1;
+ (_Bool)isResponsiveWebFeatureURL:(id)arg1;
+ (id)broadcastIDFromPeriscopeURL:(id)arg1;
+ (_Bool)isURLExcludedForWebView:(id)arg1;
+ (_Bool)isNonTwitterURLAllowedForUnauthenticatedWebViewAccess:(id)arg1;
+ (_Bool)_tfn_isLocalizedPrivacyPolicy:(id)arg1;
+ (_Bool)isTwitterURLAllowedForWebViewAccess:(id)arg1 isSoftUser:(_Bool)arg2;
+ (id)_tfn_parseStringMatchingBirdwatchTimelinesWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingBadgeViolationsWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingShoppingProductLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingShoppingShopLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingShoppingHomeWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingShoppingDropLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingPremiumLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingPremiumErrorLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingTwitterBlueErrorLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingCreatorSubscriptionsErrorLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingCreatorSubscriptionsSubscribeLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingCreatorSubscriptionsBlockedLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSuperFollowsErrorLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSubscriptionsCreatorSubscribeLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSuperFollowCreatorSubscribeLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSuperFollowCreatorBlockedLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingMediaTabWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingOfflineVideosLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSubscriptionsPremiumSignUpLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSubscriptionsTwitterBlueSignUpLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingCommunityUpdateMembershipLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingCommunityUpdatePurposeLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingCommunityUpdateNameLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingCommunityAddRuleLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingCommunityManageRulesLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingCommunityToolsMembersLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingCommunityToolsLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingCommunitySettingsLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingCommunitySearchLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingCommunityReportedTweetsLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingCommunityModeratorsLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingCommunityMemberRequestsLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingCommunityMembersLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingCommunityLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingCommunityInviteLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingCommunityRulesLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingCommunityAboutLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingCommunitiesSuggestedLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingCommunitiesCreateLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingCommunitiesLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingTopArticlesLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingTopicLandingPageLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingBookmarks:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSettingsNotificationsFiltersWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingExploreWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingSpotlightSettingsWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSettingsAccessibilityWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSettingsBlockedAccountsWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSafetyModeModalWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSafetyModeFlaggedTweetsWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSettingsSafetyModeFlaggedTweetsWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSettingsNewsWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSettingsIDVerificationStartWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSettingsIDVerificationWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSettingsPostInteractionSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSettingsProfileCustomizationWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSettingsEarlyAccessWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSettingsExtrasWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSettingsSubscriptionWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSettingsLabsWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSettingsUndoTweetWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSettingsSafetyModeAutoblockedWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSettingsSafetyModeWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingWhoToFollowWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSettingsTrendsLocationWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSettingsTrendsWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSettingsDeviceFollowWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSettingsNotificationsWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSettingsMuteWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSettingsPasswordWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSettingsYourTwitterDataWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSettingsCreatorSubscriptionsWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSettingsSuperFollowsWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSettingsSafetyWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSettingsPersonalizationWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSettingsCustomizeNavigationWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSettingsBioWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSettingsAppIconWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSettingsDisplayWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSettingsPremiumWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingRadarWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingArticleWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingCatchAllInternalLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingCommunityModerationLogWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingCommunityAnalyticsWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingPreloadedWebviewWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingAccountAnalyticsWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSettingsMonetizationIDVWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSettingsMonetizationWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSettingsEmailNotificationsWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSettingsDevicesWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSettingsDataUsageWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSettingsBackupCodeWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingAccountSwitcherDelegationGroupSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSettingsSecurityWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSettingsDelegateAccountsWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSettingsConnectedAppsWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSettingsSessionsWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSettingsAccountWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingBranchOrSingularReferralLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingAccountResetPasswordWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingAccountAccessWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingAccountLoginWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingCommunityFeedbackRemovedMemberWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingCommunityFeedbackHiddenTweetWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingReportingFollowupWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingReportCenterReportWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingPromotableTweetsTimelineURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingTweetQuickPromoteWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingTweetAnalyticsWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingBirdwatchUserLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingBirdwatchContributeFinishedLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingBirdwatchNoteRequestCompleteURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingBirdwatchNoteRequestURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingBirdwatchContributeFormLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingBirdwatchContributeLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingBirdwatchNoteLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingBirdwatchTweetLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingSpaceAnalyticsLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingSpaceLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingConferenceLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingBroadcastLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingLiveVideoTimelineWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingLiveEventTimelineWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingTopicLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingMomentLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingUserLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingLegalRequestWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingAppealableLabelWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingU13ReviewLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingListOrAlertsLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingListLinkWebWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingUserListsWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingUserTopicsWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingUserProfileSectionWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingEventWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingSearchLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingMessagesLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingMessagesComposeWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingMediaWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSettingsProfileWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingWhoToFollowImportWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingNotificationsAnniversaryWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingTrendsWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingBouncerFlowWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingOnboardingSignupFlowWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingOnboardingLoginFlowWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingExpandedBioEditBlockWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingExpandedBioAddBlockWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingJobWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingJobSearchWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingJobRecommendationSettingsWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingJobSearchWebViewWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingAiTrendWithSourceAndPromptURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingPaymentsHomeURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingPaymentsLinkOAuthURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingPaymentsTransferURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingPaymentsTransactionDetailsURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingMarchMadnessWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingJetfuelPageURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingGrok:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingGrokShareURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingOneDollarWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingOnboardingFlowWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingOnboardingFlowWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3 prefix:(id)arg4 nativeURLString:(id)arg5 forcedFlowName:(id)arg6 excludedQueryParam:(id)arg7;
+ (id)_tfn_parseStringMatchingOnboardingVerifyEmailWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingConnectPeopleWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingReportStoryStartSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingOAuth2FlowWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingOAuth2AuthorizeWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingVerifiedOrgsSignupWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingMentionsWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingTweetViewWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingUserWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingTweetComposerWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingFollowerRequestsWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingWebTweetLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingThreadLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingTweetInteractionRepostsWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingTweetInteractionQuotesWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingTweetInteractionLikesWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parsePatternMatchingTweetLinkWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingSimilarPostsTimelineWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingImmersiveTimelineWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)_tfn_parseStringMatchingHomeTimelineWithSourceURL:(id)arg1 path:(id)arg2 wholePathRange:(struct _NSRange)arg3;
+ (id)parseTwitterApplicationURL:(id)arg1;
+ (id)embeddedURLFromRedirectURL:(id)arg1 key:(id)arg2;
+ (id)embeddedURLWithRefSrcFromRedirectURL:(id)arg1;
+ (id)embeddedURLFromRedirectURL:(id)arg1;
+ (_Bool)isXAIGrokDeeplinkURL:(id)arg1;
+ (_Bool)isPeriscopeBroadcastURL:(id)arg1;
+ (_Bool)isTuneRedirectURL:(id)arg1;
+ (id)topicTaxonomyKeyForTopicTaxonomy:(id)arg1;
+ (_Bool)_isNonTweetWebIntentPath:(id)arg1;
+ (_Bool)doesURLResultTypeOpenInWebview:(long long)arg1;
+ (_Bool)_isTwitterApplicationURLDenylisted:(id)arg1;
+ (_Bool)_isTwitterBranchOrSingularReferralDomain:(id)arg1;
+ (_Bool)_isTwitterDeepLinkDomain:(id)arg1;
+ (id)nonUsernamePaths;
+ (_Bool)isTwitterLoggedOutDeepLinkURL:(id)arg1;
+ (_Bool)isOneDollarPaywallURL:(id)arg1;
+ (_Bool)isTwitterRedirectURL:(id)arg1;
+ (_Bool)isNonTweetWebIntentURL:(id)arg1;
+ (_Bool)isTwitterApplicationURL:(id)arg1;

@end

