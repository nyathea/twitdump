//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC14T1TwitterSwift30SettingsChangeCountryPresenter : NSObject
{
    MISSING_TYPE *value;
    MISSING_TYPE *availableValues;
    MISSING_TYPE *account;
    MISSING_TYPE *settingsOnboardingFlowPresenter;
    MISSING_TYPE *formatter;
}

- (void).cxx_destruct;
- (id)init;
- (void)pickerViewController:(id)arg1 didDeselectValue:(id)arg2 inSectionAtIndex:(unsigned long long)arg3 willConfirm:(_Bool)arg4 willDismiss:(_Bool)arg5;
- (void)pickerViewController:(id)arg1 didPickValue:(id)arg2 inSectionAtIndex:(unsigned long long)arg3 willConfirm:(_Bool)arg4 willDismiss:(_Bool)arg5;
- (id)initiallyPickedValueForPicker:(id)arg1;
- (id)valuesForPicker:(id)arg1;
- (void)presentWithPresentingController:(id)arg1;

@end

