//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSOperationQueue;

@interface GADSignals : NSObject
{
    NSMutableDictionary *_signalSources;
    NSMutableArray *_mainQueueSignalUpdateBlocks;
    NSOperationQueue *_signalCreationQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)runMainQueueSignalUpdateBlocks;
- (void)updatedSignalsWithSignalSources:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)internalCreateSignalDictionaryWithTargeting:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)createSignalDictionaryWithTargeting:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)dictionaryWithSignals:(id)arg1;
- (id)init;

@end

