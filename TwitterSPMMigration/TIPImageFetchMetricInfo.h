//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURLRequest;

@interface TIPImageFetchMetricInfo : NSObject
{
    struct {
        unsigned int wasCancelled:1;
        unsigned int didEnd:1;
    } _flags;
    unsigned long long _machStartTime;
    unsigned long long _machEndTime;
    double _renderLatency;
    unsigned long long _machFirstTime;
    long long _firstResult;
    double _firstResultRenderLatency;
    _Bool _wasLoadedSynchronously;
    long long _source;
    long long _result;
    id _networkMetrics;
    NSURLRequest *_networkRequest;
    double _totalNetworkLoadDuration;
    double _firstProgressiveFrameNetworkLoadDuration;
    unsigned long long _networkImageSizeInBytes;
    NSString *_networkImageType;
    struct CGSize _networkImageDimensions;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGSize networkImageDimensions; // @synthesize networkImageDimensions=_networkImageDimensions;
@property(readonly, copy, nonatomic) NSString *networkImageType; // @synthesize networkImageType=_networkImageType;
@property(readonly, nonatomic) unsigned long long networkImageSizeInBytes; // @synthesize networkImageSizeInBytes=_networkImageSizeInBytes;
@property(readonly, nonatomic) double firstProgressiveFrameNetworkLoadDuration; // @synthesize firstProgressiveFrameNetworkLoadDuration=_firstProgressiveFrameNetworkLoadDuration;
@property(readonly, nonatomic) double totalNetworkLoadDuration; // @synthesize totalNetworkLoadDuration=_totalNetworkLoadDuration;
@property(readonly, nonatomic) NSURLRequest *networkRequest; // @synthesize networkRequest=_networkRequest;
@property(readonly, nonatomic) id networkMetrics; // @synthesize networkMetrics=_networkMetrics;
@property(readonly, nonatomic) _Bool wasLoadedSynchronously; // @synthesize wasLoadedSynchronously=_wasLoadedSynchronously;
@property(readonly, nonatomic) long long result; // @synthesize result=_result;
@property(readonly, nonatomic) long long source; // @synthesize source=_source;
- (id)description;
@property(readonly, nonatomic) float networkImagePixelsPerByte;
@property(readonly, nonatomic) _Bool wasCancelled;
@property(readonly, nonatomic) double loadDuration;
- (id)init;

@end

