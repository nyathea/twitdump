//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface TFSAuthOAuth1RequestAuthorizer : NSObject
{
    NSString *_consumerKey;
    NSString *_consumerSecret;
    NSString *_OAuthToken;
    NSString *_OAuthTokenSecret;
    NSString *_callbackURLString;
    double _clockDelta;
    NSString *_OAuthNonce;
    NSDate *_OAuthTimestamp;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *OAuthTimestamp; // @synthesize OAuthTimestamp=_OAuthTimestamp;
@property(copy, nonatomic) NSString *OAuthNonce; // @synthesize OAuthNonce=_OAuthNonce;
@property(nonatomic) double clockDelta; // @synthesize clockDelta=_clockDelta;
@property(copy, nonatomic) NSString *callbackURLString; // @synthesize callbackURLString=_callbackURLString;
@property(copy, nonatomic) NSString *OAuthTokenSecret; // @synthesize OAuthTokenSecret=_OAuthTokenSecret;
@property(copy, nonatomic) NSString *OAuthToken; // @synthesize OAuthToken=_OAuthToken;
@property(copy, nonatomic) NSString *consumerSecret; // @synthesize consumerSecret=_consumerSecret;
@property(copy, nonatomic) NSString *consumerKey; // @synthesize consumerKey=_consumerKey;
- (id)authorizationForURLRequest:(id)arg1 context:(id)arg2 error:(out id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

