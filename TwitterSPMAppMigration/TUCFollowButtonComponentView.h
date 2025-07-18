//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, TIPImagePipeline, TUCUnifiedCard, UIView;
@protocol TUCComponentModel, TUCComponentViewEventDelegate;

@interface TUCFollowButtonComponentView
{
    MISSING_TYPE *unifiedCard;
    MISSING_TYPE *component;
    MISSING_TYPE *eventDelegate;
    MISSING_TYPE *imagePipeline;
    MISSING_TYPE *account;
    MISSING_TYPE *mutableScribeContext;
    MISSING_TYPE *followControl;
    MISSING_TYPE *autoplayableContainerView;
}

+ (id)sharedLayoutDelegate;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)accessibilityCustomUCActions;
- (id)updatedScribeContextForComponentViewEvent:(id)arg1 sourceScribeContext:(id)arg2;
- (id)supplementalParamsForEvent:(id)arg1;
- (void)prepareForReuse;
- (void)setupActions;
@property(nonatomic, retain) UIView *autoplayableContainerView; // @synthesize autoplayableContainerView;
- (id)initWithCoder:(id)arg1;
- (id)initWithAccount:(id)arg1 scribeContext:(id)arg2;
@property(nonatomic, retain) TIPImagePipeline *imagePipeline; // @synthesize imagePipeline;
@property(nonatomic) __weak id <TUCComponentViewEventDelegate> eventDelegate; // @synthesize eventDelegate;
@property(nonatomic, retain) id <TUCComponentModel> component; // @synthesize component;
@property(nonatomic, retain) TUCUnifiedCard *unifiedCard; // @synthesize unifiedCard;

@end

