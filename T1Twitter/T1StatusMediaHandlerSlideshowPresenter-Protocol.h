//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1SlideshowViewController, TFNTwitterStatus;
@protocol TFNDataViewCell><TAVAutoplayViewContainer;

@protocol T1StatusMediaHandlerSlideshowPresenter <NSObject>
- (T1SlideshowViewController *)presentSlideshowFromPlayerViewContainerCell:(id <TFNDataViewCell><TAVAutoplayViewContainer>)arg1 status:(TFNTwitterStatus *)arg2 previewing:(_Bool)arg3 completion:(void (^)(T1SlideshowViewController *))arg4;
@end

