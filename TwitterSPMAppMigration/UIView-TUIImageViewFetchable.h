//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class TUIImageViewFetchHelper, YOLayout;

@interface UIView (TUIImageViewFetchable)
+ (void)ptv_animateWithDuration:(double)arg1 delay:(double)arg2 usingSpringWithDamping:(double)arg3 initialSpringVelocity:(double)arg4 options:(unsigned long long)arg5 animations:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7 shouldAnimate:(_Bool)arg8;
+ (void)ptv_animateWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2 shouldAnimate:(_Bool)arg3;
+ (void)ptv_animateWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 shouldAnimate:(_Bool)arg4;
+ (void)ptv_animateWithDuration:(double)arg1 delay:(double)arg2 options:(unsigned long long)arg3 animations:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5 shouldAnimate:(_Bool)arg6;
+ (long long)ptv_interfaceOrientationFromVideoOrientation:(long long)arg1;
+ (void)yo_exchangeImplementation:(SEL)arg1 withImplementation:(SEL)arg2;
+ (void)useYOLayout;
+ (void)spacesUpdateViewWithChanges:(CDUnknownBlockType)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) TUIImageViewFetchHelper *tui_fetchHelper;
- (double)_ptv_statusBarHeight;
- (struct CGRect)_ptv_systemSafeAreaGetWindow:(out id *)arg1;
@property(readonly) struct UIEdgeInsets ptv_systemSafeAreaInsets;
- (void)ptv_insertAutoLayoutSubview:(id)arg1 atIndex:(long long)arg2 constraints:(id)arg3;
- (void)ptv_addAutoLayoutSubviews:(id)arg1 constraints:(id)arg2;
- (void)ptv_addAutoLayoutSubviews:(id)arg1;
- (void)see_constrainToEdgesOfView:(id)arg1;
- (void)see_constrainToMarginsOfView:(id)arg1;
- (void)see_constrainHorizontalEdgesToMarginsOfView:(id)arg1;
- (void)see_constrainVerticalEdgesToMarginsOfView:(id)arg1;
- (id)see_ancestorSharedWithView:(id)arg1;
- (void)see_constrainSidesToView:(id)arg1;
- (id)see_constrain:(long long)arg1 to:(long long)arg2 ofView:(id)arg3 offsetBy:(double)arg4 activate:(_Bool)arg5;
- (id)see_constrain:(long long)arg1 to:(long long)arg2 ofView:(id)arg3 offsetBy:(double)arg4;
- (id)see_constrain:(long long)arg1 toView:(id)arg2 offsetBy:(double)arg3;
- (id)see_constrain:(long long)arg1 to:(long long)arg2 ofView:(id)arg3;
- (id)see_constrain:(long long)arg1 toView:(id)arg2;
- (id)see_constrain:(long long)arg1 toBe:(long long)arg2 to:(long long)arg3 ofView:(id)arg4 offsetBy:(double)arg5 priority:(float)arg6 activate:(_Bool)arg7;
- (id)see_constrain:(long long)arg1 toValue:(double)arg2;
- (id)see_constrain:(long long)arg1 toValue:(double)arg2 priority:(float)arg3;
- (id)see_constrain:(long long)arg1 toBe:(long long)arg2 toValue:(double)arg3 priority:(float)arg4;
- (_Bool)ptv_isInPortraitOrientation;
@property(nonatomic) _Bool visible;
- (void)layoutView;
- (void)yo_setNeedsLayout;
- (struct CGSize)yo_sizeThatFits:(struct CGSize)arg1;
- (void)yo_layoutSubviews;
- (void)yo_setFrame:(struct CGRect)arg1;
- (id)_initWithCoder:(id)arg1;
- (id)_initWithFrame:(struct CGRect)arg1;
- (void)viewInit;
@property(retain, nonatomic) YOLayout *layout;
@end

