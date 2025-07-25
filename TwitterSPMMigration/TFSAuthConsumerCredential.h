//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TFSAuthConsumerCredential : NSObject
{
    NSString *_oAuthConsumerKey;
    NSString *_oAuthConsumerSecret;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *oAuthConsumerSecret; // @synthesize oAuthConsumerSecret=_oAuthConsumerSecret;
@property(readonly, copy, nonatomic) NSString *oAuthConsumerKey; // @synthesize oAuthConsumerKey=_oAuthConsumerKey;
- (_Bool)hasTokens;
- (_Bool)isEqual:(id)arg1;
- (id)initWithOAuthConsumerKey:(id)arg1 oAuthConsumerSecret:(id)arg2;

@end

