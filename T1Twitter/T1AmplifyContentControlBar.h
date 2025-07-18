//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class T1MediaSlider, UILabel;
@protocol T1AmplifyContentControlBarDelegate;

@interface T1AmplifyContentControlBar
{
    UILabel *_countUpLabel;
    UILabel *_countDividerLabel;
    UILabel *_durationLabel;
    T1MediaSlider *_slider;
    id <T1AmplifyContentControlBarDelegate> _contentDelegate;
    double _contentDuration;
    double _currentPlaybackTime;
}

- (void).cxx_destruct;
@property(nonatomic) double currentPlaybackTime; // @synthesize currentPlaybackTime=_currentPlaybackTime;
@property(nonatomic) double contentDuration; // @synthesize contentDuration=_contentDuration;
@property(nonatomic) __weak id <T1AmplifyContentControlBarDelegate> contentDelegate; // @synthesize contentDelegate=_contentDelegate;
- (void)setupConstraints;
- (void)_scrubDidEnd;
- (void)_scrubDidChange;
- (void)_scrubDidBegin;
- (void)updateWithCurrentPlaybackState:(id)arg1;
- (double)sliderTimeWithDuration:(double)arg1;
- (id)newBarLabel;
@property(readonly, nonatomic) T1MediaSlider *slider; // @synthesize slider=_slider;
@property(readonly, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(readonly, nonatomic) UILabel *countDividerLabel; // @synthesize countDividerLabel=_countDividerLabel;
@property(readonly, nonatomic) UILabel *countUpLabel; // @synthesize countUpLabel=_countUpLabel;

@end

