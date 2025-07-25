//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterAppSPMMigration/NSObject-Protocol.h>

@class TFNTwitterComposition, TFNTwitterCompositionUploadOperation;

@protocol TFNTwitterCompositionUploadOperationDelegate <NSObject>

@optional
- (void)compositionUploadOperationDidResumeBackgroundTask:(TFNTwitterCompositionUploadOperation *)arg1;
- (void)compositionUploadOperationDidSuspendBackgroundTask:(TFNTwitterCompositionUploadOperation *)arg1;
- (void)compositionUploadOperation:(TFNTwitterCompositionUploadOperation *)arg1 didChangeProgress:(double)arg2 composition:(TFNTwitterComposition *)arg3;
- (void)compositionUploadOperation:(TFNTwitterCompositionUploadOperation *)arg1 didUpdateContentInComposition:(TFNTwitterComposition *)arg2;
@end

