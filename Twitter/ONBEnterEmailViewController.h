//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol ONBEnterEmailViewControllerDelegate;

@interface ONBEnterEmailViewController
{
    id <ONBEnterEmailViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)private_updateSectionsWithAdditionalSections:(id)arg1;
- (void)submit;
- (void)abandon;
- (id)initWithAccount:(id)arg1 componentsViewModel:(id)arg2 hintText:(id)arg3 discoverabilitySetting:(id)arg4 activeRanges:(id)arg5 delegate:(id)arg6;

@end

