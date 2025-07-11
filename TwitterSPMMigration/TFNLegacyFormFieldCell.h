//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAShapeLayer, NSString, TFNFormFieldPinCodeInputView, TFNLegacyFormField, TFNLegacyFormFieldErrorView, TFNLegacyFormFieldSupplementaryTextView, TFNLegacyFormMultiLineTextField, TFNLegacyFormTextField, TFNTextTooltipContentView, TFNTooltip, UIButton, UIImageView, UITapGestureRecognizer, UIView;
@protocol TFNLegacyFormFieldCellDelegate, TFNLegacyFormTextInput;

@interface TFNLegacyFormFieldCell
{
    NSString *_previousErrorMessage;
    _Bool _showingError;
    UIImageView *_disclosureView;
    id <TFNLegacyFormFieldCellDelegate> _delegate;
    TFNFormFieldPinCodeInputView *_pinCodeInputView;
    TFNLegacyFormTextField *_singleLineTextField;
    TFNLegacyFormMultiLineTextField *_multiLineTextField;
    UIButton *_clearButton;
    UITapGestureRecognizer *_textFieldFocusGestureRecognizer;
    TFNTextTooltipContentView *_tooltipContentView;
    TFNTooltip *_tooltip;
    double _proposedTitleWidth;
    TFNLegacyFormFieldSupplementaryTextView *_supplementaryTextView;
    TFNLegacyFormFieldErrorView *_errorView;
    CAShapeLayer *_arrowLayer;
}

+ (double)private_heightForStackedTitle;
+ (_Bool)private_hasStackedTitleForFormField:(id)arg1;
+ (Class)private_textFieldClassForFormField:(id)arg1;
+ (double)combiningWidthForFormField:(id)arg1 containerWidth:(double)arg2 layoutMetrics:(id)arg3;
+ (double)errorArrowOffsetWithLayoutMetrics:(id)arg1;
+ (double)titleWidthForFormField:(id)arg1;
+ (double)_heightForFormField:(id)arg1 withWidth:(double)arg2 appearance:(id)arg3 layoutMetrics:(id)arg4 permanentContentOnly:(_Bool)arg5;
+ (double)heightForFormField:(id)arg1 withWidth:(double)arg2 appearance:(id)arg3 layoutMetrics:(id)arg4;
+ (id)cellForCollectionView:(id)arg1 withItem:(id)arg2 appearance:(id)arg3 options:(id)arg4 indexPath:(id)arg5 delegate:(id)arg6;
- (void).cxx_destruct;
@property(nonatomic, getter=isShowingError) _Bool showingError; // @synthesize showingError=_showingError;
@property(readonly, nonatomic) CAShapeLayer *arrowLayer; // @synthesize arrowLayer=_arrowLayer;
@property(readonly, nonatomic) TFNLegacyFormFieldErrorView *errorView; // @synthesize errorView=_errorView;
@property(readonly, nonatomic) TFNLegacyFormFieldSupplementaryTextView *supplementaryTextView; // @synthesize supplementaryTextView=_supplementaryTextView;
@property(nonatomic) double proposedTitleWidth; // @synthesize proposedTitleWidth=_proposedTitleWidth;
@property(retain, nonatomic) TFNTooltip *tooltip; // @synthesize tooltip=_tooltip;
@property(retain, nonatomic) TFNTextTooltipContentView *tooltipContentView; // @synthesize tooltipContentView=_tooltipContentView;
@property(retain, nonatomic) UITapGestureRecognizer *textFieldFocusGestureRecognizer; // @synthesize textFieldFocusGestureRecognizer=_textFieldFocusGestureRecognizer;
@property(retain, nonatomic) UIButton *clearButton; // @synthesize clearButton=_clearButton;
@property(retain, nonatomic) TFNLegacyFormMultiLineTextField *multiLineTextField; // @synthesize multiLineTextField=_multiLineTextField;
@property(retain, nonatomic) TFNLegacyFormTextField *singleLineTextField; // @synthesize singleLineTextField=_singleLineTextField;
@property(retain, nonatomic) TFNFormFieldPinCodeInputView *pinCodeInputView; // @synthesize pinCodeInputView=_pinCodeInputView;
@property(nonatomic) __weak id <TFNLegacyFormFieldCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)formTextInput:(id)arg1 clearButtonBoundsDidChange:(struct CGRect)arg2;
- (void)formTextInputDidChangeText:(id)arg1 fromUserInteraction:(_Bool)arg2;
- (void)updateBackgroundImageForSectionBreaks:(unsigned long long)arg1 highlighted:(_Bool)arg2 layoutMetrics:(id)arg3;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)isFirstResponder;
- (_Bool)becomeFirstResponder;
- (id)private_baseAccessibilityLabel;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (id)accessibilityLabel;
- (void)dealloc;
- (void)private_clearButtonTapped:(id)arg1;
- (void)private_announceInvalidInput;
- (void)_layoutArrowLayerWithMetrics:(id)arg1;
- (void)_layoutErrorViewWithMetrics:(id)arg1;
- (struct CGRect)_contentFrame:(struct CGRect)arg1 adjustedForAccessoryViewWithLayoutMetrics:(id)arg2;
- (void)layoutAccessoryViewWithMetrics:(id)arg1;
- (void)layoutContentWithMetrics:(id)arg1;
- (void)_animateToShowError:(_Bool)arg1;
- (_Bool)private_usesDatePickerInputView;
- (_Bool)private_shouldShowSupplementaryTextView;
- (void)private_prepareErrorViewForWarning:(_Bool)arg1;
- (void)private_prepareTooltipForWarning:(_Bool)arg1;
- (id)private_backgroundColorForWarning:(_Bool)arg1;
- (void)_dependedOnFormFieldInputDidChange;
- (void)_shouldSuggestUserInput;
- (void)_userInputDidUpdate;
- (void)_updateSupplementaryTextViewVisibilityAnimated:(_Bool)arg1;
- (void)_textDidChangeForTextField:(id)arg1;
- (void)_textFieldTextDidChange:(id)arg1;
@property(nonatomic) struct _NSRange selectedNSRange;
- (void)replaceNSRange:(struct _NSRange)arg1 withText:(id)arg2;
- (void)_formFieldDidUpdateValidity:(id)arg1;
- (_Bool)combinesWithNextCell;
@property(readonly, nonatomic) _Bool shouldHighlightWhileEditing;
- (_Bool)canHighlight;
@property(readonly, nonatomic) _Bool hasInlineTitle;
- (double)titleWidthForContentWidth:(double)arg1;
@property(readonly, nonatomic) UIView<TFNLegacyFormTextInput> *textField;
- (void)setFormItem:(id)arg1;
@property(readonly, nonatomic) TFNLegacyFormField *formField;
- (void)setAppearance:(id)arg1;
- (id)disclosureView;
- (double)heightOfPermanentContentForLayoutMetrics:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

