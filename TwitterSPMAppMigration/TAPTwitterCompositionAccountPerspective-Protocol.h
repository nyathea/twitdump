//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterAppSPMMigration/TTMUploadConfigurationDataSource-Protocol.h>
#import <TwitterAppSPMMigration/_TtP10TAPAccount21TAPAccountPerspective_-Protocol.h>

@class NSDate, NSString, TFNTwitterComposition, TFNTwitterCompositionPersistenceManager, TFNTwitterCompositionQuotedStatusInfo, TFSAccountFeatureSwitches, TFSModelContext, TFSTwitterCoreAPIConfiguration, TFSTwitterUserReference;
@protocol TFSTwitterLegacyScribeLogMethods, TPSFeatureSwitchesAccess;

@protocol TAPTwitterCompositionAccountPerspective <_TtP10TAPAccount21TAPAccountPerspective_, TTMUploadConfigurationDataSource>
@property(readonly, nonatomic) _Bool isActiveCreator;
@property(readonly, nonatomic, getter=isUsingRetainedGeoDataForCreatingTweetAllowed) _Bool usingRetainedGeoDataForCreatingTweetAllowed;
@property(retain) TFSTwitterCoreAPIConfiguration *coreAPIConfiguration;
@property(readonly, nonatomic) TFNTwitterCompositionPersistenceManager *compositionPersistenceManager;
@property(readonly, nonatomic) TFSModelContext *modelContext;
@property(retain, nonatomic) NSDate *lastTweetedFromDevice;
@property(readonly, nonatomic) id <TFSTwitterLegacyScribeLogMethods> scribe;
@property(readonly, nonatomic) id <TPSFeatureSwitchesAccess> featureSwitches;
@property(readonly, nonatomic) TFSAccountFeatureSwitches *accountFeatureSwitches;
@property(readonly, copy, nonatomic) NSString *username;
@property(readonly, nonatomic) long long userID;
@property(readonly, copy, nonatomic) NSString *accountID;
- (_Bool)myUserIsEqualToUserReference:(TFSTwitterUserReference *)arg1;
- (void)refreshHomeTimelineForComposition:(TFNTwitterComposition *)arg1;
- (_Bool)isAuthorOfQuotedStatusInfo:(TFNTwitterCompositionQuotedStatusInfo *)arg1;
@end

