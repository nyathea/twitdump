//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PTVTwitterGuestAuthenticationModel : NSObject
{
    NSString *_accessToken;
    NSString *_guestToken;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *guestToken; // @synthesize guestToken=_guestToken;
@property(readonly, copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
- (id)initWithAccessToken:(id)arg1 guestToken:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

