//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNViewController.h>

@class MISSING_TYPE, UIScrollView;

@interface T1MediaImmersiveContainerViewController : TFNViewController
{
    MISSING_TYPE *account;
    MISSING_TYPE *immersiveViewController;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (_Bool)maybeSeekToTimestamp:(id)arg1 statusID:(long long)arg2;
- (id)scribeSection;
- (id)scribePage;
@property(nonatomic, readonly) unsigned long long tfn_supportedInterfaceOrientations;
- (_Bool)t1_showsExpandedSearchBox;
- (_Bool)t1_showsDashAction;
- (_Bool)tui_showsActionButton;
@property(nonatomic, readonly) long long tfn_navigationBarStyle;
@property(nonatomic, readonly) _Bool tfn_prefersNavigationBarShadowHidden;
@property(nonatomic, readonly) _Bool tfn_prefersNavigationBarExpandedWhenScrolledToBottom;
@property(nonatomic, readonly) _Bool tfn_prefersNavigationBarHidden;
@property(nonatomic, readonly) UIScrollView *tfn_contentScrollView;
- (_Bool)becomeFirstResponder;
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic, readonly) _Bool tfn_prefersTabBarShadowHidden;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (long long)dashContentItemType;
- (void)immersiveViewControllerDockVideo:(id)arg1;
- (void)immersiveViewController:(id)arg1 showHideNavigationButtons:(_Bool)arg2;
- (void)closeAction;

@end

