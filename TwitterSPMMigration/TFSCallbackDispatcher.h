//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface TFSCallbackDispatcher : NSObject
{
    CDStruct_762bc9ff _accessQueue;
    NSMapTable *_observerToBlocksTable;
}

- (void).cxx_destruct;
- (void)fireWithUserInfo:(id)arg1;
- (void)fire;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 selector:(SEL)arg2;
- (void)addObserver:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end

