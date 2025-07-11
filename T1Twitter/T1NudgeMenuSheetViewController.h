//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNMenuSheetViewController.h>

@class NSString, UIColor, UIView;

@interface T1NudgeMenuSheetViewController : TFNMenuSheetViewController
{
    _Bool _contentRequiresInsets;
    UIColor *_slideoverHandleColor;
    UIView *_safeAreaMaskView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *safeAreaMaskView; // @synthesize safeAreaMaskView=_safeAreaMaskView;
@property(retain, nonatomic) UIColor *slideoverHandleColor; // @synthesize slideoverHandleColor=_slideoverHandleColor;
@property(readonly, nonatomic) _Bool contentRequiresInsets; // @synthesize contentRequiresInsets=_contentRequiresInsets;
- (double)preferredHeightForModalSheetViewController:(id)arg1 modalContentViewVisibleEdgeInsets:(struct UIEdgeInsets)arg2;
- (void)nudgeItemAdapter:(id)arg1 shouldUpdateItem:(id)arg2 toStyle:(unsigned long long)arg3 atIndexPath:(id)arg4 fromContextAction:(_Bool)arg5;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithTitle:(id)arg1 message:(id)arg2 messageIconName:(id)arg3 actionItemSections:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

