//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol TFSTwitterLegacyScribeConfiguration, TFSTwitterLegacyScribeOptions, TFSTwitterScribeWriter;

@interface TFSTwitterLegacyScribe : NSObject
{
    id <TFSTwitterScribeWriter> _scribeWriter;
    id <TFSTwitterLegacyScribeConfiguration> _configuration;
    id <TFSTwitterLegacyScribeOptions> _options;
    CDUnknownBlockType _isAppBackgroundedTest;
    NSString *_accountID;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(readonly, copy, nonatomic) CDUnknownBlockType isAppBackgroundedTest; // @synthesize isAppBackgroundedTest=_isAppBackgroundedTest;
@property(readonly, nonatomic) id <TFSTwitterLegacyScribeOptions> options; // @synthesize options=_options;
@property(readonly, nonatomic) id <TFSTwitterLegacyScribeConfiguration> configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) id <TFSTwitterScribeWriter> scribeWriter; // @synthesize scribeWriter=_scribeWriter;
- (void)logJSONEvent:(id)arg1;
- (void)logErrorWithType:(id)arg1 functionName:(id)arg2;
- (_Bool)shouldLogPerformanceEvent:(id)arg1;
- (void)logPerformanceEvent:(id)arg1 duration:(double)arg2 impressionID:(id)arg3 metadata:(id)arg4 size:(long long)arg5;
- (void)logPerformanceEvent:(id)arg1 duration:(double)arg2 impressionID:(id)arg3 metadata:(id)arg4;
- (void)logPerformanceEvent:(id)arg1 duration:(double)arg2 promotedImpressionID:(id)arg3;
- (void)logPerformanceEvent:(id)arg1 duration:(double)arg2 metadata:(id)arg3;
- (void)logPerformanceEvent:(id)arg1 duration:(double)arg2;
- (void)logPerformanceEvent:(id)arg1 duration:(double)arg2 count:(long long)arg3;
- (void)logPerformanceEvent:(id)arg1 duration:(double)arg2 impressionID:(id)arg3 promotedImpressionID:(id)arg4 metadata:(id)arg5 size:(long long)arg6;
- (void)logPerformanceEvent:(id)arg1 duration:(double)arg2 impressionID:(id)arg3 promotedImpressionID:(id)arg4 metadata:(id)arg5;
- (void)logPerformanceEvent:(id)arg1 size:(long long)arg2;
- (void)logEvent:(id)arg1 parameters:(id)arg2;
- (void)logAction:(id)arg1 page:(id)arg2 section:(id)arg3 component:(id)arg4 element:(id)arg5 parameters:(id)arg6;
- (void)logAction:(id)arg1 page:(id)arg2 section:(id)arg3 component:(id)arg4 parameters:(id)arg5;
- (void)logAction:(id)arg1 page:(id)arg2 section:(id)arg3 component:(id)arg4 element:(id)arg5;
- (void)logAction:(id)arg1 page:(id)arg2 section:(id)arg3 component:(id)arg4;
- (void)logAction:(id)arg1 page:(id)arg2 section:(id)arg3;
- (id)_scribeGroup;
- (id)initWithIntegration:(id)arg1 accountID:(id)arg2;
- (void)logTimelineRequestResponse:(id)arg1 willRetry:(_Bool)arg2 APIError:(id)arg3;
- (void)logLoginRequestResponse:(id)arg1 willRetry:(_Bool)arg2 APIError:(id)arg3;
- (void)logRetweetRequestResponse:(id)arg1 willRetry:(_Bool)arg2 APIError:(id)arg3;
- (void)logFollowRequestResponse:(id)arg1 willRetry:(_Bool)arg2 APIError:(id)arg3;
- (void)logTweetRequestResponse:(id)arg1 withStatusID:(id)arg2 hasMedia:(_Bool)arg3 willRetry:(_Bool)arg4 APIError:(id)arg5;
- (void)logFavoriteRequestResponse:(id)arg1 forCreate:(_Bool)arg2 willRetry:(_Bool)arg3 APIError:(id)arg4;
- (void)logMediaUploadRequestResponse:(id)arg1 context:(id)arg2 mediaUploadScribeParameters:(id)arg3 scribeComponent:(id)arg4 scribeElement:(id)arg5 APIError:(id)arg6;
- (void)logSendStatusRequestResponse:(id)arg1 isDraft:(_Bool)arg2 hasMedia:(_Bool)arg3;
- (void)_logRetryableTNLResponse:(id)arg1 totalDuration:(double)arg2 retryCount:(long long)arg3 attemptDuration:(double)arg4 transactionID:(id)arg5 context:(id)arg6 items:(id)arg7 event:(id)arg8 APIError:(id)arg9;
- (void)logTwitterServiceRequestTNLResponse:(id)arg1 withScribePage:(id)arg2 section:(id)arg3 component:(id)arg4 element:(id)arg5 context:(id)arg6 items:(id)arg7 succeeded:(_Bool)arg8 willRetry:(_Bool)arg9 APIError:(id)arg10;
- (id)_operationScribeParameters:(id)arg1 transactionID:(id)arg2 context:(id)arg3;
- (id)_scribeParametersWithFinalURL:(id)arg1 transactionID:(id)arg2 duration:(double)arg3 polling:(_Bool)arg4 message:(id)arg5 failureType:(id)arg6 statusCode:(long long)arg7 reachabilityNetworkStatus:(long long)arg8 context:(id)arg9 performanceParameters:(id)arg10;
- (id)tnlRequestScribeParameters:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

