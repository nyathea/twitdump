//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIStackView.h>

@class NSString, TASVoiceRecordingIndicatorView, TCRVoiceRecordingViewModel, UILabel;

@interface TCRVoiceRecordingTitleView : UIStackView
{
    TCRVoiceRecordingViewModel *_viewModel;
    TASVoiceRecordingIndicatorView *_recordingIndicator;
    UILabel *_titleLabel;
}

+ (id)new;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TASVoiceRecordingIndicatorView *recordingIndicator; // @synthesize recordingIndicator=_recordingIndicator;
@property(retain, nonatomic) TCRVoiceRecordingViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)voiceRecordingViewModelDidUpdateStep:(id)arg1;
- (id)initWithViewModel:(id)arg1;
- (id)initWithArrangedSubviews:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

