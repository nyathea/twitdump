//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSString, TFNBarButtonItem, TFNFormFieldView, TFNTwitterAccount, UIView;
@protocol ONBEnterTextViewControllerDelegate;

@interface ONBEnterTextViewController
{
    long long _displayedLines;
    NSString *_hintText;
    NSString *_accessibilityLabel;
    NSString *_charactersRemainingAccessibilityLabel;
    long long _maxLength;
    long long _autocapitalizationType;
    long long _autocorrectionType;
    NSString *_contentType;
    long long _keyboardType;
    _Bool _secureTextEntry;
    _Bool _autofocusText;
    CDUnknownBlockType _nextAction;
    CDUnknownBlockType _skipAction;
    _Bool _editing;
    NSString *_text;
    TFNTwitterAccount *_account;
    UIView *_headerView;
    TFNFormFieldView *_enterTextField;
    TFNBarButtonItem *_nextBarButtonItem;
    NSMutableArray *_customConstraints;
    id <ONBEnterTextViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <ONBEnterTextViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *customConstraints; // @synthesize customConstraints=_customConstraints;
@property(retain, nonatomic) TFNBarButtonItem *nextBarButtonItem; // @synthesize nextBarButtonItem=_nextBarButtonItem;
@property(retain, nonatomic) TFNFormFieldView *enterTextField; // @synthesize enterTextField=_enterTextField;
@property(readonly, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(nonatomic) _Bool editing; // @synthesize editing=_editing;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void)private_updateNextButton;
- (void)private_keyboardDidChange:(id)arg1;
- (_Bool)private_isValidText:(id)arg1;
- (_Bool)formFieldViewShouldReturn:(id)arg1;
- (void)formFieldViewDidEndEditing:(id)arg1;
- (void)formFieldViewDidBeginEditing:(id)arg1;
- (void)formFieldView:(id)arg1 didChangeText:(id)arg2 fromText:(id)arg3;
- (id)scribeSection;
- (id)scribePage;
- (void)private_nextTapped;
- (void)private_skipTapped;
- (_Bool)tfn_logoTitleViewShown;
- (long long)tfn_preferredToolbarVisibility;
- (void)private_updateConstraints;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 componentsViewModel:(id)arg2 hintText:(id)arg3 defaultText:(id)arg4 accessibilityLabel:(id)arg5 charactersRemainingAccessibilityLabel:(id)arg6 maxLength:(long long)arg7 displayedLines:(long long)arg8 keyboardType:(long long)arg9 autocapitalizationType:(long long)arg10 autocorrectionType:(long long)arg11 contentType:(id)arg12 secureTextEntry:(_Bool)arg13 autofocusText:(_Bool)arg14 nextAction:(CDUnknownBlockType)arg15 skipAction:(CDUnknownBlockType)arg16;
- (id)initWithAccount:(id)arg1 componentsViewModel:(id)arg2 hintText:(id)arg3 defaultText:(id)arg4 accessibilityLabel:(id)arg5 charactersRemainingAccessibilityLabel:(id)arg6 maxLength:(long long)arg7 displayedLines:(long long)arg8 keyboardType:(long long)arg9 autocapitalizationType:(long long)arg10 autocorrectionType:(long long)arg11 contentType:(id)arg12 secureTextEntry:(_Bool)arg13 autofocusText:(_Bool)arg14 delegate:(id)arg15;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

