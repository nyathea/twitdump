//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterAppSPMMigration/NSObject-Protocol.h>

@class NSString, PTVBasePreBroadcastView, UITextView;

@protocol PTVBasePreBroadcastViewDelegate <NSObject>
- (void)preBroadcastViewDidPressShareTwitterButton:(PTVBasePreBroadcastView *)arg1;
- (void)preBroadcastViewDidPressChatTypeButton:(PTVBasePreBroadcastView *)arg1 withChatType:(unsigned long long)arg2;
- (void)preBroadcastView:(PTVBasePreBroadcastView *)arg1 didStartBroadcastWithText:(NSString *)arg2 sharingLocation:(_Bool)arg3;

@optional
- (void)preBroadcastViewDidPressAudioScope:(PTVBasePreBroadcastView *)arg1;
- (void)preBroadcastViewDidPressAcceptGuestBroadcasting:(PTVBasePreBroadcastView *)arg1;
- (void)preBroadcastViewDidChangeSelectionOfBroadcastTitleTextView:(UITextView *)arg1;
- (void)preBroadcastViewDidEditBroadcastTitle;
- (void)preBroadcastViewDidPressExitButton:(PTVBasePreBroadcastView *)arg1;
- (void)preBroadcastViewDidPressAudienceSelector:(PTVBasePreBroadcastView *)arg1;
- (_Bool)preBroadcastView:(PTVBasePreBroadcastView *)arg1 didChangeLocationServicesTo:(_Bool)arg2;
- (void)preBroadcastViewDidPressAcceptGifts:(PTVBasePreBroadcastView *)arg1;
@end

