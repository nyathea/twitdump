//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TFSDatabaseConnection;

@interface TFSModelDiskCacheItemReader : NSObject
{
    _Bool _hasError;
    TFSDatabaseConnection *_connection;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TFSDatabaseConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) _Bool hasError; // @synthesize hasError=_hasError;
- (id)searchValueRowsForItemId:(long long)arg1;
- (id)ownedKeysForItemId:(long long)arg1;
- (id)resultSetForKey:(id)arg1 hasError:(_Bool *)arg2;
- (void)enumerateResultSetsForKeys:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)initWithConnection:(id)arg1;

@end

