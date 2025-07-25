//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TFSModelCachePerTypeItemCounts : NSObject
{
    long long _unevictable;
    long long _owned;
    long long _evictable;
}

@property(nonatomic) long long evictable; // @synthesize evictable=_evictable;
@property(nonatomic) long long owned; // @synthesize owned=_owned;
@property(nonatomic) long long unevictable; // @synthesize unevictable=_unevictable;
@property(readonly, nonatomic) long long all;

@end

