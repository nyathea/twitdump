//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1PhotoGalleryViewCell;

@protocol T1PhotoGalleryViewCellDelegate <NSObject>

@optional
- (void)photoGalleryViewCellDidLongPress:(T1PhotoGalleryViewCell *)arg1;
- (void)photoGalleryViewCellDidEndTrackingLongPressGesture:(T1PhotoGalleryViewCell *)arg1;
- (_Bool)photoGalleryViewCellShouldBeginTrackingLongPressGesture:(T1PhotoGalleryViewCell *)arg1;
@end

