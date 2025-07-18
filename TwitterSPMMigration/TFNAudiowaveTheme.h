//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIColor;

@interface TFNAudiowaveTheme : NSObject
{
    _Bool _shouldRoundNumberOfBars;
    _Bool _shouldOnlyLayoutLatestBar;
    _Bool _shouldAnimateOut;
    _Bool _shouldUseModelDuration;
    UIColor *_tintColor;
    double _barWidth;
    double _barSpacing;
    double _cornerRadius;
    unsigned long long _maskedCorners;
    double _numberOfBarsPerSecond;
    struct UIEdgeInsets _contentInset;
}

+ (id)defaultTheme;
- (void).cxx_destruct;
@property(nonatomic, getter=usesModelDuration) _Bool shouldUseModelDuration; // @synthesize shouldUseModelDuration=_shouldUseModelDuration;
@property(nonatomic) _Bool shouldAnimateOut; // @synthesize shouldAnimateOut=_shouldAnimateOut;
@property(nonatomic) _Bool shouldOnlyLayoutLatestBar; // @synthesize shouldOnlyLayoutLatestBar=_shouldOnlyLayoutLatestBar;
@property(nonatomic) _Bool shouldRoundNumberOfBars; // @synthesize shouldRoundNumberOfBars=_shouldRoundNumberOfBars;
@property(nonatomic) double numberOfBarsPerSecond; // @synthesize numberOfBarsPerSecond=_numberOfBarsPerSecond;
@property(nonatomic) unsigned long long maskedCorners; // @synthesize maskedCorners=_maskedCorners;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) double barSpacing; // @synthesize barSpacing=_barSpacing;
@property(nonatomic) double barWidth; // @synthesize barWidth=_barWidth;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
- (id)copy;
- (_Bool)isEqualToTheme:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithTheme:(id)arg1;
- (id)init;

@end

