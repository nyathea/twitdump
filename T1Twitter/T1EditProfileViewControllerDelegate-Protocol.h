//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSString, TFNLegacyFormViewController, UIImage;

@protocol T1EditProfileViewControllerDelegate <NSObject>

@optional
- (void)editProfileViewControllerDidFinishUpdating:(TFNLegacyFormViewController *)arg1;
- (void)editProfileViewController:(TFNLegacyFormViewController *)arg1 didUpdateAvatarImage:(UIImage *)arg2 creatorName:(NSString *)arg3;
- (void)editProfileViewControllerWillRemoveHeader:(TFNLegacyFormViewController *)arg1;
- (void)editProfileViewControllerWillChangeHeader:(TFNLegacyFormViewController *)arg1;
@end

