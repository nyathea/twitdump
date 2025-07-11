//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface TFSTwitterLiveEventAttribution : NSObject
{
    NSString *_text;
    NSURL *_url;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
- (_Bool)isEqualToAttribution:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithText:(id)arg1 url:(id)arg2;
- (id)init;

@end

