//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TFSProgressingData : NSObject
{
    double _progress;
    unsigned long long _weight;
}

@property(readonly, nonatomic) unsigned long long weight; // @synthesize weight=_weight;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (id)initWithWeight:(unsigned long long)arg1;
- (id)init;

@end

