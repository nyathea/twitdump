//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, TFSTwitterAccount;

@interface TFSAccountService : NSObject
{
    MISSING_TYPE *accountService;
}

- (void).cxx_destruct;
- (id)init;
- (void)makeFirstWithIdentifier:(id)arg1;
- (void)removeAccountWithIdentifier:(id)arg1;
- (void)addAccount:(id)arg1;
- (id)accountFor:(id)arg1;
@property(nonatomic, readonly) NSArray *accounts;
- (id)initWithAttributeStore:(id)arg1 credentialsStore:(id)arg2 accountCoding:(id)arg3;
@property(readonly, nonatomic) TFSTwitterAccount *activeAccount;

@end

