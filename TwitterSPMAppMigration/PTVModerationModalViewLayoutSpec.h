//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PTVModerationModalViewLayoutSpec : NSObject
{
}

+ (struct CGRect)SettingsFooterLabelFrameWithConfirmationButtonHeight:(double)arg1 ModalViewSize:(struct CGSize)arg2;
+ (id)SettingsFooterAttributed;
+ (struct CGRect)VotingButtonFrame:(long long)arg1 ExampleContainerSize:(struct CGSize)arg2;
+ (double)VotingButtonWidth:(double)arg1;
+ (id)VotingButtonAttributed:(id)arg1;
+ (struct CGRect)ExampleDividingLineFrameWithExampleContainerSize:(struct CGSize)arg1;
+ (struct CGRect)ExampleMessageLabelFrameWithMessageContainerViewSize:(struct CGSize)arg1;
+ (struct CGRect)LTRExampleMessageLabelFrameWithMessageContainerViewSize:(struct CGSize)arg1;
+ (struct CGRect)ExampleMessageAvatarFrameWithMessageContainerViewSize:(struct CGSize)arg1;
+ (struct CGRect)LTRExampleMessageAvatarFrame;
+ (struct CGRect)MessageContainerFrame:(struct CGSize)arg1 ExampleContainerSize:(struct CGSize)arg2;
+ (struct CGRect)LTRMessageContainerFrame:(struct CGSize)arg1;
+ (struct CGSize)ExampleMessageSizeWithExampleContainerSize:(struct CGSize)arg1;
+ (id)ExampleMessageAttributed;
+ (struct CGRect)ExampleContainerFrameWithSubtitleSize:(struct CGSize)arg1 TraitCollection:(id)arg2 ModalViewSize:(struct CGSize)arg3;
+ (struct CGRect)ExampleLabelFrameWithSubtitleSize:(struct CGSize)arg1 TraitCollection:(id)arg2 ModalViewSize:(struct CGSize)arg3;
+ (id)ExampleLabelAttributed;
+ (struct CGRect)SubtitleFrameWithSize:(struct CGSize)arg1 TraitCollection:(id)arg2 ModalViewSize:(struct CGSize)arg3;
+ (id)SubtitleAttributed:(id)arg1;
+ (struct CGRect)TitleHeaderBackgroundFrame:(struct CGSize)arg1;
+ (struct CGRect)TitleFrameWithModalViewSize:(struct CGSize)arg1;
+ (struct CGSize)ModalViewSizeThatFits:(struct CGSize)arg1 SubtitleLabelSize:(struct CGSize)arg2 ConfirmationButtonHeight:(double)arg3 TraitCollection:(id)arg4;
+ (double)ExampleContainerHeight;
+ (double)ExampleDividingLineHeight;
+ (double)MessageContainerHeight;
+ (double)VotingButtonHeight;
+ (struct UIEdgeInsets)ConfirmationButtonOuterPadding;
+ (struct UIEdgeInsets)SettingsFooterOuterPadding;
+ (struct UIEdgeInsets)VotingButtonOuterPadding;
+ (struct UIEdgeInsets)ExampleDividingLineOuterSpacing;
+ (struct UIEdgeInsets)ExampleMessageContainerOuterSpacing;
+ (struct UIEdgeInsets)ExampleContainerOuterSpacing;
+ (struct UIEdgeInsets)ExampleOuterSpacing:(id)arg1;
+ (struct UIEdgeInsets)SubtitleOuterSpacing:(id)arg1;
+ (struct UIEdgeInsets)TitleOuterSpacing;
+ (id)SettingsFooterFont;
+ (id)VotingButtonFont;
+ (id)ExampleMessageFont;
+ (id)ExampleFont;
+ (id)SubtitleFontBold;
+ (id)SubtitleFontLight;
+ (id)TitleFont;

@end

