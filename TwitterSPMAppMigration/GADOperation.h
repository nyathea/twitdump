//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSString;
@protocol OS_dispatch_group;

@interface GADOperation : NSObject
{
    CDUnknownBlockType _operationBlock;
    struct atomic_flag _hasStarted;
    NSObject<OS_dispatch_group> *_completionGroup;
    id _result;
    NSError *_error;
    NSString *_operationName;
    double _timeout;
    CDUnknownBlockType _completionBlock;
}

- (void).cxx_destruct;
- (void)start;
- (void)dealloc;
- (id)initWithOperationName:(id)arg1 timeout:(double)arg2 operationBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;

@end

