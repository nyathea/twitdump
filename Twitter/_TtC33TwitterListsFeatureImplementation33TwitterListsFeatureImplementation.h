//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC33TwitterListsFeatureImplementation33TwitterListsFeatureImplementation : NSObject
{
    MISSING_TYPE *identifier;
}

- (void).cxx_destruct;
- (id)init;
- (id)listManageMembersScrollingSegmentedViewControllerWithAccount:(id)arg1 listID:(long long)arg2 acceptCachedRepresentation:(_Bool)arg3 initiallySelectedTabIndex:(long long)arg4;
- (id)listDetailsViewControllerWithAccount:(id)arg1 listID:(long long)arg2 acceptCachedRepresentation:(_Bool)arg3;
- (id)listManagementContainerViewControllerWithAccount:(id)arg1;
- (id)listsDiscoveryContainerViewControllerWithAccount:(id)arg1;
- (id)createAndEditListViewControllerWithAccount:(id)arg1;
- (id)accountScopedFeatureWithAccountContext:(id)arg1;
- (void)removedAccountWithAccountID:(id)arg1;
@property(nonatomic, readonly) NSString *identifier;

@end

