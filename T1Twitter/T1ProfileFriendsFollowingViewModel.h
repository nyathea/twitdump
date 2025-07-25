//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSAttributedString, NSNumber, TFNTwitterAccount;
@protocol T1ProfileViewModel, TFSActiveTextRange;

@interface T1ProfileFriendsFollowingViewModel : NSObject
{
    _Bool _isViewBlockedByProfileEnabled;
    id <T1ProfileViewModel> _profileViewModel;
    TFNTwitterAccount *_account;
    NSArray *_previewUsers;
    NSAttributedString *_followCountsAttributedString;
    NSAttributedString *_friendsFollowingAttributedString;
    id <TFSActiveTextRange> _followersCountTextRange;
    id <TFSActiveTextRange> _followingCountTextRange;
    id <TFSActiveTextRange> _superFollowersCountTextRange;
    id <TFSActiveTextRange> _creatorSubscriptionsCountTextRange;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isViewBlockedByProfileEnabled; // @synthesize isViewBlockedByProfileEnabled=_isViewBlockedByProfileEnabled;
@property(readonly, nonatomic) id <TFSActiveTextRange> creatorSubscriptionsCountTextRange; // @synthesize creatorSubscriptionsCountTextRange=_creatorSubscriptionsCountTextRange;
@property(readonly, nonatomic) id <TFSActiveTextRange> superFollowersCountTextRange; // @synthesize superFollowersCountTextRange=_superFollowersCountTextRange;
@property(retain, nonatomic) id <TFSActiveTextRange> followingCountTextRange; // @synthesize followingCountTextRange=_followingCountTextRange;
@property(retain, nonatomic) id <TFSActiveTextRange> followersCountTextRange; // @synthesize followersCountTextRange=_followersCountTextRange;
@property(retain, nonatomic) NSAttributedString *friendsFollowingAttributedString; // @synthesize friendsFollowingAttributedString=_friendsFollowingAttributedString;
@property(retain, nonatomic) NSAttributedString *followCountsAttributedString; // @synthesize followCountsAttributedString=_followCountsAttributedString;
@property(retain, nonatomic) NSArray *previewUsers; // @synthesize previewUsers=_previewUsers;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) id <T1ProfileViewModel> profileViewModel; // @synthesize profileViewModel=_profileViewModel;
- (id)scribeItem;
@property(readonly, nonatomic) NSNumber *friendsFollowingCount;
@property(readonly, nonatomic, getter=isTappable) _Bool tappable;
- (id)_t1_followCountTextWithLabel:(id)arg1 singularLabel:(id)arg2 count:(id)arg3 highlighted:(_Bool)arg4;
- (_Bool)shouldHideCreatorSubscriptions;
- (_Bool)_t1_isUserProtectedFromViewingAccount;
- (_Bool)_t1_shouldEnableFollowCountTaps;
- (_Bool)_t1_shouldHideSuperFollowerCounts;
- (_Bool)_t1_shouldHideFollowingCounts;
- (_Bool)_t1_shouldHideFollowerCounts;
- (_Bool)_t1_shouldHideFriendsFollowing;
- (id)_t1_followCountsAttributedStringWithfollowersCountTextRange:(out id *)arg1 followingCountTextRange:(out id *)arg2 superFollowersCountTextRange:(out id *)arg3 creatorSubscriptionsCountTextRange:(out id *)arg4;
- (id)_t1_followDescriptionAttributedStringWithPreviewUsers:(id)arg1;
- (void)update;
- (id)initWithAccount:(id)arg1 profileViewModel:(id)arg2;
- (id)init;

@end

