//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE, TASSharing;
@protocol T1VoiceRoomSharingsViewControllerDelegate;

@interface T1VoiceRoomSharingsViewController : UIViewController
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *spaceModel;
    MISSING_TYPE *sharing;
    MISSING_TYPE *needsReload;
    MISSING_TYPE *observingTweets;
    MISSING_TYPE *lastStatusChangedUpdate;
    MISSING_TYPE *itemViewModels;
    MISSING_TYPE *_currentItemViewModel;
    MISSING_TYPE *contentView;
    MISSING_TYPE *pageControl;
    MISSING_TYPE *collectionView;
    MISSING_TYPE *summaryLabel;
    MISSING_TYPE *needsUpdatePreferredContentSize;
    MISSING_TYPE *contentVisibilityPercentage;
    MISSING_TYPE *lastViewBounds;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)labelDidTap:(id)arg1;
- (void)pageControlDidChangeValue:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
@property(nonatomic) double contentVisibilityPercentage; // @synthesize contentVisibilityPercentage;
@property(nonatomic, readonly) struct CGSize preferredSummaryLabelSize;
- (void)statusChanged:(id)arg1;
@property(nonatomic, retain) TASSharing *sharing; // @synthesize sharing;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithSpaceModel:(id)arg1;
@property(nonatomic) __weak id <T1VoiceRoomSharingsViewControllerDelegate> delegate; // @synthesize delegate;
- (void)sharingDidUpdateSharedItemViewModels:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;

@end

