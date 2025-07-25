//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class APMPPropertyMap, NSMutableArray;

@interface APMPArrayValue
{
    APMPPropertyMap *_propertyMap;
    NSMutableArray *_elements;
    _Bool _mark;
}

+ (id)emptyValue;
- (void).cxx_destruct;
- (void)sweep;
- (void)mark;
- (_Bool)isEqualToRuntimeValue:(id)arg1;
- (long long)lastIndexOfValue:(id)arg1 fromIndex:(long long)arg2 error:(id *)arg3;
- (long long)indexOfValue:(id)arg1 fromIndex:(long long)arg2 error:(id *)arg3;
- (long long)prependElements:(id)arg1;
- (long long)appendElements:(id)arg1;
- (id)removeLastElement;
- (id)removeFirstElement;
- (void)reverse;
- (void)concat:(id)arg1 error:(id *)arg2;
- (id)spliceFrom:(long long)arg1 deleteCount:(long long)arg2 addValues:(id)arg3;
- (void)sortUsingFunctionValue:(id)arg1 scope:(id)arg2 error:(id *)arg3;
- (id)subarrayWithRange:(struct _NSRange)arg1;
- (id)applyWithName:(id)arg1 arguments:(id)arg2 scope:(id)arg3 error:(id *)arg4;
- (id)allElements;
- (_Bool)hasProperty:(id)arg1 error:(id *)arg2;
- (id)allPropertyNames;
- (long long)count;
- (void)removeValueForProperty:(id)arg1 error:(id *)arg2;
- (id)valueForProperty:(id)arg1 error:(id *)arg2;
- (void)setValue:(id)arg1 forProperty:(id)arg2 error:(id *)arg3;
- (void)setLength:(unsigned long long)arg1;
- (_Bool)booleanValueOrError:(id *)arg1;
- (double)doubleValueOrError:(id *)arg1;
- (id)stringValueOrError:(id *)arg1;
- (id)stringValueWithSeparator:(id)arg1 error:(id *)arg2;
- (id)initWithArray:(id)arg1;
- (id)init;

@end

