//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString, NSURLRequest;
@protocol PTVModelSessionTaskClient;

@interface PTVModelSessionTaskContextInternal : NSObject
{
    id <PTVModelSessionTaskClient> _ptv_client;
    NSData *_ptv_uploadData;
    NSURLRequest *_ptv_request;
    CDUnknownBlockType _startBlock;
    CDUnknownBlockType _stopBlock;
    CDUnknownBlockType _completionBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) CDUnknownBlockType stopBlock; // @synthesize stopBlock=_stopBlock;
@property(copy, nonatomic) CDUnknownBlockType startBlock; // @synthesize startBlock=_startBlock;
@property(readonly, nonatomic) NSURLRequest *ptv_request; // @synthesize ptv_request=_ptv_request;
@property(readonly, nonatomic) NSData *ptv_uploadData; // @synthesize ptv_uploadData=_ptv_uploadData;
@property(readonly, nonatomic) id <PTVModelSessionTaskClient> ptv_client; // @synthesize ptv_client=_ptv_client;
- (id)initWithRequest:(id)arg1 uploadData:(id)arg2 client:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

