//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol TFSDatabaseLog;

@interface TFSDatabaseConnection : NSObject
{
    _Bool _usesPreparedStatementCache;
    _Bool _supportsIncrementalVacuum;
    id <TFSDatabaseLog> _log;
    struct sqlite3 *_sqliteConnection;
    NSMutableDictionary *_sqlToPreparedStatements;
}

+ (id)newConnection;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *sqlToPreparedStatements; // @synthesize sqlToPreparedStatements=_sqlToPreparedStatements;
@property(readonly, nonatomic) struct sqlite3 *sqliteConnection; // @synthesize sqliteConnection=_sqliteConnection;
@property(retain, nonatomic) id <TFSDatabaseLog> log; // @synthesize log=_log;
@property(nonatomic) _Bool supportsIncrementalVacuum; // @synthesize supportsIncrementalVacuum=_supportsIncrementalVacuum;
@property(nonatomic) _Bool usesPreparedStatementCache; // @synthesize usesPreparedStatementCache=_usesPreparedStatementCache;
- (void)dealloc;
- (void)close;
- (_Bool)column:(id)arg1 existsInTable:(id)arg2;
- (_Bool)isAutocommitEnabled;
- (_Bool)isDone:(int)arg1;
- (_Bool)isOK:(int)arg1;
- (id)numberFromExecutingSQL:(id)arg1 withParameters:(id)arg2;
- (id)numberFromExecutingSQL:(id)arg1;
- (id)stringFromExecutingSQL:(id)arg1 withParameters:(id)arg2;
- (id)stringFromExecutingSQL:(id)arg1;
- (_Bool)executeSQL:(id)arg1 withParameters:(id)arg2 enumerateRowsWithBlock:(CDUnknownBlockType)arg3;
- (_Bool)executeSQL:(id)arg1 withParameters:(id)arg2;
- (_Bool)executeSQL:(id)arg1;
- (_Bool)openInMemory;
- (_Bool)openPath:(id)arg1 withDiskSyncMode:(long long)arg2;
- (void)withLog:(id)arg1 perform:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) long long freePageCount;
@property(readonly, nonatomic) long long pageCount;
@property(readonly, nonatomic) long long totalChangedRowCount;
@property(readonly, nonatomic) long long mostRecentChangedRowCount;

@end

