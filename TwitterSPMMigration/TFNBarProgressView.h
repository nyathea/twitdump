//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface TFNBarProgressView : UIView
{
    UIView *_trackView;
    float _progress;
    UIView *_progressView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) float progress; // @synthesize progress=_progress;
- (struct CGRect)_frameForProgress:(float)arg1;
- (void)setProgress:(float)arg1 animated:(_Bool)arg2 animationDuration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setProgress:(float)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)layoutSubviews;
@property(retain, nonatomic) UIColor *progressTintColor;
@property(retain, nonatomic) UIColor *trackTintColor;
- (id)initWithFrame:(struct CGRect)arg1;

@end

