//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSError, NSOperation;

@protocol T1DeleteContactsOperationDelegate
- (void)deleteContactsOperation:(NSOperation *)arg1 didFailToDeleteContacts:(NSArray *)arg2 withError:(NSError *)arg3;
- (void)deleteContactsOperation:(NSOperation *)arg1 didDeleteContacts:(NSArray *)arg2;
@end

