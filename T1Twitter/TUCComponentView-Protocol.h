//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, TFSTwitterScribeContext, TIPImagePipeline, TUCComponentViewEvent, TUCUnifiedCard, UIView;
@protocol TUCComponentModel, TUCComponentViewEventDelegate, TUCComponentViewLayoutDelegate;

@protocol TUCComponentView
+ (id <TUCComponentViewLayoutDelegate>)sharedLayoutDelegate;
- (NSArray *)accessibilityCustomUCActions;
- (TFSTwitterScribeContext *)updatedScribeContextForComponentViewEvent:(TUCComponentViewEvent *)arg1 sourceScribeContext:(TFSTwitterScribeContext *)arg2;
- (NSDictionary *)supplementalParamsForEvent:(TUCComponentViewEvent *)arg1;
- (void)prepareForReuse;
- (void)setupActions;
@property(nonatomic, readonly) UIView *autoplayableContainerView;
@property(nonatomic, retain) TIPImagePipeline *imagePipeline;
@property(nonatomic) __weak id <TUCComponentViewEventDelegate> eventDelegate;
@property(nonatomic, retain) id <TUCComponentModel> component;
@property(nonatomic, retain) TUCUnifiedCard *unifiedCard;

@optional
- (_Bool)handlesTouchHighlighting;
@end

