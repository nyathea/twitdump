//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TFSTwitterAPIAccountTeamsContributeeDestroyCommand
{
    long long _contributeeUserId;
}

@property(nonatomic) long long contributeeUserId; // @synthesize contributeeUserId=_contributeeUserId;
- (id)request;
- (id)initWithAccountID:(id)arg1 contributeeUserId:(long long)arg2 context:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)initWithAccountID:(id)arg1 context:(id)arg2 authContext:(id)arg3 networkTransactionMetrics:(id)arg4 source:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;

@end

