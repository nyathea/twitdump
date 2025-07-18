//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFSConcurrentOperation.h>

@class NSArray;
@protocol TFNDirectMessageBulkDecryptOperationDelegate, TFNDirectMessageCryptographyService;

@interface TFNDirectMessageBulkDecryptOperation : TFSConcurrentOperation
{
    NSArray *_entries;
    id <TFNDirectMessageCryptographyService> _cryptographyService;
    id <TFNDirectMessageBulkDecryptOperationDelegate> _delegate;
}

- (void).cxx_destruct;
@property __weak id <TFNDirectMessageBulkDecryptOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <TFNDirectMessageCryptographyService> cryptographyService; // @synthesize cryptographyService=_cryptographyService;
@property(copy) NSArray *entries; // @synthesize entries=_entries;
- (void)run;
- (id)initWithCryptographyService:(id)arg1;

@end

