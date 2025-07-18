//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PTVMergeWatchBroadcastViewController, T1WatchBroadcastViewController, UIView, UIWindow;

@interface T1WatchBroadcastViewControllerPresenter : NSObject
{
    T1WatchBroadcastViewController *_broadcastController;
    PTVMergeWatchBroadcastViewController *_contentViewController;
    UIView *_backgroundDimmingView;
    UIWindow *_presentingWindow;
    UIWindow *_fullscreenWindow;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIWindow *fullscreenWindow; // @synthesize fullscreenWindow=_fullscreenWindow;
@property(retain, nonatomic) UIWindow *presentingWindow; // @synthesize presentingWindow=_presentingWindow;
@property(retain, nonatomic) UIView *backgroundDimmingView; // @synthesize backgroundDimmingView=_backgroundDimmingView;
@property(readonly, nonatomic) PTVMergeWatchBroadcastViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(readonly, nonatomic) __weak T1WatchBroadcastViewController *broadcastController; // @synthesize broadcastController=_broadcastController;
- (void)_t1_presentContentViewControllerChildAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_t1_presentContentViewControllerFullscreenAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_t1_returnToPresentingWindow;
- (void)dismissContentViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentContentViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentContentViewControllerAnimated:(_Bool)arg1;
- (id)initWithBroadcastController:(id)arg1 contentViewController:(id)arg2 presentingWindow:(id)arg3;

@end

