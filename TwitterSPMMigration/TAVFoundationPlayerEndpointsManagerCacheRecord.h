//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL, TAVVideoQualityEndpoint;

@interface TAVFoundationPlayerEndpointsManagerCacheRecord : NSObject
{
    TAVVideoQualityEndpoint *_cacheEndpoint;
    NSURL *_assetURL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
@property(readonly, nonatomic) TAVVideoQualityEndpoint *cacheEndpoint; // @synthesize cacheEndpoint=_cacheEndpoint;
- (id)initWithAssetURL:(id)arg1;

@end

