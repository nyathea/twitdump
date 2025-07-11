//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class T1StatusInlinePromptContentView, T1StatusInlinePromptViewModel, TFNTooltipView;
@protocol T1StatusInlinePromptViewDelegate;

@interface T1StatusInlinePromptView : UIView
{
    id <T1StatusInlinePromptViewDelegate> _delegate;
    long long _followStateOverride;
    T1StatusInlinePromptViewModel *_viewModel;
    TFNTooltipView *_topicPromptView;
    T1StatusInlinePromptContentView *_topicPromptContentView;
}

+ (struct CGSize)sizeForViewModel:(id)arg1 maximumWidth:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) T1StatusInlinePromptContentView *topicPromptContentView; // @synthesize topicPromptContentView=_topicPromptContentView;
@property(retain, nonatomic) TFNTooltipView *topicPromptView; // @synthesize topicPromptView=_topicPromptView;
@property(retain, nonatomic) T1StatusInlinePromptViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) long long followStateOverride; // @synthesize followStateOverride=_followStateOverride;
@property(nonatomic) __weak id <T1StatusInlinePromptViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateWithViewModel:(id)arg1;
- (void)pointPromptArrow:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

