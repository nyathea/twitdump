//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TUITwitterTooltip, UIWindow;
@protocol T1WindowTooltipPresenterDelegate;

@interface T1WindowTooltipPresenter : NSObject
{
    id <T1WindowTooltipPresenterDelegate> _delegate;
    TUITwitterTooltip *_tooltip;
    UIWindow *_window;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) TUITwitterTooltip *tooltip; // @synthesize tooltip=_tooltip;
@property(nonatomic) __weak id <T1WindowTooltipPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tooltipDidDismiss:(id)arg1;
- (void)tooltipDidTap:(id)arg1;
- (_Bool)isShowingTooltip;
- (void)dismissTooltipWithAnimationType:(unsigned long long)arg1;
- (void)presentTooltip:(id)arg1 fromPoint:(struct CGPoint)arg2 inView:(id)arg3 window:(id)arg4 permittedArrowDirection:(unsigned long long)arg5 animationType:(unsigned long long)arg6;
- (id)presentTooltipWithText:(id)arg1 atPoint:(struct CGPoint)arg2 onView:(id)arg3 hostView:(id)arg4 window:(id)arg5 permittedArrowDirections:(unsigned long long)arg6 animationType:(unsigned long long)arg7;
- (id)presentTooltipWithText:(id)arg1 onView:(id)arg2 hostView:(id)arg3 permittedArrowDirections:(unsigned long long)arg4 animationType:(unsigned long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

