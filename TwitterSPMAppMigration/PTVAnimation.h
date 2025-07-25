//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PTVAnimation : NSObject
{
    CDUnknownBlockType _block;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _curve;
    double _duration;
    double _currentTime;
}

+ (id)animationWithDuration:(double)arg1 curve:(CDUnknownBlockType)arg2 block:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
- (void)advanceToStart;
- (void)advanceTo:(double)arg1;
- (void)advanceBy:(double)arg1;
- (void)complete;
@property(readonly, nonatomic, getter=hasCompleted) _Bool completed;
- (double)valueAtPoint:(double)arg1;
- (double)valueAfterDuration:(double)arg1;
- (double)currentValue;
- (id)initWithDuration:(double)arg1 curve:(CDUnknownBlockType)arg2 block:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;

@end

