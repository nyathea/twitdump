//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSAttributedString, NSMutableArray, NSMutableSet, NSString, PTVAnimatedTransitionWithShadeCoordinator;
@protocol PTVActionSheetDelegate;

@interface PTVActionSheetController : UIViewController
{
    NSAttributedString *_dismissTitle;
    NSAttributedString *_attributedMessage;
    NSMutableArray *_buttonTitles;
    PTVActionSheetController *_weakSelf;
    NSMutableArray *_buttonActions;
    NSMutableSet *_nonDismissingButtonIndices;
    PTVAnimatedTransitionWithShadeCoordinator *_animatedTransitionController;
    id <PTVActionSheetDelegate> _delegate;
}

+ (id)AttributesForDestructiveActionItemSubtitle;
+ (id)AttributesForDestructiveActionItemTitle;
+ (id)AttributesForDismissActionItemTitle;
+ (id)AttributesForNormalActionItemSubtitle;
+ (id)AttributesForNormalActionItemTitle;
+ (id)AttributesForMessage;
+ (id)MessageFont;
+ (id)SubtitleFont;
+ (id)TitleFont;
- (void).cxx_destruct;
@property(nonatomic) __weak id <PTVActionSheetDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PTVAnimatedTransitionWithShadeCoordinator *animatedTransitionController; // @synthesize animatedTransitionController=_animatedTransitionController;
- (void)performActionOfSelectedButtonIndex:(long long)arg1;
- (void)dismissSelfFromDismissAction:(_Bool)arg1;
- (void)addDestructiveSheetItemWithTitle:(id)arg1 selectionBlock:(CDUnknownBlockType)arg2 shouldAutoDismiss:(_Bool)arg3;
- (void)addDestructiveItemWithTitle:(id)arg1 selectionBlock:(CDUnknownBlockType)arg2;
- (void)addItemWithTitle:(id)arg1 selectionBlock:(CDUnknownBlockType)arg2 shouldAutoDismiss:(_Bool)arg3;
- (void)addItemWithTitle:(id)arg1 selectionBlock:(CDUnknownBlockType)arg2;
- (void)addSheetItemWithAttributedTitle:(id)arg1 selectionBlock:(CDUnknownBlockType)arg2 shouldAutoDismiss:(_Bool)arg3;
- (void)addSheetItemWithAttributedTitle:(id)arg1 selectionBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)presentationAnimationOptions;
- (double)presentationAnimationDuration;
- (id)initWithDelegate:(id)arg1 attributedMessage:(id)arg2 dismissTitle:(id)arg3;
- (id)initWithDelegate:(id)arg1 message:(id)arg2 dismissTitle:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (double)heightOfViewToBeAnimatedForContainerSize:(struct CGSize)arg1;
- (void)actionSheetView:(id)arg1 didPressButtonAtIndex:(unsigned long long)arg2;
- (void)dismissButtonPressedOnActionSheetView:(id)arg1;
- (void)dismissActionSheetContainerView;
- (unsigned long long)tfn_supportedInterfaceOrientations;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

