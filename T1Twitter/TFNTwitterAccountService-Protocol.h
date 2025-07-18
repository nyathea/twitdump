//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSArray, NSString, TFNTwitterAccount;
@protocol TFNTwitterAccountServiceObserver, TFNTwitterAccountServiceObserverToken;

@protocol TFNTwitterAccountService <NSObject>
- (id <TFNTwitterAccountServiceObserverToken>)addObserver:(id <TFNTwitterAccountServiceObserver>)arg1;
- (void)reorderAccounts:(NSArray *)arg1;
- (void)removeAllAccounts;
- (void)removeAccount:(TFNTwitterAccount *)arg1;
- (void)addAccount:(TFNTwitterAccount *)arg1;
- (void)saveAccounts;
- (void)reloadFromStore;
- (TFNTwitterAccount *)accountForAccountID:(NSString *)arg1;
@property(nonatomic, readonly) NSArray *accounts;
@end

