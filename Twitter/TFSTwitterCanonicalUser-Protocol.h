//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDate, NSNumber, NSString, TFSPCFLabel, TFSTwitterEntityMedia, TFSTwitterEntitySet, TFSTwitterPlace, TFSTwitterProfessional, TFSTwitterRelationship, TFSTwitterTipJar, TFSTwitterUserDesignatorInfo, TFSTwitterUserExtendedProfile, TFSTwitterUserReference, TFSURTRichText;

@protocol TFSTwitterCanonicalUser <NSObject>
@property(nonatomic, readonly) _Bool canReceiveGift;
@property(nonatomic, readonly) NSNumber *userSeedTweetCount;
@property(nonatomic, readonly) _Bool hasHiddenSubscriptionsOnProfile;
@property(nonatomic, readonly) _Bool emailSharingFromSubscribersEnabled;
@property(nonatomic, readonly) TFSPCFLabel *parodyCommentaryFanLabel;
@property(nonatomic, readonly) _Bool hasParodyProfileLabel;
@property(nonatomic, readonly) TFSTwitterProfessional *professional;
@property(nonatomic, readonly) TFSTwitterTipJar *tipJar;
@property(nonatomic, readonly) NSNumber *isProfileBioTranslatableNumber;
@property(nonatomic, readonly) _Bool isProfileBioTranslatable;
@property(nonatomic, readonly) _Bool accountCanDM;
@property(nonatomic, readonly) _Bool hasFreshFullRelationship;
@property(nonatomic, readonly) _Bool hasFreshRelationship;
@property(nonatomic, readonly) TFSTwitterRelationship *relationship;
@property(nonatomic, readonly) long long graduatedAccessType;
@property(nonatomic, readonly) _Bool hasGraduatedAccess;
@property(nonatomic, readonly) _Bool hasHiddenLikesOnProfile;
@property(nonatomic, readonly) NSNumber *creatorSubscriptionsCount;
@property(nonatomic, readonly) _Bool canHighlightTweets;
@property(nonatomic, readonly) NSNumber *highlightedTweetsCount;
@property(nonatomic, readonly) NSNumber *affiliatesCount;
@property(nonatomic, readonly) NSNumber *hasSpaces;
@property(nonatomic, readonly) long long profileImageShape;
@property(nonatomic, readonly) _Bool hasExtendedProfileBirthday;
@property(nonatomic, readonly) TFSTwitterUserExtendedProfile *extendedProfile;
@property(nonatomic, readonly) NSString *withheldScope;
@property(nonatomic, readonly) TFSTwitterEntitySet *withheldBioEntities;
@property(nonatomic, readonly) NSString *withheldBio;
@property(nonatomic, readonly) NSArray *withheldInCountries;
@property(nonatomic, readonly) long long translatorType;
@property(nonatomic, readonly) NSDate *createdDate;
@property(nonatomic, readonly) NSNumber *pinnedTweetIDNumber;
@property(nonatomic, readonly) NSNumber *favoritesCountNumber;
@property(nonatomic, readonly) NSNumber *mediaCountNumber;
@property(nonatomic, readonly) NSNumber *statusesCountNumber;
@property(nonatomic, readonly) long long numberOfFollowers;
@property(nonatomic, readonly) long long numberOfFollowing;
@property(nonatomic, readonly) _Bool hasBannerImageURL;
@property(nonatomic, readonly) unsigned int profileLinkColorHexTriplet;
@property(nonatomic, readonly) long long profileInterstitialType;
@property(nonatomic, readonly) TFSTwitterEntityMedia *profileBannerMediaEntity;
@property(nonatomic, readonly) TFSTwitterPlace *structuredLocation;
@property(nonatomic, readonly) _Bool hasStructuredLocation;
@property(nonatomic, readonly) NSString *location;
@property(nonatomic, readonly) TFSTwitterEntitySet *urlEntities;
@property(nonatomic, readonly) NSString *url;
@property(nonatomic, readonly) TFSTwitterEntitySet *bioEntities;
@property(nonatomic, readonly) NSString *bio;
@property(nonatomic, readonly) long long designatorLabelType;
@property(nonatomic, readonly) long long designatorIconType;
@property(nonatomic, readonly) NSString *designatorUrl;
@property(nonatomic, readonly) NSString *designatorImageUrl;
@property(nonatomic, readonly) TFSURTRichText *designatorLongDescription;
@property(nonatomic, readonly) NSString *designatorString;
@property(nonatomic, readonly) _Bool hasAccountLabel;
@property(nonatomic, readonly) TFSTwitterUserDesignatorInfo *highlightedDesignatorInfo;
@property(nonatomic, readonly) long long identityType;
@property(nonatomic, readonly) NSNumber *isBlueVerified;
@property(nonatomic, readonly) _Bool verified;
@property(nonatomic, readonly) _Bool protectedUser;
@property(nonatomic, readonly) long long profileImageState;
@property(nonatomic, readonly) TFSTwitterEntityMedia *profileImageMediaEntity;
@property(nonatomic, readonly) NSString *displayFullName;
@property(nonatomic, readonly) NSString *fullName;
@property(nonatomic, readonly) NSString *displayUsername;
@property(nonatomic, readonly) _Bool usernameless;
@property(nonatomic, readonly) NSString *username;
@property(nonatomic, readonly) TFSTwitterUserReference *userReference;
@property(nonatomic, readonly) NSNumber *userIDNumber;
@property(nonatomic, readonly) long long userID;
@end

