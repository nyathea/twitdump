//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, TAVWallTime;

@interface TAVAnalyticsVideoTimeToPlaybackPoint : NSObject
{
    _Bool _shouldIgnoreTimeTo2SecEvent;
    NSNumber *_videoTimeToStart;
    NSNumber *_videoTimeTo2Sec;
    TAVWallTime *_intentToPlayTimestamp;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TAVWallTime *intentToPlayTimestamp; // @synthesize intentToPlayTimestamp=_intentToPlayTimestamp;
@property(nonatomic) _Bool shouldIgnoreTimeTo2SecEvent; // @synthesize shouldIgnoreTimeTo2SecEvent=_shouldIgnoreTimeTo2SecEvent;
@property(retain, nonatomic) NSNumber *videoTimeTo2Sec; // @synthesize videoTimeTo2Sec=_videoTimeTo2Sec;
@property(retain, nonatomic) NSNumber *videoTimeToStart; // @synthesize videoTimeToStart=_videoTimeToStart;
@property(readonly, nonatomic) _Bool hasStartedToPlay;

@end

