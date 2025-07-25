//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol TIPXMP4DecoderConfig;

@interface TIPXMP4Decoder : NSObject
{
    id <TIPXMP4DecoderConfig> _defaultDecoderConfig;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <TIPXMP4DecoderConfig> defaultDecoderConfig; // @synthesize defaultDecoderConfig=_defaultDecoderConfig;
- (long long)tip_finalizeDecoding:(id)arg1;
- (id)tip_renderImage:(id)arg1 renderMode:(long long)arg2 targetDimensions:(struct CGSize)arg3 targetContentMode:(long long)arg4;
- (long long)tip_append:(id)arg1 data:(id)arg2;
- (id)tip_initiateDecoding:(id)arg1 expectedDataLength:(unsigned long long)arg2 buffer:(id)arg3;
- (long long)tip_detectDecodableData:(id)arg1 isCompleteData:(_Bool)arg2 earlyGuessImageType:(id)arg3;
- (id)initWithDefaultDecoderConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

