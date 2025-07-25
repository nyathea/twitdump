//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNLegacyForm.h>

@class NSArray, NSString, TFNLegacyFormBooleanItem, TFNLegacyFormField;

@interface ONBEnterPhoneNumberForm : TFNLegacyForm
{
    _Bool _discoverabilitySettingsValue;
    NSString *_hintText;
    NSString *_defaultCountryCode;
    NSString *_discoverabilitySettingsTitle;
    NSArray *_countryCodes;
    NSArray *_activeRanges;
    CDUnknownBlockType _activeRangeTapAction;
    TFNLegacyFormField *_countryCodeField;
    TFNLegacyFormField *_phoneNumberField;
    TFNLegacyFormBooleanItem *_discoverabilityItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TFNLegacyFormBooleanItem *discoverabilityItem; // @synthesize discoverabilityItem=_discoverabilityItem;
@property(retain, nonatomic) TFNLegacyFormField *phoneNumberField; // @synthesize phoneNumberField=_phoneNumberField;
@property(retain, nonatomic) TFNLegacyFormField *countryCodeField; // @synthesize countryCodeField=_countryCodeField;
- (id)private_nameForCountryChoice:(id)arg1;
- (void)private_countryCodeDidUpdateWithNotification:(id)arg1;
- (void)private_updatePhoneNumberFieldFormatterForCountryCode:(id)arg1;
- (id)sections;
@property(readonly, nonatomic) _Bool discoverabilitySettingsValue;
@property(readonly, nonatomic) NSString *countryCode;
@property(readonly, nonatomic) NSString *phoneNumber;
- (id)initWithHintText:(id)arg1 countryCodes:(id)arg2 defaultCountryCode:(id)arg3 discoverabilitySettingsTitle:(id)arg4 discoverabilitySettingsValue:(_Bool)arg5 activeRanges:(id)arg6 activeRangeTapAction:(CDUnknownBlockType)arg7;

@end

