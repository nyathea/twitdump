//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface GADAdUnitInheritancePattern : NSObject
{
    NSArray *_inclusionPatterns;
    NSArray *_exclusionPatterns;
    NSString *_adUnitID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *adUnitID; // @synthesize adUnitID=_adUnitID;
- (_Bool)isAncestorOfAdUnitID:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

