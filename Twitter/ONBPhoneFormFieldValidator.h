//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface ONBPhoneFormFieldValidator
{
    NSString *_phoneNumberUnavailableMessage;
    NSString *_countryCode;
}

+ (CDUnknownBlockType)validationBlockWithCountryCode:(id)arg1 phoneNumberUnavailableMessage:(id)arg2;
+ (CDUnknownBlockType)validationBlockWithCountryCode:(id)arg1;
- (void).cxx_destruct;
- (id)remoteValidityCommandWithInput:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)remoteValidityWithResponseSuccess:(_Bool)arg1 object:(id)arg2 error:(id)arg3;
- (id)localValidityWithInput:(id)arg1;
- (id)initWithCountryCode:(id)arg1 phoneNumberUnavailableMessage:(id)arg2;

@end

