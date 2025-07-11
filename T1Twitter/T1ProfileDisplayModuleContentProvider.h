//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class T1ProfileContentSubheaderEntry, T1ProfileModulesContainerViewController;

@interface T1ProfileDisplayModuleContentProvider
{
    T1ProfileContentSubheaderEntry *_profileModuleSubheaderEntry;
    T1ProfileModulesContainerViewController *_profileModulesContainerViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak T1ProfileModulesContainerViewController *profileModulesContainerViewController; // @synthesize profileModulesContainerViewController=_profileModulesContainerViewController;
@property(retain, nonatomic) T1ProfileContentSubheaderEntry *profileModuleSubheaderEntry; // @synthesize profileModuleSubheaderEntry=_profileModuleSubheaderEntry;
- (_Bool)_isProfileModulesValid;
- (id)_createProfileModulesContainerViewController;
- (void)removeCachedViewControllersIfNeeded;
- (void)profileViewModelDidInvalidateWithReason:(long long)arg1;
- (id)contentSubheaderEntries;

@end

