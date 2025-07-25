//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol TNLContentDecoderClient;

@interface TNLXZLibContentDecoderContext : NSObject
{
    struct z_stream_s _zStream;
    unsigned char _outBuffer[16384];
    char *_outRef;
    struct {
        int zStatus;
        unsigned int didInit:1;
    } _flags;
    unsigned int _mode;
    id <TNLContentDecoderClient> _tnl_decoderClient;
}

@property(readonly, nonatomic) id <TNLContentDecoderClient> tnl_decoderClient; // @synthesize tnl_decoderClient=_tnl_decoderClient;
@property(readonly, nonatomic) unsigned int mode; // @synthesize mode=_mode;
- (_Bool)finalizeAndReturnError:(out id *)arg1;
- (_Bool)decodeBytes:(const char *)arg1 length:(unsigned long long)arg2 error:(out id *)arg3;
- (_Bool)decodeData:(id)arg1 error:(out id *)arg2;
- (void)dealloc;
- (id)initWithMode:(unsigned int)arg1 client:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

