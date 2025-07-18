//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TLPSubscription, TTACoreStatusLiveEngagementManager;
@protocol TNLLRUEntry, TTACoreStatusViewModel;

@interface TFNLivePipelineTweetEntry : NSObject
{
    id <TNLLRUEntry> _nextLRUEntry;
    id <TNLLRUEntry> _previousLRUEntry;
    TTACoreStatusLiveEngagementManager *_tweetManager;
    id <TTACoreStatusViewModel> _status;
    TLPSubscription *_subscription;
}

+ (id)identifierForStatus:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) TLPSubscription *subscription; // @synthesize subscription=_subscription;
@property(retain, nonatomic) id <TTACoreStatusViewModel> status; // @synthesize status=_status;
@property(nonatomic) __weak TTACoreStatusLiveEngagementManager *tweetManager; // @synthesize tweetManager=_tweetManager;
@property(nonatomic) __weak id <TNLLRUEntry> previousLRUEntry; // @synthesize previousLRUEntry=_previousLRUEntry;
@property(retain, nonatomic) id <TNLLRUEntry> nextLRUEntry; // @synthesize nextLRUEntry=_nextLRUEntry;
- (void)subscription:(id)arg1 didReceiveEvent:(id)arg2;
- (_Bool)shouldAccessMoveLRUEntryToHead;
- (id)LRUEntryIdentifier;
- (id)initWithStatus:(id)arg1 tweetManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

