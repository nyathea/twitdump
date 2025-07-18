//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TFNActionItem, TFNButton, UIViewController;

@interface T1ProfileActionMuteButtonProvider
{
    _Bool _shouldShowMuteButton;
    TFNButton *_muteButton;
    TFNActionItem *_muteOverflowItem;
    UIViewController *_controller;
}

+ (void)_t1_unmuteUserReference:(id)arg1 account:(id)arg2 scribeParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)_t1_muteUserReference:(id)arg1 account:(id)arg2 scribeParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) TFNActionItem *muteOverflowItem; // @synthesize muteOverflowItem=_muteOverflowItem;
@property(retain, nonatomic) TFNButton *muteButton; // @synthesize muteButton=_muteButton;
@property(nonatomic) _Bool shouldShowMuteButton; // @synthesize shouldShowMuteButton=_shouldShowMuteButton;
- (void)_t1_showToastForUserReference:(id)arg1 scribeParameters:(id)arg2 muted:(_Bool)arg3;
- (void)_t1_muteButtonTapped:(id)arg1;
- (void)viewModelDidInvalidateForReason:(long long)arg1;
- (id)overflowItem;
- (id)buttonView;
- (_Bool)isVisibleWithAvailableWidth:(double)arg1;
- (id)initWithAccount:(id)arg1 viewModel:(id)arg2 controller:(id)arg3;

@end

