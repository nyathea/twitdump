//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIFont.h>

@interface UIFont (TFNUIFontGroup)
+ (id)tfnuiFonts;
+ (id)tfn_monospacedFontWithSize:(double)arg1 weight:(double)arg2;
+ (id)_tfn_variableFontAttributeForWeight:(double)arg1 size:(double)arg2;
+ (double)_tfn_variableFontWeightForName:(id)arg1;
+ (id)_tfn_fontNameForFontWeight:(double)arg1;
+ (id)_tfn_postScriptFontNameForFontName:(id)arg1 size:(double)arg2;
+ (id)tfn_fontWithName:(id)arg1 size:(double)arg2;
+ (double)tfn_defaultFontSizeOffsetBy:(double)arg1;
+ (double)tfn_dynamicFontSizeOffsetBy:(double)arg1;
+ (double)tfn_contentFontSizeOffsetBy:(double)arg1;
+ (double)tfn_transitionDestinationContentFontSize;
+ (double)tfn_defaultFontSize;
+ (double)tfn_dynamicFontSize;
+ (double)tfn_contentFontSize;
+ (double)tfn_maximumDynamicFontSize;
+ (double)tfn_maximumFontSize;
+ (double)tfn_minimumFontSize;
+ (void)tfn_setTransitionDestinationContentFontSize:(double)arg1;
+ (void)tfn_fontDidChange;
+ (void)tfn_setContentFontSize:(double)arg1 minimum:(double)arg2 maximum:(double)arg3 maximumDynamic:(double)arg4;
+ (_Bool)tfn_isChirpFontEnabled;
+ (void)setTwitterFonts:(id)arg1;
+ (id)twitterFonts;
- (id)tfn_withObliqueness:(double)arg1;
- (id)_tfn_withFontDescriptorFeatureSettingsAttribute:(id)arg1;
- (id)tfn_withAccountSpoofingPreventionStyle;
- (id)tfn_withMonospacedDigits;
- (struct __CTFont *)tfn_CTFont;
- (id)tfn_variableWeightFontByInterpolatingWithFont:(id)arg1 byPercent:(double)arg2;
- (double)_tfn_variableWeightFromFontDescriptor;
- (double)tfn_heightForVerticalCentering;
- (double)tfn_minimumScaleFactorFromFont:(id)arg1;
- (double)tfn_topPadding;
- (double)tfn_renderedDescender;
@end

