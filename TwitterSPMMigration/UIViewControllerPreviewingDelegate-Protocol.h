//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/NSObject-Protocol.h>

@class UIViewController;
@protocol UIViewControllerPreviewing;

@protocol UIViewControllerPreviewingDelegate <NSObject>
- (void)previewingContext:(id <UIViewControllerPreviewing>)arg1 commitViewController:(UIViewController *)arg2;
- (UIViewController *)previewingContext:(id <UIViewControllerPreviewing>)arg1 viewControllerForLocation:(struct CGPoint)arg2;
@end

