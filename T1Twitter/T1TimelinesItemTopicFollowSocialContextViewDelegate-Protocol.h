//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/T1TimelinesItemSocialContextViewDelegate-Protocol.h>

@class T1TimelinesItemTopicFollowSocialContextViewModel, UIView;

@protocol T1TimelinesItemTopicFollowSocialContextViewDelegate <T1TimelinesItemSocialContextViewDelegate>
- (void)topicFollowSocialContextView:(UIView *)arg1 didTapNotInterestedButton:(UIView *)arg2 withViewModel:(T1TimelinesItemTopicFollowSocialContextViewModel *)arg3 isUndo:(_Bool)arg4;
- (void)topicFollowSocialContextView:(UIView *)arg1 didTapFollowButton:(UIView *)arg2 withViewModel:(T1TimelinesItemTopicFollowSocialContextViewModel *)arg3;
@end

