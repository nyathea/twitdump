//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface GADInitializationStatus : NSObject
{
    NSDictionary *_adapterStatusesByClassName;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *adapterStatusesByClassName; // @synthesize adapterStatusesByClassName=_adapterStatusesByClassName;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)statusWithEntry:(id)arg1 forKey:(id)arg2;
- (id)initWithClassNames:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

