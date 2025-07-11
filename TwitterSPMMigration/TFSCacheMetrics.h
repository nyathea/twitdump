//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TFSCacheMetrics : NSObject
{
    unsigned long long _currentCount;
    unsigned long long _countLimit;
    unsigned long long _currentCost;
    unsigned long long _costLimit;
}

@property(readonly, nonatomic) unsigned long long costLimit; // @synthesize costLimit=_costLimit;
@property(readonly, nonatomic) unsigned long long currentCost; // @synthesize currentCost=_currentCost;
@property(readonly, nonatomic) unsigned long long countLimit; // @synthesize countLimit=_countLimit;
@property(readonly, nonatomic) unsigned long long currentCount; // @synthesize currentCount=_currentCount;
- (id)dictionaryRepresentation;
- (id)init;
- (id)initWithCurrentCount:(unsigned long long)arg1 countLimit:(unsigned long long)arg2 currentCost:(unsigned long long)arg3 costLimit:(unsigned long long)arg4;

@end

