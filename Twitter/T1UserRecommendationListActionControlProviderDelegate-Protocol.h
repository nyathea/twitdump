//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class T1UserRecommendationListActionControlProvider, TFSTwitterScribeContext, TFSTwitterUserReference;
@protocol T1UserViewActionControl;

@protocol T1UserRecommendationListActionControlProviderDelegate
- (_Bool)actionControlProvider:(T1UserRecommendationListActionControlProvider *)arg1 shouldSelectUserReference:(TFSTwitterUserReference *)arg2;
- (void)actionControlProvider:(T1UserRecommendationListActionControlProvider *)arg1 didDeselectUserReference:(TFSTwitterUserReference *)arg2 actionControl:(id <T1UserViewActionControl>)arg3 scribeContext:(TFSTwitterScribeContext *)arg4;
- (void)actionControlProvider:(T1UserRecommendationListActionControlProvider *)arg1 didSelectUserReference:(TFSTwitterUserReference *)arg2 actionControl:(id <T1UserViewActionControl>)arg3 scribeContext:(TFSTwitterScribeContext *)arg4;
@end

