//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, TFSTwitterCommunityReference, TFSTwitterPlace;

@interface TUITweetAudienceReference : NSObject
{
    MISSING_TYPE *audienceReference;
}

+ (void)setSuperFollowersAudience:(id)arg1;
+ (id)superFollowersAudience;
+ (id)publicAudience;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) TFSTwitterCommunityReference *communityReference;
- (id)initWithCommunityReference:(id)arg1;
@property(nonatomic, readonly) _Bool isLocationAudience;
@property(nonatomic, readonly) TFSTwitterPlace *location;
- (id)initWithLocation:(id)arg1;
@property(nonatomic, readonly) _Bool isSuperFollowersAudience;
@property(nonatomic, readonly) _Bool isPublicAudience;

@end

