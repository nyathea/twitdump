//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface T1BookmarksGraphQLActionsManager : NSObject
{
    MISSING_TYPE *actionService;
}

- (void).cxx_destruct;
- (id)init;
- (void)bookmarkAllDeleteWithCompletion:(CDUnknownBlockType)arg1;
- (void)bookmarkDeleteTweetWithStatusID:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)bookmarkPutTweetWithStatusID:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithActionService:(id)arg1;

@end

