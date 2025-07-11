//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString, TAVVideoQualityEndpoint;

@interface TAVVideoQualityState : NSObject
{
    TAVVideoQualityEndpoint *_selectedQualityEndpoint;
    NSSet *_availableEndpoints;
    TAVVideoQualityEndpoint *_cacheEndpoint;
    NSString *_mutationReason;
    struct CGSize _maxResolution;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *mutationReason; // @synthesize mutationReason=_mutationReason;
@property(readonly, nonatomic) struct CGSize maxResolution; // @synthesize maxResolution=_maxResolution;
@property(readonly, nonatomic) TAVVideoQualityEndpoint *cacheEndpoint; // @synthesize cacheEndpoint=_cacheEndpoint;
@property(readonly, copy, nonatomic) NSSet *availableEndpoints; // @synthesize availableEndpoints=_availableEndpoints;
@property(readonly, nonatomic) TAVVideoQualityEndpoint *selectedQualityEndpoint; // @synthesize selectedQualityEndpoint=_selectedQualityEndpoint;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithSelectedQualityEndpoint:(id)arg1 availableEndpoints:(id)arg2 cacheEndpoint:(id)arg3 maxResolution:(struct CGSize)arg4 mutationReason:(id)arg5;

@end

