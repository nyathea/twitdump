//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@interface TFSTwitterAPIAuthorizationStateUpdateCommand
{
    NSString *_userID;
    NSString *_deviceID;
    NSString *_permissionName;
    NSDictionary *_authorizationState;
}

- (void).cxx_destruct;
- (void)scribeCommandResponse:(id)arg1 to:(id)arg2;
- (id)request;
- (id)initWithContext:(id)arg1 accountID:(id)arg2 source:(unsigned long long)arg3 userID:(id)arg4 deviceID:(id)arg5 permissionName:(id)arg6 authorizationState:(id)arg7 completionBlock:(CDUnknownBlockType)arg8;

@end

