//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface PTVHTTPMultiPartRequestFile : NSObject
{
    NSString *_key;
    NSString *_filename;
    NSString *_contentType;
    NSData *_data;
}

+ (id)MultipartRequestFileWith:(id)arg1 Filename:(id)arg2 ContentType:(id)arg3 Data:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;

@end

