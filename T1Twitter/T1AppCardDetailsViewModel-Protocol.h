//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSString, UIColor;

@protocol T1AppCardDetailsViewModel <NSObject>
@property(readonly, nonatomic) UIColor *textDetailsColor;
@property(readonly, nonatomic) UIColor *textColor;
@property(readonly, nonatomic) UIColor *dominantColor;
@property(readonly, nonatomic) NSString *appCategory;
@property(readonly, nonatomic) unsigned long long cardType;
@property(readonly, nonatomic) double cornerRadius;
@property(readonly, nonatomic) double imageWidth;
@property(readonly, nonatomic) _Bool hasAppCategory;
@property(readonly, nonatomic, getter=shouldUseUnifiedDesign) _Bool useUnifiedDesign;
@property(readonly, nonatomic, getter=shouldUseSmallImage) _Bool useSmallImage;
@property(readonly, nonatomic, getter=shouldRightAlignCallToAction) _Bool rightAlignCallToAction;
@property(readonly, nonatomic, getter=shouldShowSubtitle) _Bool showSubtitle;
@property(readonly, nonatomic, getter=shouldShowLargerCTA) _Bool showLargerCTA;
@property(readonly, nonatomic, getter=shouldHideCTA) _Bool hideCTA;
@property(readonly, nonatomic, getter=shouldShowSubtitleLabel) _Bool showSubtitleLabel;
@property(readonly, nonatomic, getter=shouldShowAppCategoryLabel) _Bool showAppCategoryLabel;
@property(readonly, nonatomic, getter=shouldUseSmallStars) _Bool useSmallStars;
@property(readonly, nonatomic, getter=shouldShowStarsView) _Bool showStarsView;
@property(readonly, nonatomic, getter=shouldUseFixedHeight) _Bool useFixedHeight;
@property(readonly, nonatomic) unsigned long long numberOfLinesPermittedInTitle;
@property(readonly, nonatomic) double ratingScore;
@property(readonly, nonatomic) NSString *callToAction;
@property(readonly, nonatomic) NSString *ratingsText;
@property(readonly, nonatomic) NSString *detailText;
@property(readonly, nonatomic) NSString *title;
@end

