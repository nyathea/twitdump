//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSHTTPURLResponse;

@interface GULURLSessionDataResponse : NSObject
{
    NSHTTPURLResponse *_HTTPResponse;
    NSData *_HTTPBody;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *HTTPBody; // @synthesize HTTPBody=_HTTPBody;
@property(readonly, nonatomic) NSHTTPURLResponse *HTTPResponse; // @synthesize HTTPResponse=_HTTPResponse;
- (id)initWithResponse:(id)arg1 HTTPBody:(id)arg2;

@end

