//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNViewController.h>

@class NSArray, NSDictionary, NSString, T1StickerCatalog, T1StickerCatalogStore, T1StickerCategory, T1StickerCategorySelectionViewController, TFNTwitterAccount, UIImage, UIImageView, UIPageViewController, UIView, UIVisualEffectView;
@protocol T1StickerCatalogHostViewControllerDelegate;

@interface T1StickerCatalogHostViewController : TFNViewController
{
    UIImageView *_backgroundImageView;
    UIView *_backgroundColorView;
    UIVisualEffectView *_blurView;
    UIPageViewController *_pageViewController;
    T1StickerCategorySelectionViewController *_selectionViewController;
    _Bool _shouldDisableVerticalScrolling;
    _Bool _updateCatalogFromNetwork;
    TFNTwitterAccount *_account;
    long long _catalogType;
    UIImage *_backgroundImage;
    T1StickerCatalogStore *_catalogStore;
    id <T1StickerCatalogHostViewControllerDelegate> _delegate;
    NSString *_scribeSection;
    NSString *_defaultSelectedCategoryID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool updateCatalogFromNetwork; // @synthesize updateCatalogFromNetwork=_updateCatalogFromNetwork;
@property(readonly, nonatomic) NSString *defaultSelectedCategoryID; // @synthesize defaultSelectedCategoryID=_defaultSelectedCategoryID;
@property(nonatomic) _Bool shouldDisableVerticalScrolling; // @synthesize shouldDisableVerticalScrolling=_shouldDisableVerticalScrolling;
@property(copy, nonatomic) NSString *scribeSection; // @synthesize scribeSection=_scribeSection;
@property(nonatomic) __weak id <T1StickerCatalogHostViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) T1StickerCatalogStore *catalogStore; // @synthesize catalogStore=_catalogStore;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(readonly, nonatomic) long long catalogType; // @synthesize catalogType=_catalogType;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void)stickerCategoryEmptyViewControllerDidTapRetry;
- (id)stickerCategoryViewController:(id)arg1 preferredVariantForStickerWithVariants:(id)arg2;
- (void)stickerCategoryViewController:(id)arg1 didSelectPreferredVariant:(id)arg2 fromStickerWithVariants:(id)arg3;
- (void)stickerCategoryViewController:(id)arg1 didSelectSticker:(id)arg2;
- (void)_showCategory:(id)arg1;
- (void)stickerCategorySelectionViewController:(id)arg1 didSelectCategory:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (id)navigationControllerTransitionForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;
- (id)_defaultSelectedCategory;
- (id)_categoryBeforeCategory:(id)arg1;
- (id)_categoryAfterCategory:(id)arg1;
- (unsigned long long)_indexOfCategoryWithCategoryID:(id)arg1;
- (void)_showInitialCategoryFromCache;
- (void)_startLoadingCatalog;
@property(readonly, nonatomic) T1StickerCategory *selectedCategory;
@property(readonly, nonatomic) NSDictionary *variantPreferences;
@property(readonly, nonatomic) NSArray *categories;
@property(readonly, nonatomic) T1StickerCatalog *catalog;
- (void)_updateTitleAndIndicator;
- (void)_cancel:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)_displayedViewController;
- (id)_displayedCategory;
- (id)_categoryForViewController:(id)arg1;
- (id)_stickerCategoryViewControllerForCategory:(id)arg1;
- (void)_showErrorView;
- (void)_showLoadingView;
- (id)tfn_contentScrollView;
- (double)_toolbarHeight;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithAccount:(id)arg1 catalogType:(long long)arg2 selectedCategoryID:(id)arg3 updateCatalogFromNetwork:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

