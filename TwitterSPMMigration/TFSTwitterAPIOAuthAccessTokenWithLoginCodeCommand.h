//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface TFSTwitterAPIOAuthAccessTokenWithLoginCodeCommand
{
    NSString *_loginCode;
    NSString *_userID;
    NSString *_requestID;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(readonly, copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(readonly, copy, nonatomic) NSString *loginCode; // @synthesize loginCode=_loginCode;
- (id)request;
- (id)initWithContext:(id)arg1 accountID:(id)arg2 loginCode:(id)arg3 userID:(id)arg4 requestID:(id)arg5 source:(unsigned long long)arg6 responseModelBuilder:(id)arg7 completionBlock:(CDUnknownBlockType)arg8;

@end

