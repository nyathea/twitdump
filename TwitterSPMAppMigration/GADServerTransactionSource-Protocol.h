//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterAppSPMMigration/NSObject-Protocol.h>

@class GADServerRequest;

@protocol GADServerTransactionSource <NSObject>
- (void)createServerTransactionForServerRequest:(GADServerRequest *)arg1 completionHandler:(void (^)(GADServerTransaction *, NSArray *, NSError *))arg2;
- (id)init;
@end

