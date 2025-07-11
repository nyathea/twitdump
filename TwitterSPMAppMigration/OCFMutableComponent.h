//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSString, OCFMutableBooleanComponentData, OCFMutableListComponentData, OCFMutableSettingsGroupComponentData, OCFMutableTextFieldComponentData;
@protocol OCFComponentData;

@interface OCFMutableComponent
{
    NSObject<OCFComponentData> *_mutableData;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)numberValue;
- (id)stringValue;
@property(retain, nonatomic) NSObject<OCFComponentData> *data; // @synthesize data=_mutableData;
@property(retain, nonatomic) NSString *identifier; // @dynamic identifier;
- (id)initWithComponent:(id)arg1;
@property(readonly, nonatomic) OCFMutableBooleanComponentData *booleanData;
@property(readonly, nonatomic) OCFMutableListComponentData *listData;
@property(readonly, nonatomic) OCFMutableSettingsGroupComponentData *settingsGroupData;
@property(readonly, nonatomic) OCFMutableTextFieldComponentData *textFieldData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

