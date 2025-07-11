//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/NSObject-Protocol.h>

@class NSString, TFNLayoutMetrics, TFNLegacyFormField, UITextPosition, UITextRange;
@protocol TFNLegacyFormTextInputCustomizationDelegate;

@protocol TFNLegacyFormTextInput <NSObject>
+ (double)standardHeightForLayoutMetrics:(TFNLayoutMetrics *)arg1 emphasized:(_Bool)arg2 stacked:(_Bool)arg3;
@property(readonly, nonatomic) UITextRange *selectedTextRange;
@property(retain, nonatomic) TFNLegacyFormField *formField;
@property(retain, nonatomic) NSString *text;
@property(readonly, nonatomic) struct CGRect frame;
- (struct CGRect)caretRectForPosition:(UITextPosition *)arg1;
- (double)baselineYForBounds:(struct CGRect)arg1;
- (struct CGRect)layoutRectInBounds:(struct CGRect)arg1 stacked:(_Bool)arg2;
- (void)updateTextColor;

@optional
@property(nonatomic) __weak id <TFNLegacyFormTextInputCustomizationDelegate> customizationDelegate;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<TFNLegacyFormTextInputCustomizationDelegate>",?,W,N

- (struct CGRect)layoutAccessoryViewWithSize:(struct CGSize)arg1 layoutMetrics:(TFNLayoutMetrics *)arg2;
- (struct UIEdgeInsets)additionalContentPadding;
@end

