//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/NSObject-Protocol.h>
#import <T1Twitter/UIScrollViewDelegate-Protocol.h>

@class NSArray, NSString, NSTextAttachment, NSURL, UIAction, UIMenu, UITextFormattingViewController, UITextItem, UITextItemMenuConfiguration, UITextView;
@protocol UIContextMenuInteractionAnimating, UIEditMenuInteractionAnimating;

@protocol UITextViewDelegate <NSObject, UIScrollViewDelegate>

@optional
- (void)textView:(UITextView *)arg1 didEndFormattingWithViewController:(UITextFormattingViewController *)arg2;
- (void)textView:(UITextView *)arg1 willEndFormattingWithViewController:(UITextFormattingViewController *)arg2;
- (void)textView:(UITextView *)arg1 didBeginFormattingWithViewController:(UITextFormattingViewController *)arg2;
- (void)textView:(UITextView *)arg1 willBeginFormattingWithViewController:(UITextFormattingViewController *)arg2;
- (_Bool)textView:(UITextView *)arg1 shouldInteractWithTextAttachment:(NSTextAttachment *)arg2 inRange:(struct _NSRange)arg3;
- (_Bool)textView:(UITextView *)arg1 shouldInteractWithURL:(NSURL *)arg2 inRange:(struct _NSRange)arg3;
- (_Bool)textView:(UITextView *)arg1 shouldInteractWithTextAttachment:(NSTextAttachment *)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (_Bool)textView:(UITextView *)arg1 shouldInteractWithURL:(NSURL *)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (NSArray *)textView:(UITextView *)arg1 writingToolsIgnoredRangesInEnclosingRange:(struct _NSRange)arg2;
- (void)textViewWritingToolsDidEnd:(UITextView *)arg1;
- (void)textViewWritingToolsWillBegin:(UITextView *)arg1;
- (void)textView:(UITextView *)arg1 textItemMenuWillEndForTextItem:(UITextItem *)arg2 animator:(id <UIContextMenuInteractionAnimating>)arg3;
- (void)textView:(UITextView *)arg1 textItemMenuWillDisplayForTextItem:(UITextItem *)arg2 animator:(id <UIContextMenuInteractionAnimating>)arg3;
- (UITextItemMenuConfiguration *)textView:(UITextView *)arg1 menuConfigurationForTextItem:(UITextItem *)arg2 defaultMenu:(UIMenu *)arg3;
- (UIAction *)textView:(UITextView *)arg1 primaryActionForTextItem:(UITextItem *)arg2 defaultAction:(UIAction *)arg3;
- (void)textView:(UITextView *)arg1 willDismissEditMenuWithAnimator:(id <UIEditMenuInteractionAnimating>)arg2;
- (void)textView:(UITextView *)arg1 willPresentEditMenuWithAnimator:(id <UIEditMenuInteractionAnimating>)arg2;
- (UIMenu *)textView:(UITextView *)arg1 editMenuForTextInRange:(struct _NSRange)arg2 suggestedActions:(NSArray *)arg3;
- (void)textViewDidChangeSelection:(UITextView *)arg1;
- (void)textViewDidChange:(UITextView *)arg1;
- (_Bool)textView:(UITextView *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
- (void)textViewDidEndEditing:(UITextView *)arg1;
- (void)textViewDidBeginEditing:(UITextView *)arg1;
- (_Bool)textViewShouldEndEditing:(UITextView *)arg1;
- (_Bool)textViewShouldBeginEditing:(UITextView *)arg1;
@end

