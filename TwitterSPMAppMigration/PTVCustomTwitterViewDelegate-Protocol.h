//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterAppSPMMigration/NSObject-Protocol.h>

@class NSString, UIButton, UIColor, UIImage, UIView, UIViewController;

@protocol PTVCustomTwitterViewDelegate <NSObject>

@optional
- (_Bool)navigationDismissItemDisplaysBelowNotch;
- (_Bool)navigationItemOrderInverted;
- (UIButton *)dismissButton;
- (UIView *)backToEventButtonView;
- (UIView *)videoDockingButtonView;
- (UIImage *)retweetImage;
- (UIColor *)retweetGreenColor;
- (_Bool)showClickableHashTagsInBroadcastOverflowMenu;
- (_Bool)shouldSkipBroadcastIntroViewOnViewWillAppear;
- (UIViewController *)viewControllerForProfileBannerForTwitterUser:(NSString *)arg1 withLeftMargin:(double)arg2 leftOffset:(double)arg3 avatarWidth:(double)arg4;
- (UIViewController *)viewControllerForProfileFollow:(NSString *)arg1;
- (UIViewController *)viewControllerForFollowPromptMessage;
@end

