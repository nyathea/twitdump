//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSString, T1TabViewGroup, TFNBarProgressView, TFNBlurHandler, TFNCustomTabBar, UIView;
@protocol NSCopying, T1TabBarViewControllerContainerDelegate, T1TabBarViewControllerDelegate;

@interface T1TabBarViewController : UIViewController
{
    long long _tabBarState;
    _Bool _tabBarShadowHidden;
    _Bool _autoHideTabBarWithoutMultipleTabs;
    _Bool _ignoreMaximumTabWidth;
    TFNCustomTabBar *_tabBar;
    long long _currentAppearance;
    id <T1TabBarViewControllerDelegate> _delegate;
    NSArray *_tabViews;
    long long _displayMode;
    id <T1TabBarViewControllerContainerDelegate> _containerDelegate;
    UIView *_tabBarBackgroundView;
    TFNBlurHandler *_blurHandler;
    UIView *_tabBarDivider;
    T1TabViewGroup *_tabViewGroup;
    double _maximumTabWidth;
    unsigned long long _progressViewHideAnimationCount;
    TFNBarProgressView *_progressView;
    UIView *_progressiveBlurView;
    struct UIEdgeInsets _sideBarContentEdgeInsets;
    struct CGRect _visibleTabBarFrame;
}

+ (struct CGSize)preferredContentSizeForDisplayMode:(long long)arg1 tabCount:(long long)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *progressiveBlurView; // @synthesize progressiveBlurView=_progressiveBlurView;
@property(readonly, nonatomic) TFNBarProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) unsigned long long progressViewHideAnimationCount; // @synthesize progressViewHideAnimationCount=_progressViewHideAnimationCount;
@property(nonatomic) double maximumTabWidth; // @synthesize maximumTabWidth=_maximumTabWidth;
@property(readonly, nonatomic) T1TabViewGroup *tabViewGroup; // @synthesize tabViewGroup=_tabViewGroup;
@property(readonly, nonatomic) UIView *tabBarDivider; // @synthesize tabBarDivider=_tabBarDivider;
@property(readonly, nonatomic) TFNBlurHandler *blurHandler; // @synthesize blurHandler=_blurHandler;
@property(readonly, nonatomic) UIView *tabBarBackgroundView; // @synthesize tabBarBackgroundView=_tabBarBackgroundView;
@property(nonatomic) struct CGRect visibleTabBarFrame; // @synthesize visibleTabBarFrame=_visibleTabBarFrame;
@property(nonatomic) __weak id <T1TabBarViewControllerContainerDelegate> containerDelegate; // @synthesize containerDelegate=_containerDelegate;
@property(nonatomic) struct UIEdgeInsets sideBarContentEdgeInsets; // @synthesize sideBarContentEdgeInsets=_sideBarContentEdgeInsets;
@property(nonatomic) long long displayMode; // @synthesize displayMode=_displayMode;
@property(nonatomic) _Bool ignoreMaximumTabWidth; // @synthesize ignoreMaximumTabWidth=_ignoreMaximumTabWidth;
@property(nonatomic) _Bool autoHideTabBarWithoutMultipleTabs; // @synthesize autoHideTabBarWithoutMultipleTabs=_autoHideTabBarWithoutMultipleTabs;
@property(copy, nonatomic) NSArray *tabViews; // @synthesize tabViews=_tabViews;
@property(nonatomic) __weak id <T1TabBarViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long currentAppearance; // @synthesize currentAppearance=_currentAppearance;
@property(nonatomic, getter=isTabBarShadowHidden) _Bool tabBarShadowHidden; // @synthesize tabBarShadowHidden=_tabBarShadowHidden;
@property(readonly, nonatomic) TFNCustomTabBar *tabBar; // @synthesize tabBar=_tabBar;
- (void)_tfn_dynamicColorsDidReload:(id)arg1;
- (void)_tfn_accessibilityReduceTransparencyDidChange;
- (void)_tfn_appWillEnterForeground;
- (void)_t1_setProgressViewProgress:(float)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_t1_setProgressViewHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)progressCenter:(id)arg1 didCompleteProgress:(id)arg2;
- (void)progressCenter:(id)arg1 didUpdateProgress:(id)arg2;
- (void)progressCenter:(id)arg1 didStartProgress:(id)arg2;
- (_Bool)customTabBar:(id)arg1 gestureRecognizer:(id)arg2 shouldRequireFailureOfGestureRecognizer:(id)arg3;
- (long long)customTabBar:(id)arg1 contentModeForTabAtIndex:(long long)arg2 withView:(id)arg3;
- (struct CGSize)customTabBar:(id)arg1 sizeForTabAtIndex:(long long)arg2 withView:(id)arg3;
- (void)customTabBarHighlightedTabIndexChanged:(id)arg1;
- (void)customTabBar:(id)arg1 longPressOnTabAtIndex:(long long)arg2 withView:(id)arg3;
- (void)customTabBar:(id)arg1 selectTabAtIndex:(long long)arg2 withView:(id)arg3;
- (_Bool)customTabBar:(id)arg1 selectTabRequiresLongPressFailureForTabAtIndex:(long long)arg2 withView:(id)arg3;
- (id)provideTabBar;
- (void)_t1_updateTabBarHidden;
- (void)setTabBarOpacity:(double)arg1;
- (void)setTabBarHidden:(_Bool)arg1 withDuration:(double)arg2;
- (void)setTabBarHidden:(_Bool)arg1 withDuration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setTabBarScrolling:(_Bool)arg1;
- (_Bool)arePointerEventsEnabled;
- (_Bool)isTabBarHidden;
- (struct CGRect)tabBarButtonFrameForIndex:(long long)arg1 inView:(id)arg2;
- (struct CGRect)tabBarFrameInView:(id)arg1;
- (void)_t1_updateMaximumTabWidth;
- (void)layoutMetricsDidChange:(id)arg1 to:(id)arg2;
- (long long)_blurStyleForDisplayMode:(long long)arg1 currentAppearance:(long long)arg2;
- (void)_t1_updateProgressiveBlurView;
- (void)_t1_updateBackground;
- (void)_t1_updateVisibleTabBarFrame;
- (void)_t1_layoutTabBar;
- (void)viewWillLayoutSubviews;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;
- (struct CGSize)preferredContentSize;
- (void)_t1_updateAppearance:(long long)arg1;
- (void)_t1_updateTabViews;
- (void)selectTabAtIndex:(long long)arg1;
@property(nonatomic) long long selectedTabIndex;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) id <NSCopying> uniqueID;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<NSCopying>",?,R,N


@end

