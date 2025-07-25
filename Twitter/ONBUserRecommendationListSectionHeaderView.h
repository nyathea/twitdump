//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNModuleTableHeaderView.h>

@class TFNTappableHighlightView, UIControl;
@protocol T1UserRecommendationListSectionHeaderCheckableControl;

@interface ONBUserRecommendationListSectionHeaderView : TFNModuleTableHeaderView
{
    UIControl<T1UserRecommendationListSectionHeaderCheckableControl> *_checkmarkControl;
}

+ (double)heightWithHeaderText:(id)arg1 detailText:(id)arg2 layoutMetrics:(id)arg3;
+ (Class)checkmarkControlClass;
- (void).cxx_destruct;
@property(retain, nonatomic) UIControl<T1UserRecommendationListSectionHeaderCheckableControl> *checkmarkControl; // @synthesize checkmarkControl=_checkmarkControl;
- (id)_t1_createTappableView;
@property(readonly, nonatomic) TFNTappableHighlightView *tappableBackgroundView;
- (id)initWithReuseIdentifier:(id)arg1;

@end

