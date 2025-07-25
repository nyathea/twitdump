//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint, TAVCaptionView, TFNSolidColorView;
@protocol T1VideoCaptionsViewDelegate;

@interface T1VideoCaptionsView : UIView
{
    double _minimumCaptionSize;
    double _maximumCaptionSize;
    long long _displayMode;
    long long _alignment;
    id <T1VideoCaptionsViewDelegate> _delegate;
    TAVCaptionView *_captionView;
    NSArray *_currentCaptionModels;
    NSLayoutConstraint *_verticalAlignmentConstraint;
    UIView *_captionContainer;
    TFNSolidColorView *_backgroundView;
    struct UIEdgeInsets _captionInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TFNSolidColorView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *captionContainer; // @synthesize captionContainer=_captionContainer;
@property(retain, nonatomic) NSLayoutConstraint *verticalAlignmentConstraint; // @synthesize verticalAlignmentConstraint=_verticalAlignmentConstraint;
@property(copy, nonatomic) NSArray *currentCaptionModels; // @synthesize currentCaptionModels=_currentCaptionModels;
@property(retain, nonatomic) TAVCaptionView *captionView; // @synthesize captionView=_captionView;
@property(nonatomic) __weak id <T1VideoCaptionsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct UIEdgeInsets captionInsets; // @synthesize captionInsets=_captionInsets;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(nonatomic) long long displayMode; // @synthesize displayMode=_displayMode;
@property(nonatomic) double maximumCaptionSize; // @synthesize maximumCaptionSize=_maximumCaptionSize;
@property(nonatomic) double minimumCaptionSize; // @synthesize minimumCaptionSize=_minimumCaptionSize;
- (void)_t1_resetCaptionsIfNeeded;
- (_Bool)_t1_isPlayingAudioWithState:(id)arg1;
- (_Bool)_t1_shouldDisplayCaptionsForState:(id)arg1;
- (void)playbackStateDidChange:(id)arg1;
- (void)captionSourceDidUpdateWithCaptionModels:(id)arg1;
- (void)_t1_updateAlignmentConstraint;
- (void)_t1_enableCaptions;
- (void)_t1_setUpCaptionsViewIfNeeded;
- (void)_t1_updateDisplayWithCaptionModels:(id)arg1;
- (void)resetIfNeeded;
- (id)initWithFrame:(struct CGRect)arg1;

@end

