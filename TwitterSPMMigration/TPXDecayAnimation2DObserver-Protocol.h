//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TPXAnimationObserver-Protocol.h>

@class TPXDecayAnimator2D;

@protocol TPXDecayAnimation2DObserver <TPXAnimationObserver>

@optional
- (void)tpx_decayAnimationYAxisStabilized:(TPXDecayAnimator2D *)arg1;
- (void)tpx_decayAnimationXAxisStabilized:(TPXDecayAnimator2D *)arg1;
@end

