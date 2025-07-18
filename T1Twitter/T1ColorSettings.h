//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface T1ColorSettings : NSObject
{
}

+ (void)_t1_updateOverrideUserInterfaceStyle;
+ (void)_t1_applyPrimaryColorOption;
+ (long long)primaryColorOption;
+ (void)setPrimaryColorOption:(long long)arg1;
+ (void)applyDefaultDarkColorPalette;
+ (void)transitionToDarkMode:(_Bool)arg1 animated:(_Bool)arg2;
+ (void)traitCollectionDidChange;
+ (void)toggleDarkMode;
+ (_Bool)isDarkModeOn;
+ (void)setDarkModeStatus:(long long)arg1;
+ (long long)darkModeStatus;
+ (void)applicationDidLaunch;

@end

