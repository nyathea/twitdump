//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PTVBroadcastThumbnailViewLayoutSpec : NSObject
{
}

+ (struct CGRect)LTRGuestsProfileImagesStackViewFrameWithConstrainingSize:(struct CGSize)arg1 NumberOfGuestImages:(unsigned long long)arg2;
+ (struct CGRect)GuestsProfileImagesStackViewFrameWithConstrainingSize:(struct CGSize)arg1 NumberOfGuestImages:(unsigned long long)arg2;
+ (id)ThumbnailMaskWithConstrainingSize:(struct CGSize)arg1 CornerRadius:(double)arg2 NumberOfGuestImages:(unsigned long long)arg3;
+ (struct CGRect)ThumbnailFrameWithConstrainingSize:(struct CGSize)arg1 NumberOfGuestImages:(unsigned long long)arg2;
+ (struct CGRect)LTRSafeFrameWithConstrainingSize:(struct CGSize)arg1 NumberOfGuestImages:(unsigned long long)arg2;
+ (struct CGRect)LTRThumbnailFrameWithConstrainingSize:(struct CGSize)arg1 NumberOfGuestImages:(unsigned long long)arg2;
+ (struct CGSize)MultipleGuestViewsSizeWithConstrainingSize:(struct CGSize)arg1;
+ (struct CGSize)OneGuestViewSize;
+ (double)GuestViewsOuterPadding;

@end

