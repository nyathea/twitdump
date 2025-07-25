//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GADAdInfoInternal, GADRootViewControllerProvider, NSArray, NSDictionary, NSMutableDictionary, NSSet, NSString, UIWindowScene;

@interface GADTargeting : NSObject
{
    NSArray *_categoryExclusions;
    NSString *_contentURLString;
    NSArray *_neighboringContentURLStrings;
    NSDictionary *_customTargeting;
    NSDictionary *_networkExtrasMap;
    NSString *_publisherProvidedID;
    NSArray *_adOptions;
    NSDictionary *_adOptionParameters;
    long long _CLDWaitTime;
    _Bool _isSCARv2API;
    NSString *_signalType;
    NSMutableDictionary *_signalSources;
    NSArray *_adTypes;
    GADAdInfoInternal *_adInfo;
    NSString *_adString;
    NSArray *_keywords;
    NSString *_requestAgent;
    NSString *_requestOrigin;
    GADRootViewControllerProvider *_rootViewControllerProvider;
    NSSet *_nativeAdTypes;
    NSString *_adUnitID;
    UIWindowScene *_scene;
    struct GADAdSize _adSize;
}

- (void).cxx_destruct;
@property(nonatomic) long long CLDWaitTime; // @synthesize CLDWaitTime=_CLDWaitTime;
@property(readonly, nonatomic) __weak UIWindowScene *scene; // @synthesize scene=_scene;
@property(readonly, nonatomic) NSString *adUnitID; // @synthesize adUnitID=_adUnitID;
@property(readonly, nonatomic) NSSet *nativeAdTypes; // @synthesize nativeAdTypes=_nativeAdTypes;
@property(readonly, nonatomic) struct GADAdSize adSize; // @synthesize adSize=_adSize;
@property(readonly, nonatomic) GADRootViewControllerProvider *rootViewControllerProvider; // @synthesize rootViewControllerProvider=_rootViewControllerProvider;
@property(readonly, nonatomic) NSString *requestOrigin; // @synthesize requestOrigin=_requestOrigin;
@property(readonly, nonatomic) NSString *requestAgent; // @synthesize requestAgent=_requestAgent;
@property(readonly, nonatomic) NSArray *keywords; // @synthesize keywords=_keywords;
@property(readonly, copy, nonatomic) NSArray *adOptions; // @synthesize adOptions=_adOptions;
@property(readonly, copy, nonatomic) NSString *adString; // @synthesize adString=_adString;
@property(retain, nonatomic) GADAdInfoInternal *adInfo; // @synthesize adInfo=_adInfo;
@property(readonly, nonatomic) NSArray *adTypes; // @synthesize adTypes=_adTypes;
- (void)addSignalEntriesToMutableDictionary:(id)arg1;
- (void)getSignalUpdateQueue:(id *)arg1 signalCreationBlock:(CDUnknownBlockType *)arg2;
- (id)allThirdPartyExtras;
- (id)networkExtrasForClass:(Class)arg1;
- (id)networkExtrasForAdapterClass:(Class)arg1;
- (void)setSignalSource:(id)arg1 forKey:(id)arg2;
@property(readonly, nonatomic) NSDictionary *signalSources;
- (id)initWithAdResponseString:(id)arg1;
- (id)initWithNativeSignalRequest:(id)arg1;
- (id)initWithBannerSignalRequest:(id)arg1;
- (id)initWithSignalRequest:(id)arg1;
- (id)initWithRequest:(id)arg1 adUnitID:(id)arg2 rootViewController:(id)arg3 adSize:(struct GADAdSize)arg4 requestOrigin:(id)arg5;
- (id)initWithRequest:(id)arg1 adUnitID:(id)arg2 rootViewController:(id)arg3 nativeAdTypes:(id)arg4;
- (id)initWithRequest:(id)arg1 adUnitID:(id)arg2;
- (id)initCommon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

