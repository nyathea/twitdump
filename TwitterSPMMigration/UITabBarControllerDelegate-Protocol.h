//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/NSObject-Protocol.h>

@class NSArray, UITab, UITabBarController, UITabGroup, UIViewController;
@protocol UIDropSession, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning;

@protocol UITabBarControllerDelegate <NSObject>

@optional
- (id <UIViewControllerAnimatedTransitioning>)tabBarController:(UITabBarController *)arg1 animationControllerForTransitionFromViewController:(UIViewController *)arg2 toViewController:(UIViewController *)arg3;
- (id <UIViewControllerInteractiveTransitioning>)tabBarController:(UITabBarController *)arg1 interactionControllerForAnimationController:(id <UIViewControllerAnimatedTransitioning>)arg2;
- (long long)tabBarControllerPreferredInterfaceOrientationForPresentation:(UITabBarController *)arg1;
- (unsigned long long)tabBarControllerSupportedInterfaceOrientations:(UITabBarController *)arg1;
- (void)tabBarController:(UITabBarController *)arg1 didEndCustomizingViewControllers:(NSArray *)arg2 changed:(_Bool)arg3;
- (void)tabBarController:(UITabBarController *)arg1 willEndCustomizingViewControllers:(NSArray *)arg2 changed:(_Bool)arg3;
- (void)tabBarController:(UITabBarController *)arg1 willBeginCustomizingViewControllers:(NSArray *)arg2;
- (void)tabBarController:(UITabBarController *)arg1 didSelectViewController:(UIViewController *)arg2;
- (_Bool)tabBarController:(UITabBarController *)arg1 shouldSelectViewController:(UIViewController *)arg2;
- (NSArray *)tabBarController:(UITabBarController *)arg1 displayedViewControllersForTab:(UITab *)arg2 proposedViewControllers:(NSArray *)arg3;
- (void)tabBarController:(UITabBarController *)arg1 displayOrderDidChangeForGroup:(UITabGroup *)arg2;
- (void)tabBarController:(UITabBarController *)arg1 visibilityDidChangeForTabs:(NSArray *)arg2;
- (void)tabBarControllerDidEndEditing:(UITabBarController *)arg1;
- (void)tabBarControllerWillBeginEditing:(UITabBarController *)arg1;
- (void)tabBarController:(UITabBarController *)arg1 tab:(UITab *)arg2 acceptItemsFromDropSession:(id <UIDropSession>)arg3;
- (unsigned long long)tabBarController:(UITabBarController *)arg1 tab:(UITab *)arg2 operationForAcceptingItemsFromDropSession:(id <UIDropSession>)arg3;
- (void)tabBarController:(UITabBarController *)arg1 didSelectTab:(UITab *)arg2 previousTab:(UITab *)arg3;
- (_Bool)tabBarController:(UITabBarController *)arg1 shouldSelectTab:(UITab *)arg2;
@end

