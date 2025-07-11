//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, TFSFeatureSwitches, TFSFeatureSwitchesConfig;

@interface TFSInstrumentedFeatureSwitches : NSObject
{
    NSMutableDictionary *_overridesDict;
    TFSFeatureSwitches *_switches;
}

+ (id)queriedKeysAndValuesForTestCase;
+ (id)overriddenFeatureSwitchKeysForTestCase;
+ (id)overriddenFeatureSwitchKeysForRun;
+ (id)queriedFeatureSwitchKeysForRun;
+ (id)classStateQueue;
- (void).cxx_destruct;
- (void)flush;
- (id)ceolAllowlist;
- (id)overriddenRawValueForKey:(id)arg1;
- (void)removeOverrideForKey:(id)arg1;
- (void)overrideAllValuesInDictionary:(id)arg1;
- (void)overrideValue:(id)arg1 forKey:(id)arg2;
- (void)overrideRawValue:(id)arg1 forKey:(id)arg2;
- (id)featureSwitchValueForKey:(id)arg1;
- (_Bool)isInExperimentForKey:(id)arg1;
- (double)unsafePeekDoubleForKey:(id)arg1;
- (_Bool)unsafePeekBoolForKey:(id)arg1;
- (id)unsafePeekSetForKey:(id)arg1;
- (id)unsafePeekArrayForKey:(id)arg1;
- (id)unsafePeekStringForKey:(id)arg1;
- (long long)unsafePeekIntegerForKey:(id)arg1;
- (id)rawValueForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)setForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (_Bool)hasNonDefaultValueForKey:(id)arg1;
- (id)numberForKey:(id)arg1;
- (long long)integerForKey:(id)arg1;
- (double)CGFloatForKey:(id)arg1;
- (double)doubleForKey:(id)arg1;
- (_Bool)boolForKey:(id)arg1;
- (id)featureSwitchesValueForKey:(id)arg1;
- (id)_valueForKey:(id)arg1;
- (id)rawFeatureSwitchesDictionary;
- (void)resetImpressions;
- (_Bool)removeCachedData;
- (void)partiallyApplyPendingForKeys:(id)arg1;
- (void)applyPending;
- (_Bool)updatePendingConfig:(id)arg1;
- (void)refreshWithFetchTask:(id)arg1 timeout:(double)arg2 maxStale:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)refreshWithFetchTask:(id)arg1 timeout:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)forceRefreshWithFetchTask:(id)arg1 timeout:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)resetFeatureSwitchValueForKey:(id)arg1;
- (void)setFeatureSwitchValue:(id)arg1 forKey:(id)arg2;
- (void)disableAllValuesForKeys:(id)arg1;
- (void)resetFeatureSwitches;
@property(readonly, nonatomic) TFSFeatureSwitchesConfig *overrideConfig;
@property(readonly, nonatomic) TFSFeatureSwitchesConfig *config;
@property(readonly, nonatomic) NSString *accountID;
- (id)initWrappingFeatureSwitches:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

