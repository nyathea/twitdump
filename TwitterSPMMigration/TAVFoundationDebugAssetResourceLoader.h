//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableString, NSString, NSURL;
@protocol TAVDownloader;

@interface TAVFoundationDebugAssetResourceLoader : NSObject
{
    NSURL *_originalURL;
    id <TAVDownloader> _downloader;
    NSDictionary *_headerFields;
    _Bool _didLoadMasterPlaylist;
    NSMutableString *_debugLog;
}

+ (id)tav_resourceLoaderQueue;
- (void).cxx_destruct;
- (void)resourceLoader:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForResponseToAuthenticationChallenge:(id)arg2;
- (void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForRenewalOfRequestedResource:(id)arg2;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

- (id)initWithOriginalURL:(id)arg1 downloader:(id)arg2 headerFields:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

