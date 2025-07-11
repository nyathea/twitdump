//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface GADWebViewConfiguration : NSObject
{
    NSMutableArray *_scriptConfigurations;
    _Bool _collectDynamicContentSize;
    _Bool _scrollEnabled;
    _Bool _resizeScriptEnabled;
    _Bool _loadOnIframeScriptEnabled;
    _Bool _suppressIncrementalRendering;
    _Bool _mediaVisibilityControlsEnabled;
    _Bool _omidJsSessionServiceEnabled;
    unsigned long long _dataDetectorType;
    long long _preferredContentMode;
    unsigned long long _mediaTypesRequiringUserAction;
    NSString *_MRAIDURLString;
    NSString *_customUserAgent;
    long long _inactiveSchedulingPolicy;
    NSString *_contentURL;
    NSString *_omidCreativeType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *scriptConfigurations; // @synthesize scriptConfigurations=_scriptConfigurations;
@property(copy, nonatomic) NSString *omidCreativeType; // @synthesize omidCreativeType=_omidCreativeType;
@property(copy, nonatomic) NSString *contentURL; // @synthesize contentURL=_contentURL;
@property(nonatomic) _Bool omidJsSessionServiceEnabled; // @synthesize omidJsSessionServiceEnabled=_omidJsSessionServiceEnabled;
@property(readonly, nonatomic) _Bool mediaVisibilityControlsEnabled; // @synthesize mediaVisibilityControlsEnabled=_mediaVisibilityControlsEnabled;
@property(readonly, nonatomic) long long inactiveSchedulingPolicy; // @synthesize inactiveSchedulingPolicy=_inactiveSchedulingPolicy;
@property(readonly, nonatomic) _Bool suppressIncrementalRendering; // @synthesize suppressIncrementalRendering=_suppressIncrementalRendering;
@property(readonly, nonatomic) _Bool loadOnIframeScriptEnabled; // @synthesize loadOnIframeScriptEnabled=_loadOnIframeScriptEnabled;
@property(readonly, nonatomic) _Bool resizeScriptEnabled; // @synthesize resizeScriptEnabled=_resizeScriptEnabled;
@property(retain, nonatomic) NSString *customUserAgent; // @synthesize customUserAgent=_customUserAgent;
@property(nonatomic) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(nonatomic) _Bool collectDynamicContentSize; // @synthesize collectDynamicContentSize=_collectDynamicContentSize;
@property(copy, nonatomic) NSString *MRAIDURLString; // @synthesize MRAIDURLString=_MRAIDURLString;
@property(readonly, nonatomic) unsigned long long mediaTypesRequiringUserAction; // @synthesize mediaTypesRequiringUserAction=_mediaTypesRequiringUserAction;
@property(readonly, nonatomic) long long preferredContentMode; // @synthesize preferredContentMode=_preferredContentMode;
@property(readonly, nonatomic) unsigned long long dataDetectorType; // @synthesize dataDetectorType=_dataDetectorType;
- (void)addScriptConfigurations:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithConfiguration:(id)arg1;

@end

