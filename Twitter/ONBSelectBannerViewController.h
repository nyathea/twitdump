//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, ONBExampleProfileView, T1PhotoSelection, T1PickAndFilterPhotoFlowController, TFNTwitterAccount;
@protocol ONBSelectBannerViewControllerDelegate;

@interface ONBSelectBannerViewController
{
    id <ONBSelectBannerViewControllerDelegate> _delegate;
    _Bool _requireBanner;
    _Bool _showCurrentBanner;
    ONBExampleProfileView *_exampleProfileView;
    T1PickAndFilterPhotoFlowController *_photoPicker;
    T1PhotoSelection *_bannerPhoto;
    TFNTwitterAccount *_account;
}

- (void).cxx_destruct;
- (void)private_startFilterFlowWithImage:(id)arg1;
- (void)private_startPickAndFilterFlowFromView:(id)arg1;
- (id)private_bannerItemsWithForcedAvatarImage:(id)arg1 showCurrentBanner:(_Bool)arg2;
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (void)pickAndFilterPhotoFlowController:(id)arg1 removePhotoType:(long long)arg2;
- (void)pickAndFilterPhotoFlowController:(id)arg1 userDidCancelPhotoType:(long long)arg2;
- (void)pickAndFilterPhotoFlowController:(id)arg1 userDidSelectPhoto:(id)arg2 type:(long long)arg3;
- (void)exampleProfileView:(id)arg1 didTapAddBannerControl:(id)arg2;
- (void)viewDidLoad;
- (long long)submittability;
- (void)submit;
- (void)abandon;
- (id)initWithAccount:(id)arg1 componentsViewModel:(id)arg2 delegate:(id)arg3 requireBanner:(_Bool)arg4 showCurrentBanner:(_Bool)arg5 forcedAvatarImage:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

