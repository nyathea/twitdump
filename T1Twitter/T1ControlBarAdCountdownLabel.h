//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TAVControlBarItem.h>

@class UILabel, UIView;

@interface T1ControlBarAdCountdownLabel : TAVControlBarItem
{
    UILabel *_countdownLabel;
    UIView *_countdownLabelContainerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *countdownLabelContainerView; // @synthesize countdownLabelContainerView=_countdownLabelContainerView;
@property(retain, nonatomic) UILabel *countdownLabel; // @synthesize countdownLabel=_countdownLabel;
- (void)t1_updateWithPlaybackState:(id)arg1;
- (void)player:(id)arg1 didUpdatePlaybackState:(id)arg2;
- (id)view;
- (id)initWithIdentifier:(id)arg1;

@end

