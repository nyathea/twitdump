//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSIndexPath, NSString, TFNDataViewCellAppearanceHelper, TFNDataViewCellHelper, TFNDataViewCellLayout, TFNReusableViewCache, TFNSwipeActionGestureController, UIColor, UIImageView, UIView;

@interface TFNTableViewCell : UITableViewCell
{
    _Bool _initialized;
    TFNDataViewCellHelper *_helper;
    TFNDataViewCellAppearanceHelper *_appearanceHelper;
    struct CGRect _contentFrame;
    long long _tfn_accessoryType;
    long long _editingAccessoryType;
    UIView *_accessoryView;
    UIView *_editingAccessoryView;
    UIImageView *_accessoryImageView;
    _Bool _highlighted;
    TFNSwipeActionGestureController *_swipeActionController;
    UIView *_topCornerClipper;
    UIView *_bottomCornerClipper;
    UIView *_backgroundView;
    _Bool _keyboardHighlighted;
    _Bool _deselectsButtonsOnCellSelection;
    _Bool _enablePostSwipeGestures;
    TFNReusableViewCache *_reusableViewCache;
    TFNDataViewCellLayout *_cellLayout;
    CDUnknownBlockType _willDisplayInDataViewControllerBlock;
    CDUnknownBlockType _didDisplayInDataViewControllerBlock;
    CDUnknownBlockType _didDisplayWithZeroVisibilityInDataViewControllerBlock;
    CDUnknownBlockType _didEndDisplayingInDataViewControllerBlock;
    CDUnknownBlockType _didEndScrollingInDataViewControllerBlock;
    CDUnknownBlockType _didFirstDisplayInDataViewControllerBlock;
    CDUnknownBlockType _cleanupBlock;
    CDUnknownBlockType _willDisplayMenuBlock;
    CDUnknownBlockType _willDismissMenuBlock;
    long long _accessoryVerticalAlignment;
}

