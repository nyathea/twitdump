//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GADAdContent, GADIntermissionStateMonitor, GADObserverCollection, NSHashTable, NSMutableSet, NSSet;
@protocol GADEventContextSource;

@interface GADIntermission : NSObject
{
    NSHashTable *_activePresenters;
    NSHashTable *_deactivatingParticipants;
    unsigned long long _activePresentersCount;
    unsigned long long _deactivatingParticipantsCount;
    GADIntermissionStateMonitor *_stateMonitor;
    GADObserverCollection *_observers;
    id <GADEventContextSource> _contextSource;
    GADAdContent *_ad;
    GADAdContent *_strongAd;
    NSMutableSet *_activeAdFormats;
    _Bool _willEndPostedOnce;
    _Bool _didEndPostedOnce;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *activeAdFormats; // @synthesize activeAdFormats=_activeAdFormats;
- (void)didEnd;
- (void)willEnd;
- (void)willBegin;
@property(readonly, nonatomic) _Bool active;
- (void)presenterDidRelinquishScreen:(id)arg1;
- (void)presenterWillRelinquishScreen:(id)arg1;
- (void)presenterWillPresentScreen:(id)arg1 adFormat:(long long)arg2;
- (void)cleanUpDeallocatedParticipants;
- (void)presentingObjectDidDeallocate;
- (id)activePresenters;
- (id)initWithAd:(id)arg1;
- (id)initWithAd:(id)arg1 stateMonitor:(id)arg2;

@end

