//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSHTTPURLResponse, NSURLSessionTask, NSURLSessionTaskMetrics, TNLTemporaryFile;

@interface TNLBackgroundRequestContext : NSObject
{
    NSURLSessionTask *_URLSessionTask;
    NSHTTPURLResponse *_URLResponse;
    NSError *_error;
    TNLTemporaryFile *_tempFile;
    NSURLSessionTaskMetrics *_taskMetrics;
}

- (void).cxx_destruct;

@end

