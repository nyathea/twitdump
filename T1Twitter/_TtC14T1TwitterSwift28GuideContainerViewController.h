//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNViewController.h>

@class MISSING_TYPE, NSString, UIScrollView, UIView;

__attribute__((visibility("hidden")))
@interface _TtC14T1TwitterSwift28GuideContainerViewController : TFNViewController
{
    MISSING_TYPE *features;
    MISSING_TYPE *account;
    MISSING_TYPE *scribeContext;
    MISSING_TYPE *urtChromeViewController;
    MISSING_TYPE *disposeBag;
    MISSING_TYPE *$__lazy_storage_$_settingsButton;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)showSettings;
- (id)scribeSection;
- (id)scribePage;
@property(nonatomic, copy) NSString *selectedTabID;
- (long long)dashContentItemType;
- (_Bool)t1_showsExpandedSearchBox;
- (_Bool)t1_showsDashAction;
- (_Bool)tui_showsActionButton;
- (_Bool)tfn_isContentScrolledToBottom;
@property(nonatomic, readonly) _Bool tfn_prefersNavigationBarShadowHidden;
@property(nonatomic, readonly) _Bool tfn_prefersNavigationBarExpandedWhenScrolledToBottom;
@property(nonatomic, readonly) UIScrollView *tfn_contentScrollView;
- (_Bool)becomeFirstResponder;
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
@property(nonatomic, readonly) UIView *tfn_navigationBarAccessoryView;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(nonatomic, readonly) _Bool tfn_contentScrolledToBottom;

@end

