//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSNumber, NSString, TAVFoundationAVPlayerItemSnapshot;

@interface TAVFoundationAVPlayerSnapshot : NSObject
{
    float _rate;
    unsigned int _timeJumpCount;
    TAVFoundationAVPlayerItemSnapshot *_currentItem;
    long long _status;
    NSError *_error;
    long long _timeControlStatus;
    NSString *_reasonForWaitingToPlay;
    NSNumber *_relativePresentationOffset;
    CDStruct_1b6d18a9 _currentTime;
    CDStruct_1b6d18a9 _lastTimeJumpTime;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *relativePresentationOffset; // @synthesize relativePresentationOffset=_relativePresentationOffset;
@property(readonly, nonatomic) unsigned int timeJumpCount; // @synthesize timeJumpCount=_timeJumpCount;
@property(readonly, nonatomic) CDStruct_1b6d18a9 lastTimeJumpTime; // @synthesize lastTimeJumpTime=_lastTimeJumpTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 currentTime; // @synthesize currentTime=_currentTime;
@property(readonly, copy, nonatomic) NSString *reasonForWaitingToPlay; // @synthesize reasonForWaitingToPlay=_reasonForWaitingToPlay;
@property(readonly, nonatomic) long long timeControlStatus; // @synthesize timeControlStatus=_timeControlStatus;
@property(readonly, nonatomic) float rate; // @synthesize rate=_rate;
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) TAVFoundationAVPlayerItemSnapshot *currentItem; // @synthesize currentItem=_currentItem;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)tavReasonForWaitingToPlay;
- (long long)tavTimeControlStatus;
- (id)initWithCurrentItem:(id)arg1 status:(long long)arg2 error:(id)arg3 rate:(float)arg4 currentTime:(CDStruct_1b6d18a9)arg5 lastTimeJumpTime:(CDStruct_1b6d18a9)arg6 timeJumpCount:(unsigned int)arg7 timeControlStatus:(long long)arg8 reasonForWaitingToPlay:(id)arg9 relativePresentationOffset:(id)arg10;

@end

