//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNViewController.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC14T1TwitterSwift37VoiceRoomScheduledSpaceViewController : TFNViewController
{
    MISSING_TYPE *viewModel;
    MISSING_TYPE *$__lazy_storage_$_closeBarButtonItem;
    MISSING_TYPE *cardTopConstraint;
    MISSING_TYPE *$__lazy_storage_$_spaceCard;
    MISSING_TYPE *$__lazy_storage_$_shareButton;
    MISSING_TYPE *$__lazy_storage_$_cancelButton;
    MISSING_TYPE *$__lazy_storage_$_editButton;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)didTapCancel;
- (void)didTapEdit;
- (void)didTapShare;
- (void)didTapClose;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithCoder:(id)arg1;
- (double)preferredHeightForModalSheetViewController:(id)arg1 modalContentViewVisibleEdgeInsets:(struct UIEdgeInsets)arg2;
- (void)cardView:(id)arg1 didUpdateContentAnimated:(_Bool)arg2;
- (id)cardView:(id)arg1 didFireViewEvent:(id)arg2;
- (id)layoutMetricsForCardView:(id)arg1;

@end

