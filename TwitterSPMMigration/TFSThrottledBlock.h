//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue;

@interface TFSThrottledBlock : NSObject
{
    struct atomic_flag _isScheduledFlag;
    CDUnknownBlockType _block;
    double _cooldown;
    NSOperationQueue *_queue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) double cooldown; // @synthesize cooldown=_cooldown;
@property(readonly, copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void)dependencyDidRun:(id)arg1;
- (id)subthrottleWithCooldown:(double)arg1;
- (void)attemptInvoke;
- (id)initWithCooldown:(double)arg1 block:(CDUnknownBlockType)arg2;

@end

