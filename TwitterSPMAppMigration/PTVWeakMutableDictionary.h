//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PTVWeakMutableDictionary : NSObject
{
    NSMutableDictionary *_backing;
}

- (void).cxx_destruct;
- (int)count;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)removeStaleEntries;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (id)init;
- (void)dealloc;

@end

