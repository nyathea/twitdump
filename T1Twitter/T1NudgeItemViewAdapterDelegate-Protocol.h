//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSIndexPath, T1NudgeItem, T1NudgeItemViewAdapter;

@protocol T1NudgeItemViewAdapterDelegate <NSObject>
- (void)nudgeItemAdapter:(T1NudgeItemViewAdapter *)arg1 shouldUpdateItem:(T1NudgeItem *)arg2 toStyle:(unsigned long long)arg3 atIndexPath:(NSIndexPath *)arg4 fromContextAction:(_Bool)arg5;
@end

