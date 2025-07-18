//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TFNTwitterAccount;
@protocol T1PickAndFilterPhotoFlowControllerDelegate;

@interface T1PickAndFilterPhotoFlowController : NSObject
{
    _Bool _enableRemoveButton;
    _Bool _showRemoveButton;
    _Bool _cancelOnFiltersDismiss;
    TFNTwitterAccount *_account;
    id <T1PickAndFilterPhotoFlowControllerDelegate> _delegate;
    long long _photoType;
    NSString *_scribeSection;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool cancelOnFiltersDismiss; // @synthesize cancelOnFiltersDismiss=_cancelOnFiltersDismiss;
@property(nonatomic) _Bool showRemoveButton; // @synthesize showRemoveButton=_showRemoveButton;
@property(retain, nonatomic) NSString *scribeSection; // @synthesize scribeSection=_scribeSection;
@property(nonatomic) long long photoType; // @synthesize photoType=_photoType;
@property(nonatomic) _Bool enableRemoveButton; // @synthesize enableRemoveButton=_enableRemoveButton;
@property(nonatomic) __weak id <T1PickAndFilterPhotoFlowControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (id)scribeSectionForFiltersViewController:(id)arg1;
- (void)filtersViewControllerDidCancel:(id)arg1;
- (void)filtersViewController:(id)arg1 didEditImage:(id)arg2;
- (id)_t1_filterParametersForMediaAsset:(id)arg1 forType:(long long)arg2;
- (void)photoGalleryViewController:(id)arg1 didEndSessionWithAttachments:(id)arg2;
- (void)photoGalleryViewControllerDidTapRemoveProfileBannerButton:(id)arg1;
- (void)photoGalleryViewControllerDidCancelSession:(id)arg1;
- (long long)_avatarCropShape;
- (void)_t1_handleChoosePhotoDidSelectPhotoAttachment:(id)arg1 ontoHostViewController:(id)arg2;
- (void)_t1_handleChoosePhotoDidRemovePhoto;
- (void)_t1_handleChoosePhotoDidCancel;
- (void)_t1_presentPhotoGalleryViewControllerInViewController:(id)arg1 animated:(_Bool)arg2;
- (void)startFlowInViewController:(id)arg1 forPhotoType:(long long)arg2 asset:(id)arg3;
- (void)startFlowInViewController:(id)arg1 forPhotoType:(long long)arg2 showRemoveButton:(_Bool)arg3 enableRemoveButton:(_Bool)arg4;
- (id)initWithAccount:(id)arg1 delegate:(id)arg2 scribeSection:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

