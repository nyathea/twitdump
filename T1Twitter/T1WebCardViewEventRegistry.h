//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class T1WebCardViewModel, TUICardView;
@protocol TUICardViewDelegate;

@interface T1WebCardViewEventRegistry : NSObject
{
    TUICardView *_view;
    id <TUICardViewDelegate> _delegate;
    T1WebCardViewModel *_viewModel;
    SEL _didTapImageSEL;
    SEL _didLongPressImageSEL;
    SEL _didTapTitleSEL;
    SEL _didLongPressTitleSEL;
    SEL _didTapDescriptionSEL;
    SEL _didLongPressDescriptionSEL;
    SEL _didTapLinkSEL;
    SEL _didLongPressLinkSEL;
    SEL _didTapBackgroundSEL;
    SEL _didLongPressBackgroundSEL;
    SEL _didTapCTAButton;
}

- (void).cxx_destruct;
@property(nonatomic) SEL didTapCTAButton; // @synthesize didTapCTAButton=_didTapCTAButton;
@property(nonatomic) SEL didLongPressBackgroundSEL; // @synthesize didLongPressBackgroundSEL=_didLongPressBackgroundSEL;
@property(nonatomic) SEL didTapBackgroundSEL; // @synthesize didTapBackgroundSEL=_didTapBackgroundSEL;
@property(nonatomic) SEL didLongPressLinkSEL; // @synthesize didLongPressLinkSEL=_didLongPressLinkSEL;
@property(nonatomic) SEL didTapLinkSEL; // @synthesize didTapLinkSEL=_didTapLinkSEL;
@property(nonatomic) SEL didLongPressDescriptionSEL; // @synthesize didLongPressDescriptionSEL=_didLongPressDescriptionSEL;
@property(nonatomic) SEL didTapDescriptionSEL; // @synthesize didTapDescriptionSEL=_didTapDescriptionSEL;
@property(nonatomic) SEL didLongPressTitleSEL; // @synthesize didLongPressTitleSEL=_didLongPressTitleSEL;
@property(nonatomic) SEL didTapTitleSEL; // @synthesize didTapTitleSEL=_didTapTitleSEL;
@property(nonatomic) SEL didLongPressImageSEL; // @synthesize didLongPressImageSEL=_didLongPressImageSEL;
@property(nonatomic) SEL didTapImageSEL; // @synthesize didTapImageSEL=_didTapImageSEL;
@property(retain, nonatomic) T1WebCardViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <TUICardViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak TUICardView *view; // @synthesize view=_view;
- (void)didLongPressBackground:(id)arg1;
- (void)didTapBackground:(id)arg1;
- (void)didLongPressLink:(id)arg1;
- (void)didTapLink:(id)arg1;
- (void)didLongPressDescription:(id)arg1;
- (void)didTapDescription:(id)arg1;
- (void)didLongPressTitle:(id)arg1;
- (void)didTapTitle:(id)arg1;
- (void)didLongPressImage:(id)arg1;
- (void)didTapImage:(id)arg1;
- (void)_didLongPress:(id)arg1;
- (void)_didTap:(id)arg1 eventType:(id)arg2;
- (_Bool)shouldOmitLongPress;
- (void)registerCardBackgroundHighlightView:(id)arg1;
- (void)registerLinkHighlightView:(id)arg1;
- (void)registerDescriptionHighlightView:(id)arg1;
- (void)registerTitleHighlightView:(id)arg1;
- (void)registerMediaHighlightView:(id)arg1;
- (id)initWithView:(id)arg1;
- (id)init;

@end

