//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface TFSTwitterAPIFriendshipsUpdateWantRetweetsCommand
{
    MISSING_TYPE *userID;
    MISSING_TYPE *screenName;
    MISSING_TYPE *wantRetweets;
    MISSING_TYPE *impressionID;
    MISSING_TYPE *earned;
}

- (void).cxx_destruct;
- (id)initWithAccountID:(id)arg1 context:(id)arg2 authContext:(id)arg3 networkTransactionMetrics:(id)arg4 source:(unsigned long long)arg5 responseModelBuilder:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)processResponse:(id)arg1;
- (id)request;
- (id)initWithAccountID:(id)arg1 userID:(id)arg2 screenName:(id)arg3 wantRetweets:(_Bool)arg4 impressionID:(id)arg5 earned:(_Bool)arg6 context:(id)arg7 source:(unsigned long long)arg8 responseModelBuilder:(id)arg9 completionBlock:(CDUnknownBlockType)arg10;

@end

