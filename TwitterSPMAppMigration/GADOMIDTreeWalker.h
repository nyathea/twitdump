//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GADOMIDAdSessionRegistry, GADOMIDScreenProcessor, GADOMIDStatePublisher, GADOMIDViewProcessor, GADOMIDWindowProcessor, NSDate, NSTimer;
@protocol GADOMIDTreeWalkerTimeLogger;

@interface GADOMIDTreeWalker : NSObject
{
    NSTimer *_timer;
    unsigned long long _count;
    unsigned long long _nonZeroAlphaObstructionCount;
    NSDate *_date1;
    NSDate *_date2;
    id <GADOMIDTreeWalkerTimeLogger> _timeLogger;
    GADOMIDAdSessionRegistry *_adSessionRegistry;
    GADOMIDScreenProcessor *_screenProcessor;
    GADOMIDWindowProcessor *_windowProcessor;
    GADOMIDViewProcessor *_viewProcessor;
    GADOMIDStatePublisher *_statePublisher;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GADOMIDStatePublisher *statePublisher; // @synthesize statePublisher=_statePublisher;
@property(readonly, nonatomic) GADOMIDViewProcessor *viewProcessor; // @synthesize viewProcessor=_viewProcessor;
@property(readonly, nonatomic) GADOMIDWindowProcessor *windowProcessor; // @synthesize windowProcessor=_windowProcessor;
@property(readonly, nonatomic) GADOMIDScreenProcessor *screenProcessor; // @synthesize screenProcessor=_screenProcessor;
@property(readonly, nonatomic) GADOMIDAdSessionRegistry *adSessionRegistry; // @synthesize adSessionRegistry=_adSessionRegistry;
@property(nonatomic) __weak id <GADOMIDTreeWalkerTimeLogger> timeLogger; // @synthesize timeLogger=_timeLogger;
- (void)handleNotVisibleAdView:(id)arg1 view:(id)arg2 viewState:(id)arg3 adViewCache:(id)arg4;
- (void)checkFriendlyObstruction:(id)arg1 withState:(id)arg2 adViewCache:(id)arg3;
- (_Bool)handleAdView:(id)arg1 withState:(id)arg2 adViewCache:(id)arg3;
- (void)walkChildrenForView:(id)arg1 processor:(id)arg2 state:(id)arg3 type:(unsigned long long)arg4 adViewCache:(id)arg5;
- (void)walkView:(id)arg1 processor:(id)arg2 parentState:(id)arg3 adViewCache:(id)arg4;
- (void)doWalkWithAdSessions:(id)arg1 container:(id)arg2;
- (id)findPipSessions;
- (id)sceneSessions;
- (void)doWalkScenes;
- (void)doWalk;
- (void)afterWalk;
- (void)beforeWalk;
- (void)updateTreeState;
- (void)pause;
- (void)stop;
- (void)onTick:(id)arg1;
- (void)start;
- (id)initWithAdSessionRegistry:(id)arg1 statePublisher:(id)arg2;

@end

