//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC33TwitterListsFeatureImplementation47ListUsersShoppingCartViewControllerStateManager : _TtCs12_SwiftObject
{
    MISSING_TYPE *listID;
    MISSING_TYPE *scribe;
    MISSING_TYPE *selectedUsers;
    MISSING_TYPE *excludedUserIDs;
    MISSING_TYPE *mutationsManager;
    MISSING_TYPE *accountID;
    MISSING_TYPE *delegate;
}

- (_Bool)actionControlProvider:(id)arg1 shouldSelectUserReference:(id)arg2;
- (void)actionControlProvider:(id)arg1 didDeselectUserReference:(id)arg2 actionControl:(id)arg3 scribeContext:(id)arg4;
- (void)actionControlProvider:(id)arg1 didSelectUserReference:(id)arg2 actionControl:(id)arg3 scribeContext:(id)arg4;

@end

