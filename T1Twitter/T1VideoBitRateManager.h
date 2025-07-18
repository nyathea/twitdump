//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, T1VideoQualitySettings, TFNTwitterAccount, TNUCommunicationAgent;

@interface T1VideoBitRateManager : NSObject
{
    TNUCommunicationAgent *_commAgent;
    TFNTwitterAccount *_account;
    T1VideoQualitySettings *_qualitySettings;
}

+ (id)managerForAccount:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) T1VideoQualitySettings *qualitySettings; // @synthesize qualitySettings=_qualitySettings;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) TNUCommunicationAgent *commAgent; // @synthesize commAgent=_commAgent;
- (_Bool)_isHighQualityEnabledForVideoQuality:(long long)arg1 wifiOn:(_Bool)arg2;
- (void)_videoQualityDidChange;
- (double)currentBitrateForMp4VariantSelectionWithAutoplaying:(_Bool)arg1;
- (double)currentPreferredPeakBitRateWithAutoplaying:(_Bool)arg1;
- (void)tnl_communicationAgent:(id)arg1 didUpdateWWANRadioAccessTechnologyFromPreviousTech:(id)arg2 toCurrentTech:(id)arg3;
- (void)tnl_communicationAgent:(id)arg1 didUpdateReachabilityFromPreviousFlags:(unsigned int)arg2 previousStatus:(long long)arg3 toCurrentFlags:(unsigned int)arg4 currentStatus:(long long)arg5;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 communicationAgent:(id)arg2 qualitySettings:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

