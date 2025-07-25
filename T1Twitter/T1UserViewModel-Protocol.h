//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/_TtP14TFSTwitterCore23TFSTwitterScribableItem_-Protocol.h>

@class NSString, TFSPCFLabel, TFSTwitterEntityMedia, TFSTwitterRelationship, TFSTwitterUserReference, TFSURTRichText, TUITwitterUserContext, _TtC14TFSTwitterCore25TFSTwitterPromotedContent;
@protocol T1TwitterSocialContext, TFSTwitterCanonicalUser;

@protocol T1UserViewModel <_TtP14TFSTwitterCore23TFSTwitterScribableItem_>
@property(nonatomic, readonly) long long timelineModuleItemIndex;
@property(nonatomic, readonly) NSString *timelineEntryID;
@property(nonatomic, readonly) id <T1TwitterSocialContext> socialContext;
@property(nonatomic, readonly) _TtC14TFSTwitterCore25TFSTwitterPromotedContent *promotedContent;
@property(nonatomic, readonly) _Bool showSocialBadge;
@property(nonatomic, readonly) TUITwitterUserContext *context;
@property(nonatomic, readonly) NSString *bioDisplayText;
@property(nonatomic, readonly) NSString *displayUsername;
@property(nonatomic, readonly) NSString *displayFullName;
- (_Bool)isPromoted;
@property(nonatomic, readonly) TFSTwitterEntityMedia *profileBannerMediaEntity;
@property(nonatomic, readonly) TFSTwitterEntityMedia *profileImageMediaEntity;
@property(nonatomic, readonly) TFSTwitterRelationship *relationship;
@property(nonatomic, readonly) unsigned int profileLinkColorHexTriplet;
@property(nonatomic, readonly) TFSPCFLabel *parodyCommentaryFanLabel;
@property(nonatomic, readonly) _Bool hasParodyProfileLabel;
@property(nonatomic, readonly) unsigned long long bioDisplayType;
@property(nonatomic, readonly) _Bool hasAccountLabel;
@property(nonatomic, readonly) _Bool usernameless;
@property(nonatomic, readonly) _Bool protectedUser;
@property(nonatomic, readonly) long long identityType;
@property(nonatomic, readonly) _Bool isBlueVerified;
@property(nonatomic, readonly) _Bool verified;
@property(nonatomic, readonly) NSString *designatorUrl;
@property(nonatomic, readonly) long long designatorLabelType;
@property(nonatomic, readonly) long long designatorIconType;
@property(nonatomic, readonly) NSString *designatorImageUrl;
@property(nonatomic, readonly) TFSURTRichText *designatorLongDescription;
@property(nonatomic, readonly) NSString *designatorString;
@property(nonatomic, readonly) NSString *fullName;
@property(nonatomic, readonly) NSString *username;
@property(nonatomic, readonly) long long userID;
@property(nonatomic, readonly) id <TFSTwitterCanonicalUser> canonicalUser;
@property(nonatomic, readonly) TFSTwitterUserReference *userReference;

// Remaining properties
@property(nonatomic, readonly) _Bool promoted;
@end

