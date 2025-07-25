//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class TFSTwitterOnboardingFlowSpec;

@protocol T1OnboardingFlowHost <NSObject>
- (void)showOnboardingFlowWithFlowSpec:(TFSTwitterOnboardingFlowSpec *)arg1 source:(long long)arg2 cancellable:(_Bool)arg3 completion:(void (^)(void))arg4 flowCompletion:(void (^)(void))arg5;

@optional
- (void)showOnboardingFlowWithFlowSpec:(TFSTwitterOnboardingFlowSpec *)arg1 fromPanelID:(long long)arg2 source:(long long)arg3 completion:(void (^)(void))arg4 flowCompletion:(void (^)(void))arg5;
@end

