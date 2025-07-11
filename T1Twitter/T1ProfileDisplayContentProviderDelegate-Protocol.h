//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1ProfileContentMainEntry, T1ProfileDisplayContentProvider, TFNViewController;

@protocol T1ProfileDisplayContentProviderDelegate <NSObject>
- (void)displayContentProviderDidLoadInitialTimeline:(T1ProfileDisplayContentProvider *)arg1;
- (void)displayContentProviderWillLoadInitialTimeline:(T1ProfileDisplayContentProvider *)arg1;
- (TFNViewController *)viewControllerForDisplayContentProvider:(T1ProfileDisplayContentProvider *)arg1;
- (_Bool)isUserDataDisplayableForDisplayContentProvider:(T1ProfileDisplayContentProvider *)arg1;
- (_Bool)isDisplayContentProviderCurrent:(T1ProfileDisplayContentProvider *)arg1;
- (void)displayContentProviderDidUpdateModalContentHeight:(T1ProfileDisplayContentProvider *)arg1;
- (void)displayContentProviderDidUpdateSubheaderValidity:(T1ProfileDisplayContentProvider *)arg1;
- (void)displayContentProviderDidUpdateMainValidity:(T1ProfileDisplayContentProvider *)arg1;
- (void)displayContentProvider:(T1ProfileDisplayContentProvider *)arg1 didSelectMainEntry:(T1ProfileContentMainEntry *)arg2;
@end

