//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TFNTwitter, TFNTwitterAccount;
@protocol TFSTwitterRecurringTask;

@protocol TFNTwitterRecurringTaskProvider
- (id <TFSTwitterRecurringTask>)recurringTaskForActiveAccount:(TFNTwitterAccount *)arg1 context:(id)arg2 twitter:(TFNTwitter *)arg3;
@end

