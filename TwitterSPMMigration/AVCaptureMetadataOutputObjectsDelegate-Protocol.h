//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/NSObject-Protocol.h>

@class AVCaptureConnection, AVCaptureMetadataOutput, NSArray;

@protocol AVCaptureMetadataOutputObjectsDelegate <NSObject>

@optional
- (void)captureOutput:(AVCaptureMetadataOutput *)arg1 didOutputMetadataObjects:(NSArray *)arg2 fromConnection:(AVCaptureConnection *)arg3;
@end

