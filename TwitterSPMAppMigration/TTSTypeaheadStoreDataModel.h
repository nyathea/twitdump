//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TTSTypeaheadStoreDataModel : NSObject
{
    NSArray *_recentSearches;
    double _cs2LastUserPrefetchSuccessTime;
    double _cs2userPrefetchBackoffTime;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double cs2userPrefetchBackoffTime; // @synthesize cs2userPrefetchBackoffTime=_cs2userPrefetchBackoffTime;
@property(readonly, nonatomic) double cs2LastUserPrefetchSuccessTime; // @synthesize cs2LastUserPrefetchSuccessTime=_cs2LastUserPrefetchSuccessTime;
@property(readonly, copy, nonatomic) NSArray *recentSearches; // @synthesize recentSearches=_recentSearches;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecentSearches:(id)arg1 cs2LastUserPrefetchSuccessTime:(double)arg2 cs2userPrefetchBackoffTime:(double)arg3;

@end

