//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PTVBroadcastSocialProofViewLayout : NSObject
{
}

+ (id)SocialProofAttributed:(id)arg1;
+ (id)GuestsAttributed:(id)arg1;
+ (id)SharedByAttributed:(id)arg1;
+ (id)SharedByImage;
+ (struct CGRect)LabelFrameWithConstrainingSize:(struct CGSize)arg1;
+ (struct CGRect)LTRLabelFrameWithConstrainingSize:(struct CGSize)arg1;
+ (struct CGRect)ImageFrameWithConstrainingSize:(struct CGSize)arg1;
+ (struct CGRect)LTRImageFrameWithLabelWidthConstrainingSize:(struct CGSize)arg1;
+ (struct UIEdgeInsets)LabelOuterPadding;
+ (struct CGSize)ImageSize;
+ (double)SocialProofFontLineHeight;
+ (id)SocialProofFont;
+ (id)SocialProofFontBold;
+ (double)CalculateHeightWithSocialProof:(id)arg1;

@end

