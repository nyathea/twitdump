//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIWindow;
@protocol OS_dispatch_queue;

@interface GADSafeAreaInsetsCache : NSObject
{
    NSObject<OS_dispatch_queue> *_lockQueue;
    struct UIEdgeInsets _safeAreaInsets;
    UIWindow *_window;
}

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly) struct UIEdgeInsets safeAreaInsets;
- (void)dealloc;
- (id)initWithWindow:(id)arg1;

@end

