//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PTVAudioMonitor : NSObject
{
    int running_max;
    int sample_count;
    int _audioLevel;
}

@property(readonly, nonatomic) int audioLevel; // @synthesize audioLevel=_audioLevel;
- (void)recordMax:(int)arg1 count:(int)arg2;
- (void)onAudioBuffer:(const void *)arg1 frames:(int)arg2 channels:(int)arg3 bits:(int)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

