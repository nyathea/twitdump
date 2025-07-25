//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/NSObject-Protocol.h>
#import <TwitterSPMMigration/TFSTwitterAPICommandConfiguration-Protocol.h>

@class NSNumber, NSSet;

@protocol TFSTwitterCoreServicesConfiguration <TFSTwitterAPICommandConfiguration, NSObject>
@property(readonly, nonatomic) unsigned long long maxNumberDiscountedURLs;
@property(readonly, nonatomic) NSNumber *coreServices2TNLBackgroundIdleTimeout;
@property(readonly, nonatomic) NSNumber *coreServices2TNLForegroundIdleTimeout;
@property(readonly, copy, nonatomic) NSSet *excludedWebViewDomains;
@property(readonly, copy, nonatomic) NSSet *nonUsernamePaths;
@property(readonly, nonatomic) double typeaheadUserPrefetchRateInSeconds;
@property(readonly, copy, nonatomic) NSSet *excludedEmailDomains;
@property(readonly, nonatomic) long long shortenedURLLengthSecure;
@end

