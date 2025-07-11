//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PTVVideoPlaybackViewLayoutSpec : NSObject
{
}

+ (struct CGRect)OverlayNameLabelFrameWithText:(id)arg1 Bounds:(struct CGRect)arg2;
+ (struct CGRect)BitrateLabelFrameWithText:(id)arg1;
+ (struct CGRect)NTPLabelFrameWithText:(id)arg1;
+ (struct UIEdgeInsets)OverlayNameInsets;
+ (id)OverlayNameFonts;
+ (id)DebugLabelsFonts;
+ (struct CGRect)BackgroundViewFrameWithVideoAspect:(double)arg1 SuperViewSize:(struct CGSize)arg2;
+ (struct CGRect)VideoFrameWithVideoAspect:(double)arg1 ShouldAspectFill:(_Bool)arg2 SuperViewSize:(struct CGSize)arg3 ShouldAdjustFrameBasedOnNotch:(_Bool)arg4;

@end

