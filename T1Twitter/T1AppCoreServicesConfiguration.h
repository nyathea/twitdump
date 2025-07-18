//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol TFSKeychainConfiguration, TFSTwitterClientIdentificationProvider;

@interface T1AppCoreServicesConfiguration : NSObject
{
    id <TFSTwitterClientIdentificationProvider> _clientIdentificationProvider;
    id <TFSKeychainConfiguration> _keychainConfiguration;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <TFSKeychainConfiguration> keychainConfiguration; // @synthesize keychainConfiguration=_keychainConfiguration;
@property(readonly, nonatomic) id <TFSTwitterClientIdentificationProvider> clientIdentificationProvider; // @synthesize clientIdentificationProvider=_clientIdentificationProvider;
- (id)initWithClientIdentificationProvider:(id)arg1 keychainConfiguration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

