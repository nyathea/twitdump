//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterAppSPMMigration/TUICardViewLayoutDelegate.h>

@interface T1PlayerCardViewLayoutDelegate : TUICardViewLayoutDelegate
{
}

+ (id)textModelForDescription;
+ (id)textModelForTitle;
+ (id)attributedStringForDescription:(id)arg1;
+ (id)attributedStringForTitle:(id)arg1;
+ (_Bool)isWide:(double)arg1;
+ (id)viewModelWithCardContext:(id)arg1;
+ (id)sharedLayoutDelegate;
- (struct CGRect)_createPaddedRectForHighlight:(struct CGRect)arg1;
- (double)_layoutCallToAction:(struct CGRect)arg1 layoutState:(id)arg2 callToActionText:(id)arg3 stretchToWidth:(_Bool)arg4;
- (double)_layoutImageAndHighlight:(struct CGRect)arg1 imageSize:(struct CGSize)arg2 layoutState:(id)arg3;
- (double)_layoutDescriptionAndHighlight:(struct CGRect)arg1 layoutState:(id)arg2 description:(id)arg3;
- (double)_layoutTitleAndHighlight:(struct CGRect)arg1 layoutState:(id)arg2 title:(id)arg3;
- (double)_layoutAttribution:(struct CGRect)arg1 layoutState:(id)arg2 displayFullName:(id)arg3;
- (void)layoutSubviewsForCardView:(id)arg1 withState:(id)arg2;
- (id)layoutForViewModel:(id)arg1 layoutMetrics:(id)arg2;

@end

