//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface OCFCondition : NSObject
{
    NSString *_identifier;
}

+ (id)conditionDataKey;
+ (id)conditionTypeKey;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)evaluateWithComponents:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 identifier:(id)arg2 error:(id *)arg3;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

