//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TFSTwitterOAuthRequestTokenScopePolicy : NSObject
{
    NSArray *_can;
    NSArray *_cannot;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *cannot; // @synthesize cannot=_cannot;
@property(readonly, copy, nonatomic) NSArray *can; // @synthesize can=_can;
- (id)init;
- (id)initWithDictionary:(id)arg1;

@end

