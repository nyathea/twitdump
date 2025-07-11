//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, TNUServiceHTTPConfiguration;
@protocol TFSTwitterAuthTimelineTokenStorageDelegate;

@interface TFSTwitterAPIXAuthPasswordCommand
{
    _Bool _supportOneFactorAuthorization;
    NSString *_ident;
    NSString *_password;
    NSString *_simCountryCode;
    NSString *_knownDeviceToken;
    TNUServiceHTTPConfiguration *_HTTPRequestConfiguration;
    NSString *_uiMetrics;
    id <TFSTwitterAuthTimelineTokenStorageDelegate> _authTokenStorage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <TFSTwitterAuthTimelineTokenStorageDelegate> authTokenStorage; // @synthesize authTokenStorage=_authTokenStorage;
@property(copy, nonatomic) NSString *uiMetrics; // @synthesize uiMetrics=_uiMetrics;
@property(retain, nonatomic) TNUServiceHTTPConfiguration *HTTPRequestConfiguration; // @synthesize HTTPRequestConfiguration=_HTTPRequestConfiguration;
@property(copy, nonatomic) NSString *knownDeviceToken; // @synthesize knownDeviceToken=_knownDeviceToken;
@property(nonatomic) _Bool supportOneFactorAuthorization; // @synthesize supportOneFactorAuthorization=_supportOneFactorAuthorization;
@property(copy, nonatomic) NSString *simCountryCode; // @synthesize simCountryCode=_simCountryCode;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *ident; // @synthesize ident=_ident;
- (id)requestConfigurationForAPIRequest:(id)arg1 requestConfiguration:(id)arg2;
- (void)completeWithResponse:(id)arg1;
- (void)scribeCommandAttemptResponse:(id)arg1 willRetry:(_Bool)arg2 to:(id)arg3;
- (long long)networkTransactionMetricsStatusForResponse:(id)arg1;
- (id)request;
- (id)initWithContext:(id)arg1 accountID:(id)arg2 authContext:(id)arg3 identifier:(id)arg4 password:(id)arg5 simCountryCode:(id)arg6 httpRequestConfiguration:(id)arg7 supportOneFactorAuthorization:(_Bool)arg8 knownDeviceToken:(id)arg9 uiMetrics:(id)arg10 authTokenStorage:(id)arg11 source:(unsigned long long)arg12 responseModelBuilder:(id)arg13 completionBlock:(CDUnknownBlockType)arg14;

@end

