//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface TFSTwitterAPICapiCommandData : NSObject
{
    NSString *_capiPath;
    NSDictionary *_parameters;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(copy, nonatomic) NSString *capiPath; // @synthesize capiPath=_capiPath;
- (id)initWithCapiURLString:(id)arg1 parameters:(id)arg2;

@end

