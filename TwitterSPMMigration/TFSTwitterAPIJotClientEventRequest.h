//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TFSTwitterAPIJotClientEventRequest
{
}

+ (id)configuration;
+ (long long)expectedRequestAnatomy;
+ (unsigned long long)responseHydrationFlags;
+ (unsigned long long)supportedAuthenticationTypes;
+ (id)endpointPath;
+ (long long)HTTPMethodValue;
- (id)initWithLog:(id)arg1 language:(id)arg2 retryDistribution:(id)arg3 isDebug:(_Bool)arg4 context:(id)arg5 responseModelBuilder:(id)arg6;
- (id)initWithEndpointPath:(id)arg1 parameters:(id)arg2 multipartFormData:(id)arg3 bodyData:(id)arg4 bodyFilePath:(id)arg5 headerFields:(id)arg6 context:(id)arg7 responseModelBuilder:(id)arg8 emptyResponseDataExpected:(_Bool)arg9;

@end

