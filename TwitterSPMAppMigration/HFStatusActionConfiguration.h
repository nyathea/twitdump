//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HFStatusActionConfiguration : NSObject
{
}

+ (long long)disabledEngagementReasonForActions:(unsigned long long)arg1 status:(id)arg2 account:(id)arg3;
+ (id)limitedActionForActionType:(unsigned long long)arg1 limitedActions:(id)arg2;
+ (unsigned long long)restrictedActionsForStatus:(id)arg1 account:(id)arg2;
+ (_Bool)areAnyActionsAvailableForStatus:(id)arg1 actions:(unsigned long long)arg2 account:(id)arg3;
- (id)init;

@end

