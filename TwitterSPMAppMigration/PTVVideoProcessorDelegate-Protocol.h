//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterAppSPMMigration/NSObject-Protocol.h>

@class PTVVideoProcessor;

@protocol PTVVideoProcessorDelegate <NSObject>
- (_Bool)shouldSaveHighQuality;
- (void)videoProcessor:(PTVVideoProcessor *)arg1 didRenderBufferHQ:(struct __CVBuffer *)arg2 withPresentationTime:(CDStruct_1b6d18a9)arg3 captureContext:(CDStruct_4508418e)arg4;
- (void)videoProcessor:(PTVVideoProcessor *)arg1 didRenderBuffer:(struct __CVBuffer *)arg2 withPresentationTime:(CDStruct_1b6d18a9)arg3 captureContext:(CDStruct_4508418e)arg4;
@end

