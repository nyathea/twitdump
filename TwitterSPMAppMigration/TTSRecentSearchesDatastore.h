//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, TFSTuple;
@protocol OS_dispatch_queue;

@interface TTSRecentSearchesDatastore : NSObject
{
    NSObject<OS_dispatch_queue> *_dataAccessQueue;
    NSArray *_recentSearches;
}

- (void).cxx_destruct;
- (void)clearRecentSearches;
- (void)removeRecentSearch:(id)arg1;
- (void)storeRecentSearchUserID:(long long)arg1;
- (void)storeRecentSearchQuery:(id)arg1;
- (void)_tse_setRecentSearch:(id)arg1;
- (void)setRecentSearches:(id)arg1;
@property(readonly, nonatomic) TFSTuple *recentQueriesAndUserIDs;
@property(readonly, copy, nonatomic) NSArray *recentSearches; // @synthesize recentSearches=_recentSearches;
- (id)initWithRecentSeaches:(id)arg1;
- (id)init;

@end

