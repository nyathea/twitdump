//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GADAdContent, GADObserverCollection;

@interface GADDelayPageCloseMonitor : NSObject
{
    GADObserverCollection *_observers;
    GADAdContent *_ad;
    GADAdContent *_strongAd;
    long long _timeoutIdentifier;
}

- (void).cxx_destruct;
- (void)handleDelayPageCloseNotification:(id)arg1;
- (void)endDelayPageClose;
- (void)handleDelayPageCloseTimeout:(long long)arg1;
- (id)initWithAd:(id)arg1 messageSource:(id)arg2;

@end

