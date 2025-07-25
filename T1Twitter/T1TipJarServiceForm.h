//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNLegacyForm.h>

@class NSString, T1TipJarService, TFNDataViewItem, TFNLegacyFormField;
@protocol T1TipJarServiceFormDelegate;

@interface T1TipJarServiceForm : TFNLegacyForm
{
    NSString *_currentHandle;
    TFNLegacyFormField *_usernameField;
    T1TipJarService *_service;
    TFNDataViewItem *_t1HandleExampleItem;
    id <T1TipJarServiceFormDelegate> _formDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <T1TipJarServiceFormDelegate> formDelegate; // @synthesize formDelegate=_formDelegate;
@property(readonly, nonatomic) TFNDataViewItem *t1HandleExampleItem; // @synthesize t1HandleExampleItem=_t1HandleExampleItem;
@property(readonly, nonatomic) T1TipJarService *service; // @synthesize service=_service;
@property(readonly, nonatomic) TFNLegacyFormField *usernameField; // @synthesize usernameField=_usernameField;
@property(readonly, nonatomic) NSString *currentHandle; // @synthesize currentHandle=_currentHandle;
@property(readonly, nonatomic) NSString *newValue;
- (_Bool)isSubmittable;
- (id)_t1_handleExample;
- (id)sections;
- (id)initWithTipJarService:(id)arg1 currentHandle:(id)arg2;

@end

