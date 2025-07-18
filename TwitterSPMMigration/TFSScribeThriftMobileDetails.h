//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TFSScribeThriftMobileDetails : NSObject
{
    _Bool _mobileCarrierIsSet;
    _Bool _orientationIsSet;
    _Bool _signalStrengthIsSet;
    _Bool _limitAdTracking;
    _Bool _limitAdTrackingIsSet;
    _Bool _mobileNetworkOperatorCountryCodeIsSet;
    _Bool _mobileNetworkOperatorIsoCountryCodeIsSet;
    _Bool _mobileNetworkOperatorCodeIsSet;
    _Bool _mobileNetworkOperatorNameIsSet;
    _Bool _mobileSimProviderIsoCountryCodeIsSet;
    _Bool _mobileSimProviderCodeIsSet;
    _Bool _mobileSimProviderNameIsSet;
    _Bool _radioStatusIsSet;
    _Bool _isRoaming;
    _Bool _isRoamingIsSet;
    int _signalStrength;
    NSString *_mobileCarrier;
    long long _orientation;
    NSString *_mobileNetworkOperatorCountryCode;
    NSString *_mobileNetworkOperatorIsoCountryCode;
    NSString *_mobileNetworkOperatorCode;
    NSString *_mobileNetworkOperatorName;
    NSString *_mobileSimProviderIsoCountryCode;
    NSString *_mobileSimProviderCode;
    NSString *_mobileSimProviderName;
    long long _radioStatus;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isRoamingIsSet; // @synthesize isRoamingIsSet=_isRoamingIsSet;
@property(nonatomic) _Bool isRoaming; // @synthesize isRoaming=_isRoaming;
@property(readonly, nonatomic) _Bool radioStatusIsSet; // @synthesize radioStatusIsSet=_radioStatusIsSet;
@property(nonatomic) long long radioStatus; // @synthesize radioStatus=_radioStatus;
@property(readonly, nonatomic) _Bool mobileSimProviderNameIsSet; // @synthesize mobileSimProviderNameIsSet=_mobileSimProviderNameIsSet;
@property(copy, nonatomic) NSString *mobileSimProviderName; // @synthesize mobileSimProviderName=_mobileSimProviderName;
@property(readonly, nonatomic) _Bool mobileSimProviderCodeIsSet; // @synthesize mobileSimProviderCodeIsSet=_mobileSimProviderCodeIsSet;
@property(copy, nonatomic) NSString *mobileSimProviderCode; // @synthesize mobileSimProviderCode=_mobileSimProviderCode;
@property(readonly, nonatomic) _Bool mobileSimProviderIsoCountryCodeIsSet; // @synthesize mobileSimProviderIsoCountryCodeIsSet=_mobileSimProviderIsoCountryCodeIsSet;
@property(copy, nonatomic) NSString *mobileSimProviderIsoCountryCode; // @synthesize mobileSimProviderIsoCountryCode=_mobileSimProviderIsoCountryCode;
@property(readonly, nonatomic) _Bool mobileNetworkOperatorNameIsSet; // @synthesize mobileNetworkOperatorNameIsSet=_mobileNetworkOperatorNameIsSet;
@property(copy, nonatomic) NSString *mobileNetworkOperatorName; // @synthesize mobileNetworkOperatorName=_mobileNetworkOperatorName;
@property(readonly, nonatomic) _Bool mobileNetworkOperatorCodeIsSet; // @synthesize mobileNetworkOperatorCodeIsSet=_mobileNetworkOperatorCodeIsSet;
@property(copy, nonatomic) NSString *mobileNetworkOperatorCode; // @synthesize mobileNetworkOperatorCode=_mobileNetworkOperatorCode;
@property(readonly, nonatomic) _Bool mobileNetworkOperatorIsoCountryCodeIsSet; // @synthesize mobileNetworkOperatorIsoCountryCodeIsSet=_mobileNetworkOperatorIsoCountryCodeIsSet;
@property(copy, nonatomic) NSString *mobileNetworkOperatorIsoCountryCode; // @synthesize mobileNetworkOperatorIsoCountryCode=_mobileNetworkOperatorIsoCountryCode;
@property(readonly, nonatomic) _Bool mobileNetworkOperatorCountryCodeIsSet; // @synthesize mobileNetworkOperatorCountryCodeIsSet=_mobileNetworkOperatorCountryCodeIsSet;
@property(copy, nonatomic) NSString *mobileNetworkOperatorCountryCode; // @synthesize mobileNetworkOperatorCountryCode=_mobileNetworkOperatorCountryCode;
@property(readonly, nonatomic) _Bool limitAdTrackingIsSet; // @synthesize limitAdTrackingIsSet=_limitAdTrackingIsSet;
@property(nonatomic) _Bool limitAdTracking; // @synthesize limitAdTracking=_limitAdTracking;
@property(readonly, nonatomic) _Bool signalStrengthIsSet; // @synthesize signalStrengthIsSet=_signalStrengthIsSet;
@property(nonatomic) int signalStrength; // @synthesize signalStrength=_signalStrength;
@property(readonly, nonatomic) _Bool orientationIsSet; // @synthesize orientationIsSet=_orientationIsSet;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) _Bool mobileCarrierIsSet; // @synthesize mobileCarrierIsSet=_mobileCarrierIsSet;
@property(copy, nonatomic) NSString *mobileCarrier; // @synthesize mobileCarrier=_mobileCarrier;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMobileCarrier:(id)arg1 orientation:(long long)arg2 signalStrength:(int)arg3 limitAdTracking:(_Bool)arg4 mobileNetworkOperatorCountryCode:(id)arg5 mobileNetworkOperatorIsoCountryCode:(id)arg6 mobileNetworkOperatorCode:(id)arg7 mobileNetworkOperatorName:(id)arg8 mobileSimProviderIsoCountryCode:(id)arg9 mobileSimProviderCode:(id)arg10 mobileSimProviderName:(id)arg11 radioStatus:(long long)arg12 isRoaming:(_Bool)arg13;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

