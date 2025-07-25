//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PTVParticipantTableViewCellLayoutSpec : NSObject
{
}

+ (struct CGRect)HeartLabelFrame:(struct CGSize)arg1 LTRDisplayNameRect:(struct CGRect)arg2;
+ (struct CGRect)LTRHeartLabelFrame:(struct CGSize)arg1 DisplayNameRect:(struct CGRect)arg2;
+ (struct CGRect)HeartFrame:(struct CGSize)arg1 ContainerWidth:(double)arg2;
+ (id)HeartsFont;
+ (struct CGRect)LTRFollowingIconFrame:(struct CGRect)arg1 FollowingIconSize:(struct CGSize)arg2;
+ (struct CGRect)FollowingIconFrame:(struct CGSize)arg1 LTRDisplayNameFrame:(struct CGRect)arg2 FollowingIconSize:(struct CGSize)arg3;
+ (id)FollowingIcon;
+ (double)XSpacingBetweenParticipantNameAndEachIcon;
+ (struct CGRect)DisplayNameFrameWithLTRFrame:(struct CGRect)arg1 ContainerSize:(struct CGSize)arg2;
+ (struct CGRect)LTRDisplayNameFrame:(struct CGSize)arg1 HeartLabelVisible:(_Bool)arg2 AttributedDisplayName:(id)arg3 IsFollowing:(_Bool)arg4 FollowingIconSize:(struct CGSize)arg5;
+ (id)DisplayNameFont;
+ (struct CGRect)AvatarFrame:(double)arg1;
+ (struct CGRect)LTRAvatarFrame;
+ (struct CGSize)PreferredProfileSizePoints;
+ (struct UIEdgeInsets)InnerPadding;
+ (double)CellHeight;

@end

