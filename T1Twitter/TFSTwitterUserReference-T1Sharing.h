//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFSTwitterUserReference.h>

@class NSString;

@interface TFSTwitterUserReference (T1Sharing)
@property(nonatomic) _Bool shareTokenInURLEnabled;
- (id)_t1_transformShareURL:(id)arg1;
- (id)_t1_twitterURLForShareWithSParam:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) NSString *twitterURLForCopy;
@property(readonly, copy, nonatomic) NSString *twitterURLForShare;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

