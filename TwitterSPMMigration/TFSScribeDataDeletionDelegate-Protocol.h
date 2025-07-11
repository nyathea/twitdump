//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/NSObject-Protocol.h>

@class NSArray, NSError;

@protocol TFSScribeDataDeletionDelegate <NSObject>
- (void)reportRetryForError:(NSError *)arg1;
- (void)maxRetryReachedForRanges:(NSArray *)arg1;
- (void)shelfLifeExpiredForRanges:(NSArray *)arg1;
- (_Bool)shouldReportDataDeletion;
@end

