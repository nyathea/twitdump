//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TFNLayoutMetrics;

@interface T1UserViewBioAttributedTextModelCacheKey : NSObject
{
    NSString *_bioString;
    TFNLayoutMetrics *_layoutMetrics;
    unsigned long long _bioMaxLines;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long bioMaxLines; // @synthesize bioMaxLines=_bioMaxLines;
@property(copy, nonatomic) TFNLayoutMetrics *layoutMetrics; // @synthesize layoutMetrics=_layoutMetrics;
@property(copy, nonatomic) NSString *bioString; // @synthesize bioString=_bioString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithBioString:(id)arg1 layoutMetrics:(id)arg2 bioMaxLines:(unsigned long long)arg3;

@end

