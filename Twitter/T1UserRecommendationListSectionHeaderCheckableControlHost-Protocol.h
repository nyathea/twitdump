//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, TFNLayoutMetrics, UIControl;
@protocol T1UserRecommendationListSectionHeaderCheckableControl;

@protocol T1UserRecommendationListSectionHeaderCheckableControlHost
+ (Class)checkmarkControlClass;
+ (double)heightWithHeaderText:(NSString *)arg1 detailText:(NSString *)arg2 layoutMetrics:(TFNLayoutMetrics *)arg3;
@property(readonly, nonatomic) UIControl<T1UserRecommendationListSectionHeaderCheckableControl> *checkmarkControl;
@end

