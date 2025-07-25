//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FIRInstallationsAPIService, FIRInstallationsIIDStore, FIRInstallationsIIDTokenStore, FIRInstallationsSingleOperationPromiseCache, FIRInstallationsStore, NSString;
@protocol FIRInstallationsBackoffControllerProtocol;

@interface FIRInstallationsIDController : NSObject
{
    NSString *_appID;
    NSString *_appName;
    FIRInstallationsStore *_installationsStore;
    FIRInstallationsIIDStore *_IIDStore;
    FIRInstallationsIIDTokenStore *_IIDTokenStore;
    FIRInstallationsAPIService *_APIService;
    id <FIRInstallationsBackoffControllerProtocol> _backoffController;
    FIRInstallationsSingleOperationPromiseCache *_getInstallationPromiseCache;
    FIRInstallationsSingleOperationPromiseCache *_authTokenPromiseCache;
    FIRInstallationsSingleOperationPromiseCache *_authTokenForcingRefreshPromiseCache;
    FIRInstallationsSingleOperationPromiseCache *_deleteInstallationPromiseCache;
}

+ (id)keychainServiceWithAppID:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) FIRInstallationsSingleOperationPromiseCache *deleteInstallationPromiseCache; // @synthesize deleteInstallationPromiseCache=_deleteInstallationPromiseCache;
@property(readonly, nonatomic) FIRInstallationsSingleOperationPromiseCache *authTokenForcingRefreshPromiseCache; // @synthesize authTokenForcingRefreshPromiseCache=_authTokenForcingRefreshPromiseCache;
@property(readonly, nonatomic) FIRInstallationsSingleOperationPromiseCache *authTokenPromiseCache; // @synthesize authTokenPromiseCache=_authTokenPromiseCache;
@property(readonly, nonatomic) FIRInstallationsSingleOperationPromiseCache *getInstallationPromiseCache; // @synthesize getInstallationPromiseCache=_getInstallationPromiseCache;
@property(readonly, nonatomic) id <FIRInstallationsBackoffControllerProtocol> backoffController; // @synthesize backoffController=_backoffController;
@property(readonly, nonatomic) FIRInstallationsAPIService *APIService; // @synthesize APIService=_APIService;
@property(readonly, nonatomic) FIRInstallationsIIDTokenStore *IIDTokenStore; // @synthesize IIDTokenStore=_IIDTokenStore;
@property(readonly, nonatomic) FIRInstallationsIIDStore *IIDStore; // @synthesize IIDStore=_IIDStore;
@property(readonly, nonatomic) FIRInstallationsStore *installationsStore; // @synthesize installationsStore=_installationsStore;
@property(readonly, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(readonly, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (_Bool)isDefaultApp;
- (void)postFIDDidChangeNotification;
- (void)updateBackoffWithSuccess:(_Bool)arg1 APIError:(id)arg2;
- (id)mostRecentInstallationOperation;
- (id)deleteExistingIIDIfNeeded;
- (id)sendDeleteInstallationRequestIfNeeded:(id)arg1;
- (id)deleteInstallationLocally:(id)arg1;
- (id)createDeleteInstallationPromise;
- (id)deleteInstallation;
- (id)regenerateFIDOnRefreshTokenErrorIfNeeded:(id)arg1;
- (id)refreshAuthTokenForInstallation:(id)arg1;
- (id)installationWithValidAuthTokenForcingRefresh:(_Bool)arg1;
- (id)getAuthTokenForcingRefresh:(_Bool)arg1;
- (_Bool)doesRegistrationErrorRequireConfigChange:(id)arg1;
- (id)registerInstallationIfNeeded:(id)arg1;
- (id)createInstallationWithFID:(id)arg1 IIDDefaultToken:(id)arg2;
- (id)migrateOrGenerateInstallation;
- (id)saveInstallation:(id)arg1;
- (id)createAndSaveFID;
- (id)getStoredInstallation;
- (id)createGetInstallationItemPromise;
- (id)getInstallationItem;
- (id)initWithGoogleAppID:(id)arg1 appName:(id)arg2 installationsStore:(id)arg3 APIService:(id)arg4 IIDStore:(id)arg5 IIDTokenStore:(id)arg6 backoffController:(id)arg7;
- (id)initWithApp:(id)arg1;

@end

