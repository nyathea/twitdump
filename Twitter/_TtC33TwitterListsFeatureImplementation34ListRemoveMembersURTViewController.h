//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNViewController.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC33TwitterListsFeatureImplementation34ListRemoveMembersURTViewController : TFNViewController
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *account;
    MISSING_TYPE *scribeContext;
    MISSING_TYPE *membersViewController;
    MISSING_TYPE *listID;
    MISSING_TYPE *mutationsManager;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (_Bool)actionControlProvider:(id)arg1 shouldSelectUserReference:(id)arg2;
- (void)actionControlProvider:(id)arg1 didDeselectUserReference:(id)arg2 actionControl:(id)arg3 scribeContext:(id)arg4;
- (void)actionControlProvider:(id)arg1 didSelectUserReference:(id)arg2 actionControl:(id)arg3 scribeContext:(id)arg4;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;

@end

