//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, OCFImageInfo;

@interface OCFImage : NSObject
{
    OCFImageInfo *_imageInfo;
    NSString *_placeholder;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(readonly, nonatomic) OCFImageInfo *imageInfo; // @synthesize imageInfo=_imageInfo;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

@end

