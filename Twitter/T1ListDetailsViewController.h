//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNViewController.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface T1ListDetailsViewController : TFNViewController
{
    MISSING_TYPE *listDetailsContentViewController;
    MISSING_TYPE *loadingViewController;
    MISSING_TYPE *account;
    MISSING_TYPE *listID;
    MISSING_TYPE *acceptCachedRepresentation;
    MISSING_TYPE *listFeatures;
    MISSING_TYPE *listHeaderDataFetcher;
    MISSING_TYPE *listObserver;
    MISSING_TYPE *list;
    MISSING_TYPE *rankingMode;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)moreTappedWithSender:(id)arg1;
@property(nonatomic, readonly) long long preferredStatusBarStyle;
@property(nonatomic, readonly) _Bool tfn_prefersNavigationBarHidden;
- (void)shareTappedWithTapGestureRecognizer:(id)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithAccount:(id)arg1 listID:(long long)arg2 acceptCachedRepresentation:(_Bool)arg3;
- (id)initWithAccount:(id)arg1 listID:(long long)arg2;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (id)scribeContext;
- (_Bool)tui_showsActionButton;

@end

