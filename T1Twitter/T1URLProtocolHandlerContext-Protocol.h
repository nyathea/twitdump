//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSDictionary, NSString, T1ExternalURLBehavior;

@protocol T1URLProtocolHandlerContext <NSObject>
@property(readonly, copy, nonatomic) NSDictionary *urtRequestParameters;
@property(readonly, copy, nonatomic) NSString *referrer;
@property(readonly, nonatomic, getter=isExternallyReferred) _Bool externallyReferred;
@property(retain, nonatomic) T1ExternalURLBehavior *externalURLBehavior;
@property(readonly, copy, nonatomic) NSString *sourceAppBundleID;
@end

