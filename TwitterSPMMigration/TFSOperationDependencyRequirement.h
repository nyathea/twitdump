//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TFSOperationDependencyRequirement : NSObject
{
}

+ (id)requirementWithBlock:(CDUnknownBlockType)arg1;
+ (id)failedResultRequirement;
+ (id)completedResultRequirement;
+ (id)notCancelledRequirement;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)shouldRunDependentOperation:(id)arg1 withDependency:(id)arg2;

@end

