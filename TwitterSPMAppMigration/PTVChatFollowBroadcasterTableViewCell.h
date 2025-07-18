//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIImageView, UILabel, UIView;

@interface PTVChatFollowBroadcasterTableViewCell
{
    UIView *_containerView;
    _Bool _isFollowing;
    UILabel *_followLabel;
    UIImageView *_followImage;
    UIImageView *_unfollowImage;
    NSString *_displayName;
}

- (void).cxx_destruct;
- (void)followAlphaState;
- (void)setIsFollowing:(_Bool)arg1;
- (void)displayNameAttributedStateChanged;
- (void)setDisplayName:(id)arg1;
- (void)setUseLargeChatFont:(_Bool)arg1;
- (id)containerView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layoutFollowLabel;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