+ (id)layoutMetrics:(id)arg1 forExpandedSeparatorHeight:(double)arg2 atIndexPath:(id)arg3;
+ (struct UIEdgeInsets)totalContentEdgeInsetsForAccessoryWidth:(double)arg1 layoutMetrics:(id)arg2;
+ (struct UIEdgeInsets)totalContentEdgeInsetsForAccessoryType:(long long)arg1 layoutMetrics:(id)arg2;
+ (id)cellForTableView:(id)arg1 style:(long long)arg2 reuseIdentifier:(id)arg3 indexPath:(id)arg4 initialization:(CDUnknownBlockType)arg5;
+ (id)cellForTableView:(id)arg1 reuseIdentifier:(id)arg2 indexPath:(id)arg3 initialization:(CDUnknownBlockType)arg4;
+ (id)cellForTableView:(id)arg1 reuseIdentifier:(id)arg2 indexPath:(id)arg3;
+ (id)cellForTableView:(id)arg1 indexPath:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool enablePostSwipeGestures; // @synthesize enablePostSwipeGestures=_enablePostSwipeGestures;
@property(nonatomic) _Bool deselectsButtonsOnCellSelection; // @synthesize deselectsButtonsOnCellSelection=_deselectsButtonsOnCellSelection;
@property(nonatomic) long long accessoryVerticalAlignment; // @synthesize accessoryVerticalAlignment=_accessoryVerticalAlignment;
@property(copy, nonatomic) CDUnknownBlockType willDismissMenuBlock; // @synthesize willDismissMenuBlock=_willDismissMenuBlock;
@property(copy, nonatomic) CDUnknownBlockType willDisplayMenuBlock; // @synthesize willDisplayMenuBlock=_willDisplayMenuBlock;
@property(nonatomic, getter=isKeyboardHighlighted) _Bool keyboardHighlighted; // @synthesize keyboardHighlighted=_keyboardHighlighted;
@property(copy, nonatomic) CDUnknownBlockType cleanupBlock; // @synthesize cleanupBlock=_cleanupBlock;
@property(copy, nonatomic) CDUnknownBlockType didFirstDisplayInDataViewControllerBlock; // @synthesize didFirstDisplayInDataViewControllerBlock=_didFirstDisplayInDataViewControllerBlock;
@property(copy, nonatomic) CDUnknownBlockType didEndScrollingInDataViewControllerBlock; // @synthesize didEndScrollingInDataViewControllerBlock=_didEndScrollingInDataViewControllerBlock;
@property(copy, nonatomic) CDUnknownBlockType didEndDisplayingInDataViewControllerBlock; // @synthesize didEndDisplayingInDataViewControllerBlock=_didEndDisplayingInDataViewControllerBlock;
@property(copy, nonatomic) CDUnknownBlockType didDisplayWithZeroVisibilityInDataViewControllerBlock; // @synthesize didDisplayWithZeroVisibilityInDataViewControllerBlock=_didDisplayWithZeroVisibilityInDataViewControllerBlock;
@property(copy, nonatomic) CDUnknownBlockType didDisplayInDataViewControllerBlock; // @synthesize didDisplayInDataViewControllerBlock=_didDisplayInDataViewControllerBlock;
@property(copy, nonatomic) CDUnknownBlockType willDisplayInDataViewControllerBlock; // @synthesize willDisplayInDataViewControllerBlock=_willDisplayInDataViewControllerBlock;
@property(retain, nonatomic) TFNDataViewCellLayout *cellLayout; // @synthesize cellLayout=_cellLayout;
@property(retain, nonatomic) TFNReusableViewCache *reusableViewCache; // @synthesize reusableViewCache=_reusableViewCache;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (_Bool)tableViewCellAccessibilityMagicTap;
- (void)populateMenuWithActionItems:(id)arg1;
- (void)populateMenuWithTitle:(id)arg1 actionItems:(id)arg2;
@property(readonly, nonatomic) _Bool isPreparedToDisplayMenuOnPrimaryAction;
- (void)prepareToDisplayMenuOnPrimaryAction;
- (id)keyCommands;
- (id)calculatedLayoutMetrics;
- (void)accountUserDefaultsDidUpdate:(id)arg1;
- (_Bool)swipeActionAnimationsSupported;
- (void)onSwipeLeftAndHold;
- (id)onSwipeLeft;
- (id)onSwipeRight;
- (id)innerContentViewForSwipe;
- (void)didKeyboardSelectInDataViewController:(id)arg1 atIndexPath:(id)arg2;
@property(readonly, nonatomic, getter=isKeyboardSelectable) _Bool keyboardSelectable;
- (void)cleanup;
- (void)didEndScrollingInDataViewController:(id)arg1;
- (void)didEndDisplayingInDataViewController:(id)arg1 reason:(unsigned long long)arg2;
- (void)didDisplayWithZeroVisibilityInDataViewController:(id)arg1 atIndexPath:(id)arg2;
- (void)didDisplayInDataViewController:(id)arg1 atIndexPath:(id)arg2 visibleIntersection:(struct CGRect)arg3;
- (void)didFirstDisplayInDataViewController:(id)arg1;
- (void)willDisplayInDataViewController:(id)arg1 atIndexPath:(id)arg2;
@property(readonly, nonatomic) struct CGRect contentFrame;
@property(retain, nonatomic) NSIndexPath *currentIndexPath;
@property(nonatomic) unsigned long long sectionBreaks;
- (void)layoutAccessory;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)isHighlighted;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setEditingAccessoryView:(id)arg1;
- (id)editingAccessoryView;
- (void)setAccessoryView:(id)arg1;
- (id)accessoryView;
@property(nonatomic) _Bool groupedAppearanceMaskEnabled;
@property(retain, nonatomic) UIColor *groupedAppearanceBorderColor;
@property(nonatomic) long long appearance;
- (void)setEditingAccessoryType:(long long)arg1;
- (long long)editingAccessoryType;
- (void)setAccessoryType:(long long)arg1;
- (long long)accessoryType;
@property(nonatomic) long long tfn_accessoryType;
@property(nonatomic) long long borderType;
@property(nonatomic) double separatorHeight;
@property(retain, nonatomic) UIColor *separatorAndBorderColor;
@property(nonatomic) long long separatorType;
- (_Bool)canBecomeFocused;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (_Bool)initializeForTableView:(id)arg1 indexPath:(id)arg2 initialization:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, nonatomic) UIView *contentView;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) CDUnknownBlockType willDisplayMenuOnPrimaryActionBlock;
// Preceding property had unknown attributes: ?
// Original attribute string: T@?,?,R,C,N


@end

