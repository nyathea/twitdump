//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSAttributedString, UIButton, UILabel;

@interface PTVStartBroadcastView : UIView
{
    UIView *_border;
    UILabel *_connectingLabel;
    UILabel *_errorLabel;
    NSAttributedString *_poorConnectionError;
    NSAttributedString *_failedCreateError;
    NSAttributedString *_needsLoginError;
    UIButton *_startButton;
    unsigned long long _startBroadcastState;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long startBroadcastState; // @synthesize startBroadcastState=_startBroadcastState;
- (id)needsLoginError;
- (id)failedCreateError;
- (id)poorConnectionError;
- (struct CGRect)frameForErrorLabel;
@property(readonly, nonatomic) UILabel *errorLabel;
- (struct CGRect)frameForConnectingLabel;
@property(readonly, nonatomic) UILabel *connectingLabel;
- (struct CGRect)frameForBorder;
@property(readonly, nonatomic) UIView *border;
- (struct CGRect)frameForStartButton;
- (_Bool)isStartButtonVisible;
- (id)startButtonTitleForAudienceNamed:(id)arg1;
@property(readonly, nonatomic) UIButton *startButton;
- (void)setAudienceDisplayName:(id)arg1;
- (void)setupPTVPreBroadcastConnectionStatusView;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

