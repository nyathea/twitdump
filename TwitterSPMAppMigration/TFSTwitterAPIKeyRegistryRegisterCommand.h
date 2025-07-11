//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFSTwitterAPICommand.h>

@class NSNumber, NSString, TNUServiceHTTPConfiguration;

@interface TFSTwitterAPIKeyRegistryRegisterCommand : TFSTwitterAPICommand
{
    NSNumber *_registrationID;
    NSString *_identityKey;
    TNUServiceHTTPConfiguration *_HTTPRequestConfiguration;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TNUServiceHTTPConfiguration *HTTPRequestConfiguration; // @synthesize HTTPRequestConfiguration=_HTTPRequestConfiguration;
@property(readonly, copy, nonatomic) NSString *identityKey; // @synthesize identityKey=_identityKey;
@property(readonly, nonatomic) NSNumber *registrationID; // @synthesize registrationID=_registrationID;
- (id)requestConfigurationForAPIRequest:(id)arg1 requestConfiguration:(id)arg2;
- (id)request;
- (id)initWithAccountID:(id)arg1 registrationID:(id)arg2 publicKey:(id)arg3 canRetrySilently:(_Bool)arg4 context:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;

@end

