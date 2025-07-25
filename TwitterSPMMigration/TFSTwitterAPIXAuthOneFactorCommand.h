//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface TFSTwitterAPIXAuthOneFactorCommand
{
    NSString *_ident;
    NSString *_simCountryCode;
    NSString *_requestId;
    NSString *_factorType;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *factorType; // @synthesize factorType=_factorType;
@property(copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(copy, nonatomic) NSString *simCountryCode; // @synthesize simCountryCode=_simCountryCode;
@property(copy, nonatomic) NSString *ident; // @synthesize ident=_ident;
- (id)request;
- (id)initWithContext:(id)arg1 accountID:(id)arg2 authContext:(id)arg3 identifier:(id)arg4 factorType:(id)arg5 simCountryCode:(id)arg6 loginVerificationRequestID:(id)arg7 source:(unsigned long long)arg8 responseModelBuilder:(id)arg9 completionBlock:(CDUnknownBlockType)arg10;

@end

