//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TFNTwitterComposition, TFNTwitterNudgeRequirementsProvider;
@protocol TFNTwitterNudgeAccountModel, TPSFeatureSwitchesAccess;

@interface TFNTwitterNudgeExperimentModel : NSObject
{
    _Bool _didIncludeCreateNudgeOperation;
    unsigned long long _nudgeFlags;
    id <TFNTwitterNudgeAccountModel> _account;
    TFNTwitterComposition *_composition;
    id <TPSFeatureSwitchesAccess> _featureSwitches;
    long long _tweetType;
    TFNTwitterNudgeRequirementsProvider *_nudgeRequirementsProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TFNTwitterNudgeRequirementsProvider *nudgeRequirementsProvider; // @synthesize nudgeRequirementsProvider=_nudgeRequirementsProvider;
@property(readonly, nonatomic) long long tweetType; // @synthesize tweetType=_tweetType;
@property(nonatomic) _Bool didIncludeCreateNudgeOperation; // @synthesize didIncludeCreateNudgeOperation=_didIncludeCreateNudgeOperation;
@property(readonly, nonatomic) id <TPSFeatureSwitchesAccess> featureSwitches; // @synthesize featureSwitches=_featureSwitches;
@property(readonly, nonatomic) TFNTwitterComposition *composition; // @synthesize composition=_composition;
@property(readonly, nonatomic) id <TFNTwitterNudgeAccountModel> account; // @synthesize account=_account;
@property(readonly, nonatomic) unsigned long long nudgeFlags; // @synthesize nudgeFlags=_nudgeFlags;
- (_Bool)shouldSimulateDelayedCompositionUpload;
- (void)didReceiveNudgeDuringCompositionUpload;
- (void)didExcludeCreateNudgeOperationFromCompositionUpload;
- (void)didIncludeCreateNudgeOperationInCompositionUpload;
- (_Bool)shouldCheckForNudgeDuringUpdateStatusOperation;
- (id)initWithAccount:(id)arg1 composition:(id)arg2 featureSwitches:(id)arg3;

@end

