//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TFCCardData, TFNTwitterAccount, UIColor;
@protocol TFSTwitterCanonicalUser;

@interface T1BasicAppCardViewModel : NSObject
{
    id <TFSTwitterCanonicalUser> _primaryUser;
    TFCCardData *_cardData;
    long long _displayMode;
    NSString *_appCategory;
    TFNTwitterAccount *_account;
}

+ (long long)imageContentMode;
- (void).cxx_destruct;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) NSString *appCategory; // @synthesize appCategory=_appCategory;
@property(nonatomic) long long displayMode; // @synthesize displayMode=_displayMode;
@property(retain, nonatomic) TFCCardData *cardData; // @synthesize cardData=_cardData;
@property(readonly, nonatomic) id <TFSTwitterCanonicalUser> primaryUser; // @synthesize primaryUser=_primaryUser;
- (id)_textForPrice;
- (void)_userDidUpdate:(id)arg1;
@property(readonly, nonatomic) UIColor *textDetailsColor;
@property(readonly, nonatomic) UIColor *textColor;
@property(readonly, nonatomic) UIColor *dominantColor;
@property(readonly, nonatomic) unsigned long long cardType;
@property(readonly, nonatomic) double cornerRadius;
@property(readonly, nonatomic) double imageWidth;
@property(readonly, nonatomic) unsigned long long numberOfLinesPermittedInTitle;
@property(readonly, nonatomic) NSString *userFullName;
@property(readonly, nonatomic) NSString *imageURLString;
@property(readonly, nonatomic) struct CGSize imageDimensions;
@property(readonly, nonatomic) NSString *callToActionEventType;
@property(readonly, nonatomic) _Bool showFullWidthButton;
@property(readonly, nonatomic) _Bool showDescription;
@property(readonly, nonatomic) NSString *descriptionText;
@property(readonly, nonatomic) NSString *callToAction;
@property(readonly, nonatomic) _Bool showExpandedDetails;
@property(readonly, nonatomic) NSString *secondDetailText;
@property(readonly, nonatomic) NSString *detailText;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) double ratingScore;
@property(readonly, nonatomic, getter=shouldShowSubtitle) _Bool showSubtitle;
@property(readonly, nonatomic, getter=shouldShowLargerCTA) _Bool showLargerCTA;
@property(readonly, nonatomic, getter=shouldHideCTA) _Bool hideCTA;
@property(readonly, nonatomic) _Bool hasAppCategory;
@property(readonly, nonatomic, getter=shouldUseUnifiedDesign) _Bool useUnifiedDesign;
@property(readonly, nonatomic, getter=shouldShowAppCategoryLabel) _Bool showAppCategoryLabel;
@property(readonly, nonatomic, getter=shouldUseSmallImage) _Bool useSmallImage;
@property(readonly, nonatomic) _Bool shouldShowBorder;
@property(readonly, nonatomic) _Bool hasImageBackground;
@property(readonly, nonatomic, getter=shouldRightAlignCallToAction) _Bool rightAlignCallToAction;
@property(readonly, nonatomic, getter=shouldShowSubtitleLabel) _Bool showSubtitleLabel;
@property(readonly, nonatomic, getter=shouldUseSmallStars) _Bool useSmallStars;
@property(readonly, nonatomic, getter=shouldShowStarsView) _Bool showStarsView;
@property(readonly, nonatomic, getter=shouldUseFixedHeight) _Bool useFixedHeight;
@property(readonly, nonatomic) NSString *ratingsText;
@property(readonly, nonatomic) _Bool useDetailsView;
@property(readonly, nonatomic) _Bool showAttribution;
- (void)dealloc;
- (id)initWithCardContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

