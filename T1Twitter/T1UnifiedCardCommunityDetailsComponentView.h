//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterAppSPMMigration/TUCLayoutableView.h>

@class MISSING_TYPE, TIPImagePipeline, TUCUnifiedCard, UIView;
@protocol TUCComponentModel, TUCComponentViewEventDelegate;

@interface T1UnifiedCardCommunityDetailsComponentView : TUCLayoutableView
{
    MISSING_TYPE *unifiedCard;
    MISSING_TYPE *component;
    MISSING_TYPE *eventDelegate;
    MISSING_TYPE *imagePipeline;
    MISSING_TYPE *$__lazy_storage_$_backgroundView;
    MISSING_TYPE *$__lazy_storage_$_nameLabel;
    MISSING_TYPE *$__lazy_storage_$_facePileView;
    MISSING_TYPE *$__lazy_storage_$_membershipLabel;
    MISSING_TYPE *$__lazy_storage_$_viewCommunityButton;
}

+ (id)sharedLayoutDelegate;
- (void).cxx_destruct;
- (void)t1_didTap;
- (id)updatedScribeContextForComponentViewEvent:(id)arg1 sourceScribeContext:(id)arg2;
- (id)supplementalParamsForEvent:(id)arg1;
- (void)prepareForReuse;
- (void)setupActions;
@property(nonatomic, readonly) UIView *autoplayableContainerView;
@property(nonatomic, retain) TIPImagePipeline *imagePipeline; // @synthesize imagePipeline;
@property(nonatomic) __weak id <TUCComponentViewEventDelegate> eventDelegate; // @synthesize eventDelegate;
@property(nonatomic, retain) id <TUCComponentModel> component; // @synthesize component;
@property(nonatomic, retain) TUCUnifiedCard *unifiedCard; // @synthesize unifiedCard;
- (id)accessibilityCustomUCActions;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

