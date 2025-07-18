//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, T1ConversationFooterItem, T1ConversationFooterItemEditedRange, T1ConversationFooterItemPlaceRange, T1ConversationFooterItemViewCountRange, TFNAttributedTextView, TFNTwitterAccount;
@protocol T1ConversationFooterTextViewDelegate, TTACoreStatusViewModel;

@interface T1ConversationFooterTextView : UIView
{
    TFNTwitterAccount *_account;
    id <T1ConversationFooterTextViewDelegate> _delegate;
    id <TTACoreStatusViewModel> _viewModel;
    unsigned long long _options;
    T1ConversationFooterItem *_footerItem;
    T1ConversationFooterItemPlaceRange *_activePlaceRange;
    T1ConversationFooterItemEditedRange *_activeEditedRange;
    T1ConversationFooterItemViewCountRange *_activeViewCountRange;
    TFNAttributedTextView *_textView;
}

+ (struct CGSize)sizeForViewModel:(id)arg1 footerItem:(id)arg2 maximumWidth:(double)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) TFNAttributedTextView *textView; // @synthesize textView=_textView;
@property(readonly, nonatomic) T1ConversationFooterItemViewCountRange *activeViewCountRange; // @synthesize activeViewCountRange=_activeViewCountRange;
@property(readonly, nonatomic) T1ConversationFooterItemEditedRange *activeEditedRange; // @synthesize activeEditedRange=_activeEditedRange;
@property(readonly, nonatomic) T1ConversationFooterItemPlaceRange *activePlaceRange; // @synthesize activePlaceRange=_activePlaceRange;
@property(retain, nonatomic) T1ConversationFooterItem *footerItem; // @synthesize footerItem=_footerItem;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) id <TTACoreStatusViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <T1ConversationFooterTextViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void)attributedTextView:(id)arg1 didTapRange:(id)arg2 rect:(struct CGRect)arg3;
- (void)_t1_addLinkTextAttributesForAttributedString:(id)arg1 atRange:(struct _NSRange)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setViewModel:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3;
- (void)updateFooterTextView;
- (void)layoutMetricsDidChange:(id)arg1 to:(id)arg2;
- (void)updateFontSize;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

