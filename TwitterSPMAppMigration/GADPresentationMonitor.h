//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GADObserverCollection, GADWebAdView;

@interface GADPresentationMonitor : NSObject
{
    GADObserverCollection *_observers;
    GADWebAdView *_adView;
}

- (void).cxx_destruct;
- (void)handlePresenterWillDismissNotification;
- (void)handlePresenterDidPresentNotification;
- (id)initWithAdView:(id)arg1 messageSource:(id)arg2;

@end

