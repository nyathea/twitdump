//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSInputStream.h>

@class NSError, NSMutableData, NSString;
@protocol NOZEncoder, NOZEncoderContext;

@interface NOZEncodingInputStream : NSInputStream
{
    NSInputStream *_stream;
    id <NOZEncoder> _encoder;
    id <NOZEncoderContext> _encoderContext;
    float _compressionLevel;
    NSError *_encoderError;
    NSMutableData *_excessData;
    unsigned long long _excessDataRead;
    char *_currentReadBuffer;
    unsigned long long _currentReadBufferLength;
    unsigned long long _currentReadBufferUsed;
    CDUnknownFunctionPointerType _copiedCallback;
    CDStruct_4210025a _copiedContext;
    unsigned long long _requestedEvents;
}

- (void).cxx_destruct;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;
- (_Bool)_setCFClientFlags:(unsigned long long)arg1 callback:(CDUnknownFunctionPointerType)arg2 context:(CDStruct_4210025a *)arg3;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (_Bool)hasBytesAvailable;
- (_Bool)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (id)streamError;
- (unsigned long long)streamStatus;
- (void)close;
- (void)open;
- (void)dealloc;
- (id)initWithInputStream:(id)arg1 encoder:(id)arg2 compressionLevel:(float)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

