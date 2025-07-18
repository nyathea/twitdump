//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSObject, TFNTwitterUser, TIPImagePipeline, UIView, UIViewController;
@protocol T1UserFacepileWithActionViewModel;

@protocol T1UserFacepileViewProvider <NSObject>
- (UIViewController *)profileViewControllerForUser:(TFNTwitterUser *)arg1 viewModel:(NSObject<T1UserFacepileWithActionViewModel> *)arg2;
- (UIViewController *)expandedFacepileWithViewModel:(NSObject<T1UserFacepileWithActionViewModel> *)arg1 profileNavigationEnabled:(_Bool)arg2;
- (UIView *)compactFacepileWithViewModel:(NSObject<T1UserFacepileWithActionViewModel> *)arg1 imagePipeline:(TIPImagePipeline *)arg2;
@end

