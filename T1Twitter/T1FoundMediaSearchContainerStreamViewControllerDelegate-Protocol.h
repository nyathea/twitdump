//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1FoundMediaSearchContainerStreamViewController, TFSTwitterFoundMediaGroup, TFSTwitterFoundMediaItem, UITraitCollection, UIView;

@protocol T1FoundMediaSearchContainerStreamViewControllerDelegate <NSObject>

@optional
- (void)foundMediaSearchContainerStreamViewController:(T1FoundMediaSearchContainerStreamViewController *)arg1 traitCollectionDidChange:(UITraitCollection *)arg2;
- (void)foundMediaSearchContainerStreamViewControllerDidDismissFromGesture:(T1FoundMediaSearchContainerStreamViewController *)arg1;
- (void)foundMediaSearchContainerStreamViewControllerDidCancel:(T1FoundMediaSearchContainerStreamViewController *)arg1;
- (void)foundMediaSearchContainerStreamViewController:(T1FoundMediaSearchContainerStreamViewController *)arg1 didLongPressFoundMediaItem:(TFSTwitterFoundMediaItem *)arg2 sourceView:(UIView *)arg3;
- (void)foundMediaSearchContainerStreamViewController:(T1FoundMediaSearchContainerStreamViewController *)arg1 didSelectFoundMediaItem:(TFSTwitterFoundMediaItem *)arg2;
- (void)foundMediaSearchContainerStreamViewController:(T1FoundMediaSearchContainerStreamViewController *)arg1 didSelectFoundMediaGroup:(TFSTwitterFoundMediaGroup *)arg2;
@end

