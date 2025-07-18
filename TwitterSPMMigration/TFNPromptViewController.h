//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIView;
@protocol TFNPromptDataSource, TFNPromptView;

@interface TFNPromptViewController
{
    UIView<TFNPromptView> *_promptView;
    _Bool _didFireImpression;
    id <TFNPromptDataSource> _dataSource;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <TFNPromptDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (double)preferredHeightForModalSheetViewController:(id)arg1 modalContentViewVisibleEdgeInsets:(struct UIEdgeInsets)arg2;
- (_Bool)private_displayAsHalfPrompt;
- (void)private_configurePromptView:(id)arg1;
- (id)private_providePromptView;
- (void)private_updatePromptView;
- (void)private_dismissAction:(id)arg1;
- (struct CGSize)sizeWithLayoutMetrics:(id)arg1;
- (void)willAttachToModalContainerViewController:(id)arg1;
- (_Bool)tfn_logoTitleViewShown;
- (long long)tfn_preferredToolbarVisibility;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) UIView<TFNPromptView> *promptView;
- (id)initWithHidesBackButton:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

