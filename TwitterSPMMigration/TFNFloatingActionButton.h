//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSSet, NSString, TFNExpandingButton, TFNExpandingButtonGestureRecognizer, TFNTouchDownGestureRecognizer, UILongPressGestureRecognizer, UITapGestureRecognizer;

@interface TFNFloatingActionButton : UIView
{
    _Bool _allowsExpansion;
    _Bool _hitTestingEnabled;
    TFNExpandingButton *_expandingButton;
    CDUnknownBlockType _actionOverrideBlock;
    TFNTouchDownGestureRecognizer *_touchDownRecognizer;
    UITapGestureRecognizer *_tapRecognizer;
    UILongPressGestureRecognizer *_longPressRecognizer;
    NSSet *_gestureRecognizerSet;
    TFNExpandingButtonGestureRecognizer *_expandingButtonGestureRecognizer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hitTestingEnabled; // @synthesize hitTestingEnabled=_hitTestingEnabled;
@property(readonly, nonatomic) TFNExpandingButtonGestureRecognizer *expandingButtonGestureRecognizer; // @synthesize expandingButtonGestureRecognizer=_expandingButtonGestureRecognizer;
@property(readonly, nonatomic) NSSet *gestureRecognizerSet; // @synthesize gestureRecognizerSet=_gestureRecognizerSet;
@property(readonly, nonatomic) UILongPressGestureRecognizer *longPressRecognizer; // @synthesize longPressRecognizer=_longPressRecognizer;
@property(readonly, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
@property(readonly, nonatomic) TFNTouchDownGestureRecognizer *touchDownRecognizer; // @synthesize touchDownRecognizer=_touchDownRecognizer;
@property(copy, nonatomic) CDUnknownBlockType actionOverrideBlock; // @synthesize actionOverrideBlock=_actionOverrideBlock;
@property(nonatomic) _Bool allowsExpansion; // @synthesize allowsExpansion=_allowsExpansion;
@property(readonly, nonatomic) TFNExpandingButton *expandingButton; // @synthesize expandingButton=_expandingButton;
- (_Bool)tfn_navigationControllerBackGestureEnabled;
- (_Bool)tfn_isAppGestureEnabled:(unsigned long long)arg1;
- (void)_tfn_voiceOverStatusChanged;
- (_Bool)isAccessibilityElement;
- (void)showTutorialForItemWithCategory:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hideAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_tfn_longPressSecondaryAction:(id)arg1;
- (void)_tfn_longPressExpansionAction:(id)arg1;
- (void)_tfn_longPressAction:(id)arg1;
- (void)_tfn_expandingButtonAction:(id)arg1;
- (void)_tfn_tapAction:(id)arg1;
- (void)_tfn_touchDownAction:(id)arg1;
- (void)_tfn_updateExpandingButtonLayoutForCurrentPosition;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

