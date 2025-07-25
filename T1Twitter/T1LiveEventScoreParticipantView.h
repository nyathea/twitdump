//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class T1ScoreParticipantInfo, UIImageView, UILabel, UIStackView;

@interface T1LiveEventScoreParticipantView : UIView
{
    T1ScoreParticipantInfo *_participantInfo;
    UIStackView *_stackView;
    UIImageView *_logoImageView;
    UILabel *_abbreviationLabel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UILabel *abbreviationLabel; // @synthesize abbreviationLabel=_abbreviationLabel;
@property(readonly, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) T1ScoreParticipantInfo *participantInfo; // @synthesize participantInfo=_participantInfo;
- (void)tfn_fontSizeChanged;
- (id)_t1_abbreviationFont;
- (void)_t1_updateSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithImagePipeline:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

