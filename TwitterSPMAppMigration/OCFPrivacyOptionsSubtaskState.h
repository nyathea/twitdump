//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface OCFPrivacyOptionsSubtaskState
{
    _Bool _discoverableByEmail;
    _Bool _discoverableByPhone;
}

@property(nonatomic) _Bool discoverableByPhone; // @synthesize discoverableByPhone=_discoverableByPhone;
@property(nonatomic) _Bool discoverableByEmail; // @synthesize discoverableByEmail=_discoverableByEmail;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addStateToJSONDictionary:(id)arg1;

@end

