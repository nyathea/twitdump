//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GADActiveViewContext, GADWebAdView, NSDictionary, NSString;
@protocol OS_dispatch_queue;

@interface GADActiveViewReporter : NSObject
{
    GADActiveViewContext *_activeViewContext;
    _Bool _activeViewContextLoadInProgress;
    _Bool _adViewNeedsActiveViewUpdates;
    _Bool _adDidMakeImpression;
    _Bool _analyticsLoggingEnabled;
    GADWebAdView *_reportingAdView;
    _Bool _activeViewContextUntracked;
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSString *_adFormat;
    NSString *_adEventContextID;
    NSDictionary *_configuration;
    NSDictionary *_visibilityInformation;
    NSDictionary *_mainThreadParameters;
    struct atomic_flag _finishActiveViewStatusExecuted;
    _Bool _additionalActiveViewAudioSignalsEnabled;
    _Bool _shouldCheckActiveViewStatusBeforeUpdate;
    _Bool _shouldUseCachedInterfaceOrientation;
}

- (void).cxx_destruct;
- (void)updateActiveViewScrollStatus:(id)arg1;
- (void)updateScrollStatusForAdView:(id)arg1;
- (void)updateMainThreadParameters;
- (id)activeViewStateWithUnloaded:(_Bool)arg1 userInfo:(id)arg2;
- (void)convertScrollableContainerInfo:(id)arg1 toParameters:(id)arg2;
- (void)loadActiveViewContext:(CDUnknownBlockType)arg1;
- (void)asynchronouslyLoadActiveViewContext;
- (void)updateActiveViewStatusForAdView:(id)arg1;
- (void)updateActiveViewStatus:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)endActiveViewStatusForActiveViewContext:(id)arg1;
- (void)finishActiveViewStatusUpdate:(id)arg1;
- (void)updateActiveViewStatus:(id)arg1;
- (void)updateActiveViewStatusWithUnloaded:(_Bool)arg1;
- (void)setVisibilityInformation:(id)arg1;
- (void)setAdDidMakeImpression:(_Bool)arg1;
- (void)setAdViewNeedsActiveViewUpdates:(_Bool)arg1;
- (id)initWithAdFormat:(id)arg1 activeViewConfiguration:(id)arg2 reportingAdView:(id)arg3 adEventContextIdentifier:(id)arg4 analyticsLoggingEnabled:(_Bool)arg5;

@end

