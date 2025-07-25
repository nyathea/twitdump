//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache;

@interface TFNDirectMessageKeyRegistryLocalCache : NSObject
{
    NSCache *_cache;
}

+ (id)sharedCache;
- (void).cxx_destruct;
@property(retain, nonatomic) NSCache *cache; // @synthesize cache=_cache;
- (void)removeBundleForUserID:(long long)arg1;
- (void)setBundle:(id)arg1 forUserID:(long long)arg2;
- (id)bundleForUserID:(long long)arg1;
- (id)init;

@end

