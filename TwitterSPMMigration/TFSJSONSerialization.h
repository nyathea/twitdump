//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TFSJSONSerialization : NSObject
{
}

+ (void)decodeJSONData:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)encodeJSONObject:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)JSONObjectWithData:(id)arg1 permitMainThread:(_Bool)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
+ (id)JSONObjectWithData:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
+ (id)dataWithJSONObject:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;

@end

