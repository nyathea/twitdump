//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/T1DeleteContactsOperationDelegate-Protocol.h>
#import <T1Twitter/T1UploadContactsOperationDelegate-Protocol.h>

@class NSOperation;

@protocol T1SynchronizeContactsOperationDelegate <T1DeleteContactsOperationDelegate, T1UploadContactsOperationDelegate>
- (void)synchronizeContactsOperationDidFinish:(NSOperation *)arg1;
@end

