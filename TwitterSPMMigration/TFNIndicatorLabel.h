//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE, TFNIndicatorLabelConfiguration;

@interface TFNIndicatorLabel : UIView
{
    MISSING_TYPE *_configuration;
    MISSING_TYPE *hStack;
    MISSING_TYPE *label;
    MISSING_TYPE *imageView;
    MISSING_TYPE *staticConstraints;
    MISSING_TYPE *dynamicConstraints;
}

+ (struct CGSize)sizeForConfiguration:(id)arg1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)sizeToFit;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
- (void)layoutSubviews;
- (void)updateConstraints;
- (id)initWithConfiguration:(id)arg1;
@property(nonatomic, retain) TFNIndicatorLabelConfiguration *configuration;
- (void)applySwiftUIConfiguration:(id)arg1;

@end

