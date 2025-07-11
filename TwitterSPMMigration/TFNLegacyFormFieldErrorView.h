//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class TFNLegacyFormAppearance, UILabel;

@interface TFNLegacyFormFieldErrorView : UIView
{
    UILabel *_textLabel;
    TFNLegacyFormAppearance *_appearance;
}

+ (double)heightForMessage:(id)arg1 withFormFieldWidth:(double)arg2 appearance:(id)arg3 layoutMetrics:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) TFNLegacyFormAppearance *appearance; // @synthesize appearance=_appearance;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void)addErrorViewMaskWithVisibleHeight:(double)arg1 layoutMetrics:(id)arg2 replaceIfExists:(_Bool)arg3;
- (void)animateErrorViewMaskForLayoutMetrics:(id)arg1 showError:(_Bool)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

