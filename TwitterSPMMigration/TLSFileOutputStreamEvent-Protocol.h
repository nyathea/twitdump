//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/NSObject-Protocol.h>

@class NSDictionary, NSError;

@protocol TLSFileOutputStreamEvent <NSObject>
- (void)tls_fileOutputEventFailed:(long long)arg1 info:(NSDictionary *)arg2 error:(NSError *)arg3;
- (void)tls_fileOutputEventFinished:(long long)arg1 info:(NSDictionary *)arg2;
- (void)tls_fileOutputEventBegan:(long long)arg1 info:(NSDictionary *)arg2;
@end

