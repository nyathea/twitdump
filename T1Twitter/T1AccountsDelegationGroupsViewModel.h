//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, T1AccountListEntry;

@interface T1AccountsDelegationGroupsViewModel : NSObject
{
    _Bool _isDelegateAccountsExpanded;
    _Bool _isOtherPersonalAccountsExpanded;
    T1AccountListEntry *_activeAccount;
    T1AccountListEntry *_activeOwner;
    NSArray *_delegateAccountsList;
    NSMutableSet *_otherPersonalAccountsList;
    NSMutableArray *_accountsEntries;
    NSMutableDictionary *_delegationGroups;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *delegationGroups; // @synthesize delegationGroups=_delegationGroups;
@property(nonatomic) _Bool isOtherPersonalAccountsExpanded; // @synthesize isOtherPersonalAccountsExpanded=_isOtherPersonalAccountsExpanded;
@property(nonatomic) _Bool isDelegateAccountsExpanded; // @synthesize isDelegateAccountsExpanded=_isDelegateAccountsExpanded;
@property(readonly, nonatomic) NSMutableArray *accountsEntries; // @synthesize accountsEntries=_accountsEntries;
@property(readonly, nonatomic) NSMutableSet *otherPersonalAccountsList; // @synthesize otherPersonalAccountsList=_otherPersonalAccountsList;
@property(readonly, nonatomic) NSArray *delegateAccountsList; // @synthesize delegateAccountsList=_delegateAccountsList;
@property(retain, nonatomic) T1AccountListEntry *activeOwner; // @synthesize activeOwner=_activeOwner;
@property(retain, nonatomic) T1AccountListEntry *activeAccount; // @synthesize activeAccount=_activeAccount;
- (id)getOtherPersonalAccountsHeader:(_Bool)arg1;
- (id)getDelegateAccountsHeader:(_Bool)arg1;
- (id)initFromAccounts:(id)arg1 badgingDataSouce:(id)arg2 isDelegateAccountsExpanded:(_Bool)arg3 isOtherPersonalAccountsExpanded:(_Bool)arg4;

@end

