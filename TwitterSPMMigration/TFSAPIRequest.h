//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString, NSURL, TFSAPIMultipartFormData, TNLRequestConfiguration;

@interface TFSAPIRequest : NSObject
{
    long long _HTTPMethodValue;
    NSURL *_URL;
    NSData *_HTTPBody;
    TFSAPIMultipartFormData *_multipartFormData;
    NSDictionary *_headerFields;
    TNLRequestConfiguration *_requestConfiguration;
    NSString *_HTTPBodyFilePath;
    _Bool _parametersEmbeddedInQuery;
    _Bool _emptyResponseDataExpected;
    NSString *_endpointURLString;
    NSDictionary *_parameters;
}

+ (Class)responseClass;
- (void).cxx_destruct;
@property(readonly, nonatomic) TNLRequestConfiguration *requestConfiguration; // @synthesize requestConfiguration=_requestConfiguration;
@property(readonly, copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(readonly, copy, nonatomic) NSString *endpointURLString; // @synthesize endpointURLString=_endpointURLString;
@property(readonly, nonatomic, getter=isEmptyResponseDataExpected) _Bool emptyResponseDataExpected; // @synthesize emptyResponseDataExpected=_emptyResponseDataExpected;
@property(readonly, nonatomic, getter=areParametersEmbeddedInQuery) _Bool parametersEmbeddedInQuery; // @synthesize parametersEmbeddedInQuery=_parametersEmbeddedInQuery;
- (void)cleanUp;
- (id)objectWithResponseData:(id)arg1 headerFields:(id)arg2 error:(out id *)arg3;
@property(readonly, copy, nonatomic) NSString *HTTPBodyFilePath;
@property(readonly, nonatomic) NSData *HTTPBody;
@property(readonly, copy, nonatomic) NSDictionary *allHTTPHeaderFields;
@property(readonly, nonatomic) long long HTTPMethodValue;
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, nonatomic) long long requestPriority;
- (id)initWithHTTPMethodValue:(long long)arg1 endpointURLString:(id)arg2 parameters:(id)arg3 multipartFormData:(id)arg4 bodyData:(id)arg5 bodyFilePath:(id)arg6 headerFields:(id)arg7 requestConfiguration:(id)arg8 emptyResponseDataExpected:(_Bool)arg9;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

