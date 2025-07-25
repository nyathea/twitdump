//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/NSObject-Protocol.h>

@class TFNPillControl, UIView;

@protocol TFNPillAnimationProvider <NSObject>
- (void)pillControlScrollViewDidChangeContentOffset:(TFNPillControl *)arg1;
- (void)pillControlIntrinsicContentSizeDidChange:(TFNPillControl *)arg1;
- (void)hidePillControl:(TFNPillControl *)arg1 animated:(_Bool)arg2 pillTapped:(_Bool)arg3 completion:(void (^)(_Bool))arg4;
- (void)presentPillControl:(TFNPillControl *)arg1 fromView:(UIView *)arg2 animated:(_Bool)arg3 withOffset:(double)arg4 autoHideInterval:(double)arg5;
@end

