//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, T1InfoTextView, T1StandardStatusPromoteButtonView, TFNTappableHighlightView;

@interface T1ConversationAnalyticsView : UIView
{
    T1InfoTextView *_infoTextView;
    TFNTappableHighlightView *_highlightView;
    T1StandardStatusPromoteButtonView *_promoteButton;
    CDUnknownBlockType _didTapAnalyticsButtonBlock;
    CDUnknownBlockType _didTapPromoteButtonBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType didTapPromoteButtonBlock; // @synthesize didTapPromoteButtonBlock=_didTapPromoteButtonBlock;
@property(copy, nonatomic) CDUnknownBlockType didTapAnalyticsButtonBlock; // @synthesize didTapAnalyticsButtonBlock=_didTapAnalyticsButtonBlock;
@property(readonly, nonatomic) T1StandardStatusPromoteButtonView *promoteButton; // @synthesize promoteButton=_promoteButton;
@property(readonly, nonatomic) TFNTappableHighlightView *highlightView; // @synthesize highlightView=_highlightView;
@property(readonly, nonatomic) T1InfoTextView *infoTextView; // @synthesize infoTextView=_infoTextView;
- (void)_t1_didTapHighlightView;
- (void)didTapPromoteButtonView:(id)arg1;
- (void)updateAccessibility;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

