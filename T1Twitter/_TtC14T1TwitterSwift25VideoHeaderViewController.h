//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSString;

__attribute__((visibility("hidden")))
@interface _TtC14T1TwitterSwift25VideoHeaderViewController
{
    MISSING_TYPE *visibilityDelegate;
    MISSING_TYPE *account;
    MISSING_TYPE *tavPlayer;
    MISSING_TYPE *tavSribeContext;
    MISSING_TYPE *tavPlayerTimeControlStatusBeforeAppResignsActive;
    MISSING_TYPE *lastObservedTimeControlState;
    MISSING_TYPE *$__lazy_storage_$_chromeController;
    MISSING_TYPE *preferredPeakBitrate;
}

- (void).cxx_destruct;
- (void)observerDidAttachToPlayer:(id)arg1;
- (void)player:(id)arg1 didUpdatePlaybackState:(id)arg2;
- (void)viewDidLoad;
- (void)dealloc;
@property(nonatomic, readonly) _Bool prefersStatusBarHidden;
@property(nonatomic, copy) NSString *title;
- (void)appDidBecomeActive:(id)arg1;
- (void)appWillResignActive:(id)arg1;
- (_Bool)liveVideoPlayerChromeControllerWillShowDockButtonTooltip:(id)arg1;
- (void)liveVideoPlayerChromeController:(id)arg1 setPlayerControlsHidden:(_Bool)arg2;
- (void)liveVideoPlayerChromeController:(id)arg1 setPlayerControlsAlpha:(double)arg2;
- (void)liveVideoPlayerChromeController:(id)arg1 setNavigationBarHidden:(_Bool)arg2;
- (void)liveVideoPlayerChromeController:(id)arg1 setNavigationBarAlpha:(double)arg2;
- (void)liveVideoPlayerChromeController:(id)arg1 setStatusBarHidden:(_Bool)arg2;
- (_Bool)liveVideoPlayerChromeController:(id)arg1 shouldSetPlayerControlsToHidden:(_Bool)arg2;
- (_Bool)liveVideoPlayerChromeController:(id)arg1 shouldSetNavigationBarToHidden:(_Bool)arg2;

@end

