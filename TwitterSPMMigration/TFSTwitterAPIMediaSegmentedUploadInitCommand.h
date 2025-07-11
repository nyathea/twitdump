//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface TFSTwitterAPIMediaSegmentedUploadInitCommand
{
    _Bool _isVoice;
    _Bool _canUploadFullHDVideo;
    _Bool _canUpload4kVideo;
    unsigned long long _totalRequestRetryCount;
    NSString *_mediaType;
    NSNumber *_totalBytes;
    NSString *_scribeComponent;
    NSString *_scribeElement;
    NSString *_mediaCategory;
    NSString *_sourceURLString;
    NSNumber *_durationInMilliseconds;
    unsigned long long _permittedRequestRetryCount;
    double _requestRetryDelay;
    CDUnknownBlockType _mediaIDExtractorBlock;
    struct CGPoint _salientPoint;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType mediaIDExtractorBlock; // @synthesize mediaIDExtractorBlock=_mediaIDExtractorBlock;
@property(nonatomic) double requestRetryDelay; // @synthesize requestRetryDelay=_requestRetryDelay;
@property(nonatomic) unsigned long long permittedRequestRetryCount; // @synthesize permittedRequestRetryCount=_permittedRequestRetryCount;
@property(retain, nonatomic) NSNumber *durationInMilliseconds; // @synthesize durationInMilliseconds=_durationInMilliseconds;
@property(nonatomic) _Bool canUpload4kVideo; // @synthesize canUpload4kVideo=_canUpload4kVideo;
@property(nonatomic) _Bool canUploadFullHDVideo; // @synthesize canUploadFullHDVideo=_canUploadFullHDVideo;
@property(nonatomic) _Bool isVoice; // @synthesize isVoice=_isVoice;
@property(nonatomic) struct CGPoint salientPoint; // @synthesize salientPoint=_salientPoint;
@property(retain, nonatomic) NSString *sourceURLString; // @synthesize sourceURLString=_sourceURLString;
@property(retain, nonatomic) NSString *mediaCategory; // @synthesize mediaCategory=_mediaCategory;
@property(retain, nonatomic) NSString *scribeElement; // @synthesize scribeElement=_scribeElement;
@property(retain, nonatomic) NSString *scribeComponent; // @synthesize scribeComponent=_scribeComponent;
@property(retain, nonatomic) NSNumber *totalBytes; // @synthesize totalBytes=_totalBytes;
@property(retain, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) unsigned long long totalRequestRetryCount; // @synthesize totalRequestRetryCount=_totalRequestRetryCount;
- (id)_errorWithResponse:(id)arg1 code:(long long)arg2;
- (id)requestConfigurationForAPIRequest:(id)arg1 requestConfiguration:(id)arg2;
- (void)APIRequest:(id)arg1 requestOperation:(id)arg2 didCompleteWithResponse:(id)arg3;
- (_Bool)shouldEndNetworkTransactionMetrics;
- (void)scribeCommandResponse:(id)arg1 to:(id)arg2;
- (id)APICommandErrorFromAPIResponse:(id)arg1;
- (void)processResponse:(id)arg1;
- (id)request;
- (id)initWithContext:(id)arg1 accountID:(id)arg2 mediaType:(id)arg3 mediaCategory:(id)arg4 totalBytes:(id)arg5 sourceURLString:(id)arg6 salientPoint:(struct CGPoint)arg7 isVoice:(_Bool)arg8 canUploadFullHDVideo:(_Bool)arg9 canUpload4kVideo:(_Bool)arg10 durationInMilliseconds:(id)arg11 scribeComponent:(id)arg12 scribeElement:(id)arg13 permittedRequestRetryCount:(unsigned long long)arg14 requestRetryDelay:(double)arg15 source:(unsigned long long)arg16 networkTransactionMetrics:(id)arg17 responseModelBuilder:(id)arg18 mediaIDExtractorBlock:(CDUnknownBlockType)arg19 completionBlock:(CDUnknownBlockType)arg20;

@end

