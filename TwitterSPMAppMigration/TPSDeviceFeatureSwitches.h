//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TPSDeviceFeatureSwitches : NSObject
{
}

+ (_Bool)isBouncerOCFFlowEnabled;
+ (_Bool)isPhoneNumberCountryPickerEnabled;
+ (_Bool)isForcedSignuplessExperienceEnabled;
+ (_Bool)isTwitterSingleSignOnEnabled;
+ (id)excludedPeriscopeURLDestinations;
+ (_Bool)limitBufferingAggressivelyOnPausedItems;
+ (_Bool)limitBufferingOnAllPlayerItems;
+ (_Bool)zeroAccountCheckEnabled;
+ (_Bool)skipEmptyAccountWritesWhenBackgrounding;
+ (_Bool)exitOnFailToAccessUserDefaultsOnAppLaunch;
+ (id)preWarmConnectionHostNames;
+ (unsigned long long)maxNumberDiscountedURLs;
+ (_Bool)isDisplayTextModelEnabled;
+ (id)_featureSwitches;
+ (long long)tpmIdSyncClickIntervalInSeconds;
+ (long long)tpmIdSyncFetchIntervalInSeconds;
+ (_Bool)isViewControllerScribeFallbackEnabled;
+ (_Bool)disableWatchdogDetection;
+ (_Bool)isMonitoringMemoryPressureChangesEnabled;
+ (_Bool)isDeferingAccountAndUserUpdateNotificationEnabled;
+ (long long)backgroundTaskExpirationReportingThreshold;
+ (_Bool)coreServices2UserBuilderEnabled;
+ (id)coreServices2TNLBackgroundIdleTimeout;
+ (id)coreServices2TNLForegroundIdleTimeout;
+ (unsigned long long)maximumFullNameLength;
+ (_Bool)deviceAttestationClientEventsEnabled;
+ (_Bool)deviceGuestAttestationTokensEnabled;
+ (_Bool)deviceAttestationTokensEnabled;
+ (_Bool)isCustomScribeBookmarkRetweetEnabled;
+ (id)scribeDataLossSampleRateOnOutOfSpace;
+ (id)scribeDataLossSampleRateOnRetry;
+ (id)scribeDataLossSampleRateOnShelfLife;
+ (id)scribeDataLossSampleRateOnLogout;
+ (_Bool)isScribeDataLossReportingEnabled;
+ (long long)scribeAPIErrorSampleSize;
+ (long long)scribeAPISampleSize;
+ (id)httpHostMapArray;
+ (_Bool)isOAuthScopeBackendEnabled;
+ (_Bool)isDelegationGroupSettingsEnabled;
+ (_Bool)isDelegationGroupEnabled;
+ (_Bool)isTeamsAccountUIEnabled;
+ (_Bool)isTeamsAccountEnabled;
+ (id)optionalSetForKey:(id)arg1;
+ (id)requiredSetForKey:(id)arg1;
+ (void)accessFeatureSwitchValueOnce:(long long *)arg1 valueAccessBlock:(CDUnknownBlockType)arg2;
+ (_Bool)isInitialized;
+ (double)_CGFloatForKey:(id)arg1 minValue:(double)arg2 maxValue:(double)arg3;
+ (long long)_integerForKey:(id)arg1 minValue:(long long)arg2 maxValue:(long long)arg3;
+ (id)nonUsernamePaths;
+ (long long)shortenedURLLengthSecure;
+ (id)excludedWebViewDomains;
+ (id)excludedEmailDomains;
+ (double)scribeStatusLingerMinThresholdInSeconds;
+ (long long)typeaheadMaxUserMatches;
+ (long long)typeaheadMaxRecentSearchesHorizontallyScrolling;
+ (long long)typeaheadMaxRecentSearches;
+ (long long)typeaheadMaxQueryMatches;
+ (double)typeaheadUserPrefetchRateInSeconds;
+ (_Bool)shouldScribeError;

@end

