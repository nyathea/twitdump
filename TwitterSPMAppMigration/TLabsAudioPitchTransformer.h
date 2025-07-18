//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TLabsAudioPitchTransformer : NSObject
{
    float _inFIFO[8192];
    float _outFIFO[8192];
    float _FFTworksp[16384];
    float _lastPhase[2730];
    float _sumPhase[2730];
    float _outputAccum[16384];
    float _anaFreq[8192];
    float _anaMagn[8192];
    float _synFreq[8192];
    float _synMagn[8192];
    long long _rover;
    float _lastPitchShift;
}

- (void)FFT:(float *)arg1 fftFrameSize:(long long)arg2 sign:(long long)arg3;
- (void)pitchShift:(float)arg1 numSampsToProcess:(long long)arg2 fftFrameSize:(long long)arg3 oversSampling:(long long)arg4 sampleRate:(float)arg5 indata:(float *)arg6 outdata:(float *)arg7;
- (void)transformer:(float)arg1 audioBuffer:(struct AudioBuffer)arg2 asbd:(struct AudioStreamBasicDescription)arg3;
- (void)transformerMono:(float)arg1 audioBufferList:(struct AudioBufferList *)arg2 asbd:(struct AudioStreamBasicDescription)arg3;
- (void)resetBuffers;

@end

