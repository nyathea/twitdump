//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNViewController.h>

@class NSString, T1VoiceRoomTutorialView, TASSpaceButton, TFNAttributedTextView, TFNGradientView, UIImageView, UILabel, UIScrollView, UIView;
@protocol T1VoiceRoomTutorialViewControllerDelegate, TASSpacesContext;

@interface T1VoiceRoomTutorialViewController : TFNViewController
{
    id <T1VoiceRoomTutorialViewControllerDelegate> _delegate;
    long long _mode;
    id <TASSpacesContext> _context;
    double _currentPanHeight;
    UIScrollView *_scrollView;
    UIView *_contentView;
    UIImageView *_imageView;
    UILabel *_textLabel;
    T1VoiceRoomTutorialView *_tutorialTextView;
    TFNAttributedTextView *_nuxWarningLabel;
    TASSpaceButton *_validateButton;
    TFNGradientView *_validateButtonGradientView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TFNGradientView *validateButtonGradientView; // @synthesize validateButtonGradientView=_validateButtonGradientView;
@property(retain, nonatomic) TASSpaceButton *validateButton; // @synthesize validateButton=_validateButton;
@property(retain, nonatomic) TFNAttributedTextView *nuxWarningLabel; // @synthesize nuxWarningLabel=_nuxWarningLabel;
@property(retain, nonatomic) T1VoiceRoomTutorialView *tutorialTextView; // @synthesize tutorialTextView=_tutorialTextView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) double currentPanHeight; // @synthesize currentPanHeight=_currentPanHeight;
@property(retain, nonatomic) id <TASSpacesContext> context; // @synthesize context=_context;
@property(readonly, nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) __weak id <T1VoiceRoomTutorialViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)attributedTextView:(id)arg1 didTapRange:(id)arg2 rect:(struct CGRect)arg3;
- (void)voiceRoomTutorialView:(id)arg1 didTapToNavigateToViewController:(id)arg2;
- (void)voiceRoomTutorialView:(id)arg1 didTapURL:(id)arg2;
- (void)openLink:(id)arg1;
- (double)preferredHeightForModalSheetViewController:(id)arg1 modalContentViewVisibleEdgeInsets:(struct UIEdgeInsets)arg2;
- (void)modalSheetViewController:(id)arg1 didPanToCurrentHeight:(double)arg2 preferredHeight:(double)arg3 maximumHeight:(double)arg4 mode:(long long)arg5;
- (void)didTapButton:(id)arg1;
- (void)viewDidLayoutSubviews;
- (CDStruct_378aa37b)calculateLayoutContext;
- (void)viewDidLoad;
- (id)initWithContext:(id)arg1 mode:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

