//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TFNTwitterSuggestsInfo : NSObject
{
    NSString *_controllerData;
    NSString *_scribeComponent;
    NSString *_scribeElement;
    NSString *_sourceData;
    NSString *_suggestionType;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *suggestionType; // @synthesize suggestionType=_suggestionType;
@property(readonly, copy, nonatomic) NSString *sourceData; // @synthesize sourceData=_sourceData;
@property(readonly, copy, nonatomic) NSString *scribeElement; // @synthesize scribeElement=_scribeElement;
@property(readonly, copy, nonatomic) NSString *scribeComponent; // @synthesize scribeComponent=_scribeComponent;
@property(readonly, copy, nonatomic) NSString *controllerData; // @synthesize controllerData=_controllerData;
- (id)description;
@property(readonly, nonatomic) _Bool isSuggestionTypeRanked;
@property(readonly, nonatomic) _Bool isSuggestionTypeRecommended;
- (id)scribeSuggestionDetails;
- (id)initWithControllerData:(id)arg1 scribeComponent:(id)arg2 scribeElement:(id)arg3 sourceData:(id)arg4 suggestionType:(id)arg5;

@end

