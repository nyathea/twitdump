//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSNumber, NSString, TFSCallbackDispatcher, TFSPCFLabel, TFSTwitterEntityMedia, TFSTwitterEntitySet, TFSTwitterPlace, TFSTwitterProfessional, TFSTwitterRelationship, TFSTwitterTipJar, TFSTwitterUserDesignatorInfo, TFSTwitterUserExtendedProfile, TFSTwitterUserReference, TFSTwitterUserSource, TFSURTRichText;

@interface TFNTwitterCanonicalUser : NSObject
{
    _Bool _suspended;
    TFSCallbackDispatcher *_updateEventDispatcher;
    TFSTwitterUserSource *_userSource;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TFSTwitterUserSource *userSource; // @synthesize userSource=_userSource;
@property(readonly, nonatomic) TFSCallbackDispatcher *updateEventDispatcher; // @synthesize updateEventDispatcher=_updateEventDispatcher;
@property(readonly, nonatomic) _Bool suspended; // @synthesize suspended=_suspended;
- (void)_postUpdateNotificationWithUserInfo:(id)arg1;
- (id)_assimilateCanonicalUser:(id)arg1;
- (void)_addObserverForUserSource;
- (void)setModelContext:(id)arg1 cs2Transaction:(id)arg2;
- (id)assimilatable;
- (id)assimilateCanonicalUser:(id)arg1;
- (_Bool)shouldAssimilateCanonicalUser:(id)arg1;
@property(readonly, nonatomic) _Bool accountCanDM;
@property(readonly, nonatomic) _Bool hasBannerImageURL;
@property(readonly, nonatomic) long long profileImageState;
@property(readonly, copy, nonatomic) NSString *bioDisplayText;
@property(readonly, copy, nonatomic) NSString *bioForProfileEditing;
@property(readonly, copy, nonatomic) NSString *urlForProfileEditing;
@property(readonly, copy, nonatomic) NSString *twitterURLForEmail;
@property(readonly, copy, nonatomic) NSString *twitterURL;
@property(readonly, copy, nonatomic) NSString *displayUsername;
@property(readonly, copy, nonatomic) NSString *displayFullName;
@property(readonly, nonatomic) NSNumber *userIDNumber;
@property(readonly, nonatomic) TFSTwitterUserReference *userReference;
@property(readonly, nonatomic) _Bool emailSharingFromSubscribersEnabled;
@property(readonly, nonatomic) TFSPCFLabel *parodyCommentaryFanLabel;
@property(readonly, nonatomic) _Bool hasParodyProfileLabel;
@property(readonly, nonatomic) TFSTwitterProfessional *professional;
- (_Bool)privateSuperFollowing;
- (_Bool)superFollowing;
- (_Bool)superFollowedBy;
- (_Bool)superFollowEligible;
@property(readonly, nonatomic) NSNumber *isProfileBioTranslatableNumber;
@property(readonly, nonatomic) TFSTwitterTipJar *tipJar;
@property(readonly, nonatomic) _Bool isProfileBioTranslatable;
@property(readonly, nonatomic) _Bool hasFreshFullRelationship;
@property(readonly, nonatomic) _Bool hasFreshRelationship;
@property(readonly, nonatomic) TFSTwitterRelationship *relationship;
@property(readonly, nonatomic) TFSTwitterUserDesignatorInfo *highlightedDesignatorInfo;
@property(readonly, nonatomic) NSNumber *hasSpaces;
@property(readonly, nonatomic) long long profileImageShape;
@property(readonly, nonatomic) _Bool canReceiveGift;
@property(readonly, nonatomic) NSNumber *userSeedTweetCount;
@property(readonly, nonatomic) _Bool hasHiddenSubscriptionsOnProfile;
@property(readonly, nonatomic) _Bool hasHiddenLikesOnProfile;
@property(readonly, nonatomic) NSNumber *creatorSubscriptionsCount;
@property(readonly, nonatomic) _Bool canHighlightTweets;
@property(readonly, nonatomic) NSNumber *highlightedTweetsCount;
@property(readonly, nonatomic) NSNumber *affiliatesCount;
@property(readonly, nonatomic) long long graduatedAccessType;
@property(readonly, nonatomic) _Bool hasGraduatedAccess;
@property(readonly, nonatomic) _Bool hasExtendedProfileBirthday;
@property(readonly, nonatomic) TFSTwitterUserExtendedProfile *extendedProfile;
@property(readonly, nonatomic) _Bool usernameless;
@property(readonly, copy, nonatomic) NSString *withheldScope;
@property(readonly, copy, nonatomic) NSArray *withheldInCountries;
@property(readonly, nonatomic) TFSTwitterEntitySet *withheldBioEntities;
@property(readonly, copy, nonatomic) NSString *withheldBio;
@property(readonly, copy, nonatomic) NSString *location;
@property(readonly, nonatomic) TFSTwitterEntitySet *bioEntities;
@property(readonly, copy, nonatomic) NSString *bio;
@property(readonly, nonatomic) TFSTwitterEntitySet *urlEntities;
@property(readonly, copy, nonatomic) NSString *url;
@property(readonly, nonatomic) _Bool hasStructuredLocation;
@property(readonly, nonatomic) TFSTwitterPlace *structuredLocation;
@property(readonly, nonatomic) long long designatorLabelType;
@property(readonly, nonatomic) long long designatorIconType;
@property(readonly, copy, nonatomic) NSString *designatorUrl;
@property(readonly, copy, nonatomic) NSString *designatorImageUrl;
@property(readonly, nonatomic) TFSURTRichText *designatorLongDescription;
@property(readonly, copy, nonatomic) NSString *designatorString;
@property(readonly, nonatomic) _Bool hasAccountLabel;
@property(readonly, nonatomic) unsigned int profileLinkColorHexTriplet;
@property(readonly, nonatomic) long long profileInterstitialType;
@property(readonly, nonatomic) long long translatorType;
@property(readonly, copy, nonatomic) NSDate *createdDate;
@property(readonly, nonatomic) NSNumber *pinnedTweetIDNumber;
@property(readonly, nonatomic) NSNumber *favoritesCountNumber;
@property(readonly, nonatomic) NSNumber *mediaCountNumber;
@property(readonly, nonatomic) NSNumber *statusesCountNumber;
@property(readonly, nonatomic) long long numberOfFollowers;
@property(readonly, nonatomic) long long numberOfFollowing;
@property(readonly, nonatomic) _Bool protectedUser;
@property(readonly, nonatomic) long long identityType;
@property(readonly, nonatomic) NSNumber *isBlueVerified;
@property(readonly, nonatomic) _Bool verified;
@property(readonly, nonatomic) TFSTwitterEntityMedia *profileBannerMediaEntity;
@property(readonly, nonatomic) TFSTwitterEntityMedia *profileImageMediaEntity;
@property(readonly, copy, nonatomic) NSString *fullName;
@property(readonly, copy, nonatomic) NSString *username;
@property(readonly, nonatomic) long long userID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initQuotedStatusInfoUserWithUserID:(long long)arg1 username:(id)arg2 fullName:(id)arg3 profileImageMediaEntity:(id)arg4 verified:(_Bool)arg5 isBlueVerified:(_Bool)arg6 identityType:(long long)arg7;
- (id)initWithCanonicalUser:(id)arg1;
- (id)initWithCS2User:(id)arg1;
- (id)initWithUserSource:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

