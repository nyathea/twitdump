//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TAVFoundationSafeAccess : NSObject
{
}

+ (void)submitReadBlockOrExecuteInCurrentContextIfInactive:(CDUnknownBlockType)arg1;
+ (void)submitReadBlock:(CDUnknownBlockType)arg1;
+ (void)submitWriteBlock:(CDUnknownBlockType)arg1;
+ (id)tav_delayedReadsQueue;
+ (void)setIsActive:(_Bool)arg1;
+ (_Bool)isActive;

@end

