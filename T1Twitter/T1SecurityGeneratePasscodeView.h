//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIScrollView.h>

@class NSString, TFNAttributedTextView, TFNButton, UILabel, UIView;
@protocol T1SecurityGeneratePasscodeViewDelegate;

@interface T1SecurityGeneratePasscodeView : UIScrollView
{
    id <T1SecurityGeneratePasscodeViewDelegate> _viewDelegate;
    NSString *_backupCode;
    UILabel *_primaryExplanationTextLabel;
    TFNAttributedTextView *_secondaryExplanationTextLabel;
    UILabel *_backupCodeLabel;
    TFNButton *_generateBackupCodeButton;
    TFNButton *_takeScreenshotButton;
    UIView *_contentView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) TFNButton *takeScreenshotButton; // @synthesize takeScreenshotButton=_takeScreenshotButton;
@property(retain, nonatomic) TFNButton *generateBackupCodeButton; // @synthesize generateBackupCodeButton=_generateBackupCodeButton;
@property(retain, nonatomic) UILabel *backupCodeLabel; // @synthesize backupCodeLabel=_backupCodeLabel;
@property(retain, nonatomic) TFNAttributedTextView *secondaryExplanationTextLabel; // @synthesize secondaryExplanationTextLabel=_secondaryExplanationTextLabel;
@property(retain, nonatomic) UILabel *primaryExplanationTextLabel; // @synthesize primaryExplanationTextLabel=_primaryExplanationTextLabel;
@property(copy, nonatomic) NSString *backupCode; // @synthesize backupCode=_backupCode;
@property(nonatomic) __weak id <T1SecurityGeneratePasscodeViewDelegate> viewDelegate; // @synthesize viewDelegate=_viewDelegate;
- (void)_screenshotButtonTapped:(id)arg1;
- (void)_generateButtonTapped:(id)arg1;
- (void)attributedTextView:(id)arg1 didTapRange:(id)arg2 rect:(struct CGRect)arg3;
- (id)_t1_takeScreenshotButton;
- (id)_t1_buildGenerateBackupCodeButton;
- (id)_t1_buildBackupCodeLabel;
- (id)_t1_buildSecondaryExplanationTextLabel;
- (id)_t1_buildPrimaryExplanationTextLabel;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

