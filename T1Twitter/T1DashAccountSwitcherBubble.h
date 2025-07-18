//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, TFNBadgeView, UILongPressGestureRecognizer, UITapGestureRecognizer, _TtC20TwitterNotifications21TFSTwitterBadgeCounts;

@interface T1DashAccountSwitcherBubble : UIView
{
    UITapGestureRecognizer *_tapRecognizer;
    UILongPressGestureRecognizer *_longPressRecognizer;
    _Bool _highlighted;
    CDUnknownBlockType _tapActionBlock;
    UIView *_highlightView;
    TFNBadgeView *_unreadBadgeView;
    _TtC20TwitterNotifications21TFSTwitterBadgeCounts *_badgeCounts;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _TtC20TwitterNotifications21TFSTwitterBadgeCounts *badgeCounts; // @synthesize badgeCounts=_badgeCounts;
@property(retain, nonatomic) TFNBadgeView *unreadBadgeView; // @synthesize unreadBadgeView=_unreadBadgeView;
@property(retain, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(copy, nonatomic) CDUnknownBlockType tapActionBlock; // @synthesize tapActionBlock=_tapActionBlock;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)wasTouched:(id)arg1;
- (void)wasTapped:(id)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
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

