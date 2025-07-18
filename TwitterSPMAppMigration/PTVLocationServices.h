//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLLocation, CLLocationManager, NSDate, NSString;
@protocol PTVLocationServicesDelegate;

@interface PTVLocationServices : NSObject
{
    CLLocationManager *_locationManager;
    CLLocation *_lastRecordedLocation;
    double _lastRecordedHeading;
    NSDate *_lastRecordedTime;
    _Bool _isTrackingLocation;
    id <PTVLocationServicesDelegate> _delegate;
}

+ (int)AuthorizationStatus;
+ (_Bool)CanAttemptToTrackLocation;
+ (_Bool)HasPermissionToTrackLocation;
- (void).cxx_destruct;
@property(nonatomic) __weak id <PTVLocationServicesDelegate> delegate; // @synthesize delegate=_delegate;
- (void)requestWhenInUseAuthorization;
- (struct CLLocationCoordinate2D)abstractedCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
- (_Bool)shouldReportStandardUpdates:(id)arg1 heading:(double)arg2;
- (id)initWithDelegate:(id)arg1;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

