//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TFNModalSheetLayoutModeFullHeightController
{
}

- (struct CGRect)_tfn_modalContentViewControllerViewFrame;
- (struct CGRect)_tfn_modalContentFrame;
- (void)_tfn_updateModalContentHostViewFrame;
- (struct CGPath *)_tfn_modalContentMaskPath;
- (struct CGRect)adjustBlurViewFrameForCurrentLayoutMode:(struct CGRect)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)didEndEditingAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateModalContentFrames;
- (id)statusBarControllingViewController:(_Bool)arg1;
- (struct CGSize)modalContentSizeWithLayoutMode:(long long)arg1 availableSize:(struct CGSize)arg2;
- (struct UIEdgeInsets)modalContentViewVisibleEdgeInsets;
- (double)maximumHeight;
- (void)willTransitionInFromOldLayoutMode:(id)arg1;
- (long long)layoutModeForLeavingFullScreen;
- (long long)layoutMode;

@end

