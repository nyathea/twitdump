//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, OCFSelectBannerSubtask, T1PhotoSelection;
@protocol ONBSubtaskControllerDelegate;

@interface ONBSelectBannerSubtaskController
{
    T1PhotoSelection *_photo;
    OCFSelectBannerSubtask *_subtask;
    NSString *_flowToken;
    id <ONBSubtaskControllerDelegate> _delegate;
}

+ (id)supportedSubtaskClasses;
- (void).cxx_destruct;
- (void)private_finishWithPhoto:(id)arg1;
- (void)selectBannerViewControllerDidTapAddImage:(id)arg1;
- (void)selectBannerViewControllerDidTapSkip:(id)arg1;
- (void)selectBannerViewController:(id)arg1 didTapNextWithPhoto:(id)arg2;
- (_Bool)requiresAccountToStart;
- (id)subtaskData;
- (void)startWithNavigationContext:(id)arg1 navigationLink:(id)arg2;
- (id)initWithSubtask:(id)arg1 flowToken:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

