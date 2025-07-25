//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSString, TFNDataViewController, TUITimelineContentNotification, TUIUpdateIndicator;

@protocol TUIUpdateIndicatorDelegate <NSObject>
- (_Bool)canShowUpdateIndicator:(TUIUpdateIndicator *)arg1 withContentNotification:(TUITimelineContentNotification *)arg2;

@optional
- (void)navigateToEntryID:(NSString *)arg1 forUpdateIndicator:(TUIUpdateIndicator *)arg2;
- (_Bool)dataViewController:(TFNDataViewController *)arg1 canNavigateToEntryID:(NSString *)arg2 forUpdateIndicator:(TUIUpdateIndicator *)arg3;
- (_Bool)dataViewControllerShouldScrollToTop:(TFNDataViewController *)arg1 forUpdateIndicator:(TUIUpdateIndicator *)arg2;
@end

