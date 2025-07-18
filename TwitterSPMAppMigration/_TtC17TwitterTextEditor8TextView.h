//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITextView.h>

@class MISSING_TYPE, NSString, UIPasteConfiguration, UITextInputMode;
@protocol UITextViewDelegate;

__attribute__((visibility("hidden")))
@interface _TtC17TwitterTextEditor8TextView : UITextView
{
    MISSING_TYPE *preferredTextInputModePrimaryLanguage;
    MISSING_TYPE *shouldWorkaroundTextInputModeBug;
    MISSING_TYPE *changeTextWritingDirectionActionsEnabled;
    MISSING_TYPE *pasteboardObserverCache;
    MISSING_TYPE *preferredTextInputModeContextIdentifier;
    MISSING_TYPE *textViewTextInputDelegate;
    MISSING_TYPE *returnTextInputInsertText;
    MISSING_TYPE *delegateForwarder;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
@property(nonatomic, retain) id <UITextViewDelegate> delegate;
- (_Bool)canPasteItemProviders:(id)arg1;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
@property(nonatomic, readonly) UITextInputMode *textInputMode;
@property(nonatomic, readonly) NSString *textInputContextIdentifier;
- (_Bool)becomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
@property(nonatomic, retain) UIPasteConfiguration *pasteConfiguration;

@end

