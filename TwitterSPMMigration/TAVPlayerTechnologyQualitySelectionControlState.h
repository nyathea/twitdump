//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TAVVideoQualityEndpoint;

@interface TAVPlayerTechnologyQualitySelectionControlState : NSObject
{
    _Bool _staticEndpointsEnabled;
    TAVVideoQualityEndpoint *_videoQualityEndpoint;
    NSString *_mutationReason;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *mutationReason; // @synthesize mutationReason=_mutationReason;
@property(readonly, nonatomic) _Bool staticEndpointsEnabled; // @synthesize staticEndpointsEnabled=_staticEndpointsEnabled;
@property(readonly, nonatomic) TAVVideoQualityEndpoint *videoQualityEndpoint; // @synthesize videoQualityEndpoint=_videoQualityEndpoint;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initVideoQualityEndpoint:(id)arg1 staticEndpointsEnabled:(_Bool)arg2 mutationReason:(id)arg3;

@end

