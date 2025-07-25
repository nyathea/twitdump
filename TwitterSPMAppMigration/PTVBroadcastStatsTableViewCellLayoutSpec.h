//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PTVBroadcastStatsTableViewCellLayoutSpec : NSObject
{
}

+ (struct CGRect)WatchRateInfoButtonFrameWithWatchLabelFrame:(struct CGRect)arg1 infoButtonSize:(struct CGSize)arg2;
+ (double)WatchRateInfoButtonPadding;
+ (double)CollapsedHeight;
+ (struct CGRect)CollapsedLabelFrameWithText:(id)arg1 SuperviewSize:(struct CGSize)arg2;
+ (id)CollapsedLabelFont;
+ (double)HeightWithStatNames:(id)arg1 StatValues:(id)arg2 StatDisplayStyles:(id)arg3 SuperviewWidth:(double)arg4;
+ (struct CGRect)SeparatorLineFrameWithLabelBottom:(double)arg1 DisplayStyleOfNextStat:(long long)arg2 SuperviewSize:(struct CGSize)arg3;
+ (struct CGRect)NameLabelFrameWithText:(id)arg1 ValueLabelWidth:(double)arg2 DisplayStyle:(long long)arg3 BottomOfLastRow:(double)arg4 SuperviewSize:(struct CGSize)arg5;
+ (struct CGRect)ValueLabelFrameWithText:(id)arg1 DisplayStyle:(long long)arg2 BottomOfLastRow:(double)arg3 SuperviewSize:(struct CGSize)arg4;
+ (double)PaddingBetweenLabels;
+ (double)LeftHorizontalPaddingForDisplayStyle:(long long)arg1;
+ (double)RightHorizontalPadding;
+ (double)VerticalPaddingWithDisplayStyle:(long long)arg1;
+ (id)LabelFontWithDisplayStyle:(long long)arg1;

@end

