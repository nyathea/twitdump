//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface TFSTwitterJotClientEventResponse : NSObject
{
    NSDictionary *_debugInfo;
}

+ (id)debugResponseWithJSONData:(id)arg1 error:(out id *)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *debugInfo; // @synthesize debugInfo=_debugInfo;
- (id)init;
- (id)initWithDebugInfoDictionary:(id)arg1;

@end

