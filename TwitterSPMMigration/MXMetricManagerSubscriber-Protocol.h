//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/NSObject-Protocol.h>

@class NSArray;

@protocol MXMetricManagerSubscriber <NSObject>

@optional
- (void)didReceiveDiagnosticPayloads:(NSArray *)arg1;
- (void)didReceiveMetricPayloads:(NSArray *)arg1;
@end

