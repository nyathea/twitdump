//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class MISSING_TYPE;

@interface T1CameraRecordButton : UIControl
{
    MISSING_TYPE *buttonState;
    MISSING_TYPE *requiresHoldDown;
    MISSING_TYPE *isRecording;
    MISSING_TYPE *isBeingTracked;
    MISSING_TYPE *ringView;
    MISSING_TYPE *backCircleView;
    MISSING_TYPE *redDotView;
    MISSING_TYPE *lastBounds;
    MISSING_TYPE *touchTrackingDistance;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(nonatomic) double touchTrackingDistance; // @synthesize touchTrackingDistance;
@property(nonatomic) _Bool highlighted;
- (_Bool)isHighlighted;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(nonatomic) _Bool enabled;
- (_Bool)isEnabled;
@property(nonatomic) _Bool isRecording; // @synthesize isRecording;
@property(nonatomic) _Bool requiresHoldDown; // @synthesize requiresHoldDown;

@end

