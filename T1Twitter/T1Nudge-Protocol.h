//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/NSObject-Protocol.h>

@class UIViewController;

@protocol T1Nudge <NSObject>
@property(readonly, nonatomic) unsigned long long nudgeType;
- (void)dismissNudgeAnimated:(_Bool)arg1 completion:(void (^)(_Bool))arg2;
- (void)presentNudgeFromViewController:(UIViewController *)arg1 animated:(_Bool)arg2;
@end

