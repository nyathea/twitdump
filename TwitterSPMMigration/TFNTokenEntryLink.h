//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TFNTokenEntryLink : NSObject
{
    NSString *_token;
    unsigned long long _entryIndex;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long entryIndex; // @synthesize entryIndex=_entryIndex;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
- (long long)compare:(id)arg1;
- (id)initWithToken:(id)arg1 entryIndex:(unsigned long long)arg2;

@end

