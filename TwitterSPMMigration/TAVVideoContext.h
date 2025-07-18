//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TAVVideoContext : NSObject
{
    _Bool _isAd;
    NSString *_videoType;
}

+ (id)defaultAdContext;
+ (id)defaultContext;
+ (id)contextWithType:(id)arg1 isAd:(_Bool)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isAd; // @synthesize isAd=_isAd;
@property(readonly, copy, nonatomic) NSString *videoType; // @synthesize videoType=_videoType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithVideoType:(id)arg1 isAd:(_Bool)arg2;
- (id)init;

@end

