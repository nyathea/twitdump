//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GADBinaryHeap, NSString;

@interface GADContent : NSObject
{
    long long _contentAgeWeight;
    long long _contentLengthWeight;
    long long _contentTotalLength;
    GADBinaryHeap *_heap;
    long long _maximumShingleCount;
    unsigned long long _minimumParagraphLength;
    unsigned long long _shingleLength;
    NSString *_fingerprint;
    long long _score;
    long long _sequenceNumber;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(readonly, nonatomic) long long score; // @synthesize score=_score;
@property(readonly, nonatomic) NSString *fingerprint; // @synthesize fingerprint=_fingerprint;
- (id)shingleHash;
- (void)updateHeapWithHash:(unsigned int)arg1 shingle:(id)arg2;
- (void)applyRollingHashToTokens:(id)arg1 baseHash:(unsigned int)arg2;
- (void)selectShinglesFromTokens:(id)arg1;
- (void)updateContentWithText:(id)arg1;
- (void)deductServedPenalty;
- (id)initWithSequenceNumber:(long long)arg1;

@end

