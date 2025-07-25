//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/NSObject-Protocol.h>

@class NSString;
@protocol LHLSNetworkSessionListener, LHLSNetworkToken;

@protocol LHLSNetworkSession <NSObject>
@property __weak id <LHLSNetworkSessionListener> listener;
- (void)shutdown;
- (void)cancel:(id <LHLSNetworkToken>)arg1;
- (void)fetchURL:(NSString *)arg1 token:(id <LHLSNetworkToken>)arg2;
@end

