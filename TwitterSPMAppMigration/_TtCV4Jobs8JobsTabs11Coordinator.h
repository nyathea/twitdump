//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtCV4Jobs8JobsTabs11Coordinator : NSObject
{
    MISSING_TYPE *labels;
    MISSING_TYPE *views;
    MISSING_TYPE *didSelectCallbacks;
}

- (void).cxx_destruct;
- (id)init;
- (id)segmentedViewController:(id)arg1 viewControllerAtIndex:(long long)arg2;
- (long long)segmentedViewController:(id)arg1 caretAtIndex:(long long)arg2;
- (id)segmentedViewController:(id)arg1 titleAtIndex:(long long)arg2;
- (long long)numberOfEntriesForSegmentedViewController:(id)arg1;
- (void)segmentedViewController:(id)arg1 didSelectContentViewController:(id)arg2 atIndex:(long long)arg3 lastIndex:(long long)arg4 userGestureType:(long long)arg5;

@end

