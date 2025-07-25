//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol TFSTwitterAPICommandConfiguration, TFSTwitterLegacyScribeIntegration;

@interface TFSTwitterAPICommandScribe : NSObject
{
    NSString *_accountID;
    id <TFSTwitterLegacyScribeIntegration> _scribeIntegration;
    id <TFSTwitterAPICommandConfiguration> _configuration;
}

+ (_Bool)internal_shouldScribeSampleWithSampleSize:(long long)arg1 maximalDogfoodScribingForRequest:(id)arg2;
+ (_Bool)internal_shouldScribeSampleWithSampleSize:(long long)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <TFSTwitterAPICommandConfiguration> configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) id <TFSTwitterLegacyScribeIntegration> scribeIntegration; // @synthesize scribeIntegration=_scribeIntegration;
@property(readonly, copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (id)legacyScribeForResponse:(id)arg1;
- (id)internal_guestScribe;
- (id)internal_accountScribe;
- (void)logTFSTwitterAPIDisallowedEndpointURL:(id)arg1;
- (void)logTransactionMetrics:(id)arg1 forResponse:(id)arg2;
- (void)logTFSTwitterAPIGuestAuthError:(id)arg1 request:(id)arg2 willRetry:(_Bool)arg3 retryCount:(unsigned long long)arg4;
- (void)logTFSTwitterAPIAuthDependencyError:(id)arg1 request:(id)arg2;
- (void)logTFSTwitterAPIRedirect:(id)arg1 toRequest:(id)arg2 requestOperationId:(id)arg3;
- (void)logTFSTwitterAPIResponse:(id)arg1 request:(id)arg2;
- (id)initWithAccountID:(id)arg1 scribeIntegration:(id)arg2 configuration:(id)arg3;
- (void)logRedirectFrom:(id)arg1 to:(id)arg2 requestOperationId:(long long)arg3;
- (void)logWithAuthDependencyError:(id)arg1 for:(id)arg2;
- (void)logWithAttempt:(id)arg1 for:(id)arg2 disposition:(long long)arg3 retryCount:(unsigned long long)arg4;

@end

