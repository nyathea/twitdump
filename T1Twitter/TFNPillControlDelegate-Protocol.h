//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/NSObject-Protocol.h>

@class TFNPillControl;

@protocol TFNPillControlDelegate <NSObject>

@optional
- (void)pillControl:(TFNPillControl *)arg1 animatedOffscreen:(_Bool)arg2 pillTapped:(_Bool)arg3 scrolled:(_Bool)arg4;
- (void)pillControlTapped:(TFNPillControl *)arg1;
@end

