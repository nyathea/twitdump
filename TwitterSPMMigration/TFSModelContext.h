//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface TFSModelContext : NSObject
{
    MISSING_TYPE *contextIdentifier;
    MISSING_TYPE *cache;
    MISSING_TYPE *dependencyGraph;
    MISSING_TYPE *assimilationCacheQueue;
    MISSING_TYPE *configuration;
    MISSING_TYPE *internalCacheConfiguration;
    MISSING_TYPE *errorLogger;
    MISSING_TYPE *modelRegistry;
    MISSING_TYPE *logger;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) NSString *contextIdentifier;
- (void)flushWithCompletion:(CDUnknownBlockType)arg1;

@end

