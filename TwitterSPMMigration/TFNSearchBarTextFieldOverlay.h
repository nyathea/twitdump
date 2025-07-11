//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, TFNSearchBar, TFNSearchBarAccessoryButton, UIColor, UILabel, UITextField;

@interface TFNSearchBarTextFieldOverlay : UIView
{
    UITextField *_textField;
    _Bool _hasSetTextFieldBackground;
    UILabel *_label;
    UIColor *_textColor;
    UIColor *_placeholderColor;
    long long _style;
    _Bool _translucent;
    TFNSearchBarAccessoryButton *_searchView;
    TFNSearchBarAccessoryButton *_textFieldSearchView;
    TFNSearchBarAccessoryButton *_textFieldTrailingView;
    _Bool _textFieldTrailingViewIsFilter;
    long long _transition;
    TFNSearchBar *_searchBar;
    NSString *_placeholder;
    CDUnknownBlockType _filterAction;
}

+ (void)installOnSearchBar:(id)arg1 textField:(id)arg2 placeholderColor:(id)arg3 style:(long long)arg4 translucent:(_Bool)arg5;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType filterAction; // @synthesize filterAction=_filterAction;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(readonly, nonatomic) __weak UITextField *textField; // @synthesize textField=_textField;
@property(readonly, nonatomic) __weak TFNSearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void)_tfn_dynamicColorsDidReload:(id)arg1;
- (void)_tfn_updateTextFieldTrailingView;
- (void)_tfn_updateViewsForFirstResponderStatus;
- (void)_tfn_textFieldTextDidChange;
- (void)_tfn_textFieldDidEndEditing;
- (void)_tfn_textFieldDidBeginEditing;
- (void)_tfn_layoutCentered:(_Bool)arg1;
- (void)_tfn_updateForFirstResponderStatus;
- (void)_tfn_updateBackgroundImage;
- (void)layoutSubviews;
- (void)_tfn_updateAccessibilityLabel;
- (void)matchTextFieldText;
- (void)updateFont;
- (void)dealloc;
- (id)initWithSearchBar:(id)arg1 textField:(id)arg2 placeholderColor:(id)arg3 style:(long long)arg4 translucent:(_Bool)arg5;

@end

