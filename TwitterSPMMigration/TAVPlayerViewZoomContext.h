//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIPanGestureRecognizer, UIPinchGestureRecognizer;

@interface TAVPlayerViewZoomContext : NSObject
{
    _Bool _isZooming;
    UIPinchGestureRecognizer *_pinchGesture;
    UIPanGestureRecognizer *_panGesture;
    double _zoomCoefficient;
    double _zoomCoefficientAtStart;
    struct CGPoint _zoomLocation;
    struct CGPoint _pinchGestureLocation;
    struct CGPoint _pinchGestureLocationInOutputView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isZooming; // @synthesize isZooming=_isZooming;
@property(nonatomic) struct CGPoint pinchGestureLocationInOutputView; // @synthesize pinchGestureLocationInOutputView=_pinchGestureLocationInOutputView;
@property(nonatomic) struct CGPoint pinchGestureLocation; // @synthesize pinchGestureLocation=_pinchGestureLocation;
@property(nonatomic) struct CGPoint zoomLocation; // @synthesize zoomLocation=_zoomLocation;
@property(nonatomic) double zoomCoefficientAtStart; // @synthesize zoomCoefficientAtStart=_zoomCoefficientAtStart;
@property(nonatomic) double zoomCoefficient; // @synthesize zoomCoefficient=_zoomCoefficient;
@property(readonly, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(readonly, nonatomic) UIPinchGestureRecognizer *pinchGesture; // @synthesize pinchGesture=_pinchGesture;
- (id)copyWithDefaultValues;
- (id)initWithPinchGesture:(id)arg1 panGesture:(id)arg2;
- (id)init;

@end

