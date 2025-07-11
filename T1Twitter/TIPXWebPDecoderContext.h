//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableData, NSString, TIPImageContainer;

@interface TIPXWebPDecoderContext : NSObject
{
    struct {
        unsigned int didEncounterFailure:1;
        unsigned int didLoadHeaders:1;
        unsigned int didLoadFrame:1;
        unsigned int didComplete:1;
        unsigned int isAnimated:1;
        unsigned int isCachedImageFirstFrame:1;
    } _flags;
    NSMutableData *_dataBuffer;
    TIPImageContainer *_cachedImageContainer;
    _Bool _tip_hasAlpha;
    unsigned long long _tip_frameCount;
    unsigned long long _expectedContentLength;
    struct CGSize _tip_dimensions;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long tip_frameCount; // @synthesize tip_frameCount=_tip_frameCount;
@property(readonly, nonatomic) _Bool tip_hasAlpha; // @synthesize tip_hasAlpha=_tip_hasAlpha;
@property(readonly, nonatomic) struct CGSize tip_dimensions; // @synthesize tip_dimensions=_tip_dimensions;
@property(readonly, nonatomic) NSData *tip_data; // @synthesize tip_data=_dataBuffer;
- (void)dealloc;
- (id)initWithExpectedContentLength:(unsigned long long)arg1 buffer:(id)arg2;
@property(readonly, nonatomic) id tip_config;
@property(readonly, nonatomic) _Bool tip_isAnimated;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool tip_hasGPSInfo;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) _Bool tip_isProgressive;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N


@end

