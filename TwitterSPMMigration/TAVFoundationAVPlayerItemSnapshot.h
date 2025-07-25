//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVPlayerItemErrorLog, NSArray, NSDate, NSDictionary, NSError;

@interface TAVFoundationAVPlayerItemSnapshot : NSObject
{
    _Bool _avPlayerItemEnabledTrackHasAudio;
    _Bool _didEncounterVariantSwitch;
    long long _status;
    NSError *_error;
    AVPlayerItemErrorLog *_errorLog;
    NSDate *_currentDate;
    NSArray *_tracks;
    NSArray *_loadedTimeRanges;
    NSArray *_accessLogEvents;
    double _effectiveRate;
    NSDictionary *_mediaSelectionGroups;
    struct CGSize _presentationSize;
    CDStruct_1b6d18a9 _duration;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool didEncounterVariantSwitch; // @synthesize didEncounterVariantSwitch=_didEncounterVariantSwitch;
@property(readonly, copy, nonatomic) NSDictionary *mediaSelectionGroups; // @synthesize mediaSelectionGroups=_mediaSelectionGroups;
@property(readonly, nonatomic) double effectiveRate; // @synthesize effectiveRate=_effectiveRate;
@property(readonly, nonatomic) _Bool avPlayerItemEnabledTrackHasAudio; // @synthesize avPlayerItemEnabledTrackHasAudio=_avPlayerItemEnabledTrackHasAudio;
@property(readonly, copy, nonatomic) NSArray *accessLogEvents; // @synthesize accessLogEvents=_accessLogEvents;
@property(readonly, nonatomic) struct CGSize presentationSize; // @synthesize presentationSize=_presentationSize;
@property(readonly, copy, nonatomic) NSArray *loadedTimeRanges; // @synthesize loadedTimeRanges=_loadedTimeRanges;
@property(readonly, nonatomic) NSArray *tracks; // @synthesize tracks=_tracks;
@property(readonly, copy, nonatomic) NSDate *currentDate; // @synthesize currentDate=_currentDate;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
@property(readonly, copy, nonatomic) AVPlayerItemErrorLog *errorLog; // @synthesize errorLog=_errorLog;
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct opaqueCMFormatDescription *)testTurkeyAudioFormatDescription;
- (_Bool)hasAudio;
- (id)initWithStatus:(long long)arg1 error:(id)arg2 errorLog:(id)arg3 duration:(CDStruct_1b6d18a9)arg4 currentDate:(id)arg5 tracks:(id)arg6 loadedTimeRanges:(id)arg7 effectiveRate:(double)arg8 mediaSelectionGroups:(id)arg9 presentationSize:(struct CGSize)arg10 didEncounterVariantSwitch:(_Bool)arg11 accessLogEvents:(id)arg12 avPlayerItemEnabledTrackHasAudio:(_Bool)arg13;

@end

