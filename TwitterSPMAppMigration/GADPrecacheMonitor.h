//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GADObserverCollection, NSMutableDictionary;
@protocol GADJavascriptEvaluating;

@interface GADPrecacheMonitor : NSObject
{
    id <GADJavascriptEvaluating> _JScontext;
    GADObserverCollection *_observers;
    NSMutableDictionary *_precacheResourceMonitors;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)removePrecacheResourceMonitor:(id)arg1;
- (id)resourceBufferForFileSource:(id)arg1;
- (void)handlePrecacheAction:(id)arg1;
- (id)initWithJSContext:(id)arg1 messageSource:(id)arg2;

@end

