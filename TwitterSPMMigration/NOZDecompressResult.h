//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSError, NSString;

@interface NOZDecompressResult : NSObject
{
    _Bool _didSucceed;
    NSString *_destinationDirectoryPath;
    NSArray *_destinationFiles;
    NSError *_operationError;
    double _duration;
    long long _uncompressedSize;
    long long _compressedSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long compressedSize;
@property(readonly, nonatomic) long long uncompressedSize;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) _Bool didSucceed;
@property(readonly, nonatomic) NSError *operationError;
@property(readonly, copy, nonatomic) NSArray *destinationFiles;
@property(readonly, copy, nonatomic) NSString *destinationDirectoryPath;
- (id)description;
- (float)compressionRatio;

@end

