//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNDataViewController.h>

@class NSLayoutConstraint, NSString, TFNPlaceholderTextView, UILabel, UIScrollView, UISwitch, UITextView, UIView;

@interface T1BugReportWizardStepDetailsViewController : TFNDataViewController
{
    _Bool _didShowAttachScreenshotAlert;
    UIScrollView *_scrollView;
    UIView *_contentView;
    UILabel *_summaryTitleLabel;
    UITextView *_summaryTextView;
    UILabel *_expectedTitleLabel;
    TFNPlaceholderTextView *_expectedTextView;
    UILabel *_actualTitleLabel;
    TFNPlaceholderTextView *_actualTextView;
    UILabel *_attachScreenshotLabel;
    UISwitch *_attachScreenshotSwitch;
    NSLayoutConstraint *_scrollViewBottomAnchor;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSLayoutConstraint *scrollViewBottomAnchor; // @synthesize scrollViewBottomAnchor=_scrollViewBottomAnchor;
@property(nonatomic) _Bool didShowAttachScreenshotAlert; // @synthesize didShowAttachScreenshotAlert=_didShowAttachScreenshotAlert;
@property(retain, nonatomic) UISwitch *attachScreenshotSwitch; // @synthesize attachScreenshotSwitch=_attachScreenshotSwitch;
@property(retain, nonatomic) UILabel *attachScreenshotLabel; // @synthesize attachScreenshotLabel=_attachScreenshotLabel;
@property(retain, nonatomic) TFNPlaceholderTextView *actualTextView; // @synthesize actualTextView=_actualTextView;
@property(retain, nonatomic) UILabel *actualTitleLabel; // @synthesize actualTitleLabel=_actualTitleLabel;
@property(retain, nonatomic) TFNPlaceholderTextView *expectedTextView; // @synthesize expectedTextView=_expectedTextView;
@property(retain, nonatomic) UILabel *expectedTitleLabel; // @synthesize expectedTitleLabel=_expectedTitleLabel;
@property(retain, nonatomic) UITextView *summaryTextView; // @synthesize summaryTextView=_summaryTextView;
@property(retain, nonatomic) UILabel *summaryTitleLabel; // @synthesize summaryTitleLabel=_summaryTitleLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (id)nextStep;
- (void)updateBugReport:(id)arg1;
- (void)_t1_notification_keyboardWillHide:(id)arg1;
- (void)_t1_notification_keyboardWillChangeFrame:(id)arg1;
- (void)_t1_didChangeAttachScreenshotSwitchState:(id)arg1;
- (void)_t1_setIsNextButtonEnabled;
- (void)textViewDidChange:(id)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)tfn_supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_t1_setupNotificationObservers;
- (void)_t1_setupConstraints;
- (void)_t1_setupViews;
- (id)_t1_formTitleLabel;
- (id)_t1_formTextView;
- (id)_t1_constrainRule:(id)arg1 after:(id)arg2;
- (id)_t1_addRule;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

