//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PTVBroadcast, PTVGuestCallInstructionsView;
@protocol PTVConfirmGuestCallViewControllerDelegate;

@interface PTVConfirmGuestCallViewController
{
    id <PTVConfirmGuestCallViewControllerDelegate> _delegate;
    PTVBroadcast *_broadcast;
    _Bool _isFirstConfirmation;
    _Bool _isAudioOnly;
    PTVGuestCallInstructionsView *_instructionsView;
}

+ (id)ConfirmButtonTitle:(_Bool)arg1;
+ (id)InstructionsSubtitleFont;
+ (id)InstructionsSubtitleAttributes;
+ (id)InstructionsAttributedSubtitleWithDisplayName:(id)arg1;
+ (id)InstructionsTitle;
- (void).cxx_destruct;
- (id)initWithBroadcast:(id)arg1 delegate:(id)arg2 isFirstConfirmation:(_Bool)arg3 isAudioOnly:(_Bool)arg4;
- (void)guestCallButtonWithSubtitleTableViewCell:(id)arg1 didSelectButton:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)overflowContentViewControllerShouldDisplayBackButton;
- (_Bool)overflowContentViewControllerShouldDisplayDismissButton;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

