//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TTMFoundMediaFetchOptions : NSObject
{
    _Bool _forceUpdateResultCache;
    _Bool _networkAccessAllowed;
    _Bool _shouldSkipMemoryCaches;
    NSString *_provider;
    NSString *_cursor;
    long long _imageFormat;
    unsigned long long _maximumFramerateOverride;
    CDUnknownBlockType _progressHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(nonatomic) unsigned long long maximumFramerateOverride; // @synthesize maximumFramerateOverride=_maximumFramerateOverride;
@property(nonatomic) _Bool shouldSkipMemoryCaches; // @synthesize shouldSkipMemoryCaches=_shouldSkipMemoryCaches;
@property(nonatomic, getter=isNetworkAccessAllowed) _Bool networkAccessAllowed; // @synthesize networkAccessAllowed=_networkAccessAllowed;
@property(nonatomic) _Bool forceUpdateResultCache; // @synthesize forceUpdateResultCache=_forceUpdateResultCache;
@property(nonatomic) long long imageFormat; // @synthesize imageFormat=_imageFormat;
@property(copy, nonatomic) NSString *cursor; // @synthesize cursor=_cursor;
@property(copy, nonatomic) NSString *provider; // @synthesize provider=_provider;
- (id)init;

@end

