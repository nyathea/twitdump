//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSArray, NSError, T1CameraEventHashtagsFetcher;

@protocol T1CameraEventHashtagsFetcherDelegate <NSObject>

@optional
- (void)cameraEventHashtagsFetcher:(T1CameraEventHashtagsFetcher *)arg1 didFetchCurrentEventHashtags:(NSArray *)arg2 error:(NSError *)arg3;
@end

