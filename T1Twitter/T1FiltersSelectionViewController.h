//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSMutableArray, NSMutableSet, NSString, TGFFilterLibrary, TTMAssetFilterParameters, UIImage, UIScrollView, UISlider, UIView;
@protocol T1FiltersSelectionViewControllerDelegate;

@interface T1FiltersSelectionViewController : UIViewController
{
    TGFFilterLibrary *_filterLibrary;
    TTMAssetFilterParameters *_filterParameters;
    NSMutableArray *_gridItemViews;
    UISlider *_intensityControl;
    UIView *_intensityControlContainerView;
    _Bool _shouldIntensityControlBeVisible;
    UIScrollView *_thumbnailScrollView;
    UIView *_thumbnailContainerView;
    NSMutableSet *_uniqueFiltersSeen;
    UIImage *_sourceImage;
    id <T1FiltersSelectionViewControllerDelegate> _delegate;
}

+ (double)desiredHeight;
- (void).cxx_destruct;
@property(nonatomic) __weak id <T1FiltersSelectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImage *sourceImage; // @synthesize sourceImage=_sourceImage;
- (id)_selectedGridItemView;
- (void)_animateOutIntensityControl;
- (void)_animateInIntensityControl;
- (void)_centerOnSelectedViewAnimated:(_Bool)arg1;
- (struct CGSize)_gridViewContentSize;
- (void)_layoutGalleryItems;
- (void)_layoutGalleryView;
- (_Bool)_intensityControlVisible;
- (void)_updateGridViewItemImages;
- (void)_handleFilterIntensityValueChange:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_updateGridItemViewSelection:(id)arg1;
- (void)filterGridItemViewSelected:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_initializeGridItemViews;
- (void)viewDidLoad;
- (id)selectedView;
- (unsigned long long)uniqueFiltersSeenCount;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithFilterLibrary:(id)arg1 filterParameters:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

