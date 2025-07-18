//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class TFNAttributedTextView, TFNSolidColorView;

@interface T1StatusSensitiveContentView : UIView
{
    TFNAttributedTextView *_textView;
    TFNSolidColorView *_borderView;
    TFNSolidColorView *_backgroundView;
}

+ (id)private_sensitiveContentTextModel;
+ (struct UIEdgeInsets)private_innerContentInsetsForMetrics:(id)arg1;
+ (double)heightForViewModel:(id)arg1 width:(double)arg2 layoutMetrics:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) TFNSolidColorView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) TFNSolidColorView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) TFNAttributedTextView *textView; // @synthesize textView=_textView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

