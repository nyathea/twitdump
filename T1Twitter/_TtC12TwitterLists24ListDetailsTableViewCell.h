//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNTableViewCell.h>

@class MISSING_TYPE;

@interface _TtC12TwitterLists24ListDetailsTableViewCell : TFNTableViewCell
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *imagePipeline;
    MISSING_TYPE *$__lazy_storage_$_placeholderBannerImage;
    MISSING_TYPE *listNameLabel;
    MISSING_TYPE *listPrivateImageView;
    MISSING_TYPE *ownerAvatarImageView;
    MISSING_TYPE *facepilesView;
    MISSING_TYPE *ownerNameLabel;
    MISSING_TYPE *verifiedImageView;
    MISSING_TYPE *ownerUsernameLabel;
    MISSING_TYPE *pinButton;
    MISSING_TYPE *pinContainerView;
    MISSING_TYPE *dismissButton;
    MISSING_TYPE *followButtonContainer;
    MISSING_TYPE *followButton;
    MISSING_TYPE *bannerImageView;
    MISSING_TYPE *descriptionLabel;
    MISSING_TYPE *followersCountLabel;
    MISSING_TYPE *style;
    MISSING_TYPE *stringsProvider;
    MISSING_TYPE *viewModel;
    MISSING_TYPE *isPinnedObserver;
    MISSING_TYPE *cachedIsPinned;
    MISSING_TYPE *$__lazy_storage_$_enabledPinButtonIntrinsicContentSize;
}

- (void).cxx_destruct;
- (void)followButtonWasTappedWithTapGestureRecognizer:(id)arg1;
- (void)dismissButtonWasTapped;
- (void)pinnedImageTappedWithTapGestureRecognizer:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)prepareForReuse;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (long long)tui_scaleAspectFillFocusModeForFetchHelper:(id)arg1;
- (id)tui_focusRectanglesForFocusMode:(long long)arg1 inBounds:(struct CGRect)arg2 forFetchHelper:(id)arg3;
- (id)calculatedLayoutMetrics;

@end

