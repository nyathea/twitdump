//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, T1StatusMediaTimelineObserver;
@protocol T1VideoPrecacherProtocol;

@interface T1StatusVideoPrefetcher : NSObject
{
    _Bool _disableStatusOrderReversing;
    _Bool _initialWaitFinished;
    id <T1VideoPrecacherProtocol> _videoPrecacher;
    T1StatusMediaTimelineObserver *_timelineObserver;
    NSArray *_previousStatuses;
}

+ (id)mediaPrefetcherForVideosWithViewController:(id)arg1 account:(id)arg2 videoPrecacher:(id)arg3;
+ (id)mediaPrefetcherForVideosWithViewController:(id)arg1 account:(id)arg2 videoPrecacher:(id)arg3 statusForItemBlock:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
@property(nonatomic) _Bool initialWaitFinished; // @synthesize initialWaitFinished=_initialWaitFinished;
@property(retain, nonatomic) NSArray *previousStatuses; // @synthesize previousStatuses=_previousStatuses;
@property(nonatomic) __weak T1StatusMediaTimelineObserver *timelineObserver; // @synthesize timelineObserver=_timelineObserver;
@property(readonly, nonatomic) id <T1VideoPrecacherProtocol> videoPrecacher; // @synthesize videoPrecacher=_videoPrecacher;
@property(nonatomic) _Bool disableStatusOrderReversing; // @synthesize disableStatusOrderReversing=_disableStatusOrderReversing;
- (void)fetchMediasForStatuses:(id)arg1;
- (id)initWithVideoPrecacher:(id)arg1;

@end

