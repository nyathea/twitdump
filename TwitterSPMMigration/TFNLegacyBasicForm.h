//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface TFNLegacyBasicForm
{
    NSArray *_formFields;
}

+ (id)_createFormFieldWithTitle:(id)arg1 hintText:(id)arg2 userInput:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *formFields; // @synthesize formFields=_formFields;
- (id)sections;
- (id)userInputForFormFieldAtIndex:(unsigned long long)arg1;
- (id)initWithTitles:(id)arg1 hintTexts:(id)arg2 userInputs:(id)arg3;

@end

