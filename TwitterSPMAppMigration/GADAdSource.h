//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol GADAdSourceDelegate;

@interface GADAdSource : NSObject
{
    id <GADAdSourceDelegate> _delegate;
    _Atomic _Bool _invalidated;
}

- (void).cxx_destruct;
- (void)asyncLoadAdWithServerRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)asyncLoadWithSignalsServerRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)asyncLoadWithAdReferencesServerRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadServerRequest:(id)arg1 fromServerTransactionSources:(id)arg2 index:(unsigned long long)arg3 errors:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)loadServerTransaction:(id)arg1 errors:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)createServerRequestOnMainQueueWithTargeting:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadAdsWithTargeting:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)callCompletionHandlerWithInvalidatedError:(CDUnknownBlockType)arg1;
- (void)renderServerTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (_Bool)invalidated;
- (void)invalidateAndCancel;

@end

