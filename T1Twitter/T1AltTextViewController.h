//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNViewController.h>

@class NSString, T1AltTextInputView, T1MediaAttachmentView, TFNAttributedTextView, TFNLegacyFormFieldCounterView, TFNTwitterAccount, TTMAsset, UIImage, UIScrollView;
@protocol T1AltTextViewControllerDelegate;

@interface T1AltTextViewController : TFNViewController
{
    _Bool _shouldShowErrorView;
    _Bool _isCounterEnabled;
    id <T1AltTextViewControllerDelegate> _delegate;
    TTMAsset *_mediaAsset;
    UIImage *_previewImage;
    UIScrollView *_scrollView;
    T1AltTextInputView *_textView;
    TFNLegacyFormFieldCounterView *_counterView;
    TFNAttributedTextView *_educationTextView;
    T1MediaAttachmentView *_attachmentView;
    TFNTwitterAccount *_account;
    NSString *_initialAltText;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *initialAltText; // @synthesize initialAltText=_initialAltText;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(nonatomic) _Bool isCounterEnabled; // @synthesize isCounterEnabled=_isCounterEnabled;
@property(nonatomic) _Bool shouldShowErrorView; // @synthesize shouldShowErrorView=_shouldShowErrorView;
@property(retain, nonatomic) T1MediaAttachmentView *attachmentView; // @synthesize attachmentView=_attachmentView;
@property(retain, nonatomic) TFNAttributedTextView *educationTextView; // @synthesize educationTextView=_educationTextView;
@property(retain, nonatomic) TFNLegacyFormFieldCounterView *counterView; // @synthesize counterView=_counterView;
@property(retain, nonatomic) T1AltTextInputView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
@property(readonly, nonatomic) TTMAsset *mediaAsset; // @synthesize mediaAsset=_mediaAsset;
@property(nonatomic) __weak id <T1AltTextViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)attributedTextView:(id)arg1 didTapRange:(id)arg2 rect:(struct CGRect)arg3;
- (void)_t1_keyboardDidChange:(id)arg1;
- (void)_t1_didTapImage:(id)arg1;
- (void)_t1_didTapApply:(id)arg1;
- (void)_t1_didTapCancel:(id)arg1;
- (void)_t1_scrollTextViewToVisible;
- (void)_t1_initializeSubviews;
- (void)altTextInputViewDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)_t1_altTextViewController_initializeWithAccount:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithAccount:(id)arg1 mediaAsset:(id)arg2;
- (id)initWithAccount:(id)arg1 previewImage:(id)arg2 initialAltText:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

