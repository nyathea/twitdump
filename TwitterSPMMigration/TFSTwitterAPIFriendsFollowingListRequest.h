//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TFSTwitterAPIFriendsFollowingListRequest
{
}

+ (unsigned long long)responseHydrationFlags;
+ (unsigned long long)supportedAuthenticationTypes;
+ (id)endpointPath;
- (id)initWithUserID:(id)arg1 screenName:(id)arg2 cursor:(id)arg3 withTotalCount:(_Bool)arg4 context:(id)arg5 responseModelBuilder:(id)arg6;
- (id)initWithUserID:(id)arg1 cursor:(id)arg2 withTotalCount:(_Bool)arg3 context:(id)arg4 responseModelBuilder:(id)arg5;
- (id)initWithScreenName:(id)arg1 cursor:(id)arg2 withTotalCount:(_Bool)arg3 context:(id)arg4 responseModelBuilder:(id)arg5;
- (id)initWithScreenName:(id)arg1 cursor:(id)arg2 skipStatus:(_Bool)arg3 additionalParameters:(id)arg4 context:(id)arg5 responseModelBuilder:(id)arg6;
- (id)initWithUserID:(id)arg1 cursor:(id)arg2 skipStatus:(_Bool)arg3 additionalParameters:(id)arg4 context:(id)arg5 responseModelBuilder:(id)arg6;

@end

