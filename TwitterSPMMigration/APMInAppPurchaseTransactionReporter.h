//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface APMInAppPurchaseTransactionReporter : NSObject
{
    NSArray *_allPurchaseItems;
}

+ (id)transactionFingerprint:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)paymentQueue:(id)arg1 updatedFilteredTransactions:(id)arg2;
- (void)parsePurchasedItemsFromReceipt;
- (void)reportTransactionWithProduct:(id)arg1 paymentQuantity:(long long)arg2 transactionIdentifier:(id)arg3 originalTransactionIdentifier:(id)arg4 transactionDate:(id)arg5;
- (void)reportTransactionWithProductID:(id)arg1 paymentQuantity:(long long)arg2 transactionIdentifier:(id)arg3 originalTransactionIdentifier:(id)arg4 transactionDate:(id)arg5 deviceVerification:(id)arg6 deviceVerificationUUID:(id)arg7 deviceVerificationNonce:(id)arg8;
- (void)reportTransactionsFromArray:(id)arg1;

@end

