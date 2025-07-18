//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1AppNavigationContext, TFNTwitterUserDataSource, TFSTwitterScribeContext, TFSTwitterUserReference;
@protocol T1ProfileViewModel, TFSTwitterCanonicalUser, _TtP8TAPTweet19TAPTweetPerspective_;

@protocol T1ProfileViewController <NSObject>
@property(copy, nonatomic) TFSTwitterScribeContext *sourceScribeContext;
@property(readonly, nonatomic) id <T1ProfileViewModel> viewModel;
@property(retain, nonatomic) T1AppNavigationContext *navigationContext;
@property(nonatomic) long long headerButtonGroup;
@property(retain, nonatomic) id <_TtP8TAPTweet19TAPTweetPerspective_> sourceStatus;
- (void)showBusinessAffiliatesTab;
- (void)showProfileVideosTab;
- (void)showTweetsMediaTab;
- (void)showTweetsWithRepliesTab;
- (void)showJobListModal;
- (void)showExpandedBioModal;
- (void)showHighlightsTab;
- (void)showProfileFavoritesTab;
- (void)showProfileAboutTab;
- (void)showFollowConfirmation;
- (void)showFollowersWithTab:(unsigned long long)arg1;
- (void)setNeedsModalDisplayHeightUpdateAnimated:(_Bool)arg1;
- (_Bool)isProfileForUserDataSource:(TFNTwitterUserDataSource *)arg1;
- (_Bool)isProfileForUserReference:(TFSTwitterUserReference *)arg1;
- (_Bool)isProfileForUser:(id <TFSTwitterCanonicalUser>)arg1;
@end

