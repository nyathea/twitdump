//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, OCFComponentCollection, OCFHeader, OCFNavigationLink;

@interface OCFSubtask : NSObject
{
    _Bool _suppressClientEvents;
    NSString *_subtaskID;
    long long _backNavigationType;
    OCFNavigationLink *_backNavigationLink;
    OCFComponentCollection *_componentCollection;
    OCFHeader *_header;
    NSString *_typeName;
    NSArray *_callbacks;
}

+ (long long)version;
+ (id)typeNames;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *callbacks; // @synthesize callbacks=_callbacks;
@property(readonly, nonatomic) _Bool suppressClientEvents; // @synthesize suppressClientEvents=_suppressClientEvents;
@property(readonly, nonatomic) NSString *typeName; // @synthesize typeName=_typeName;
@property(readonly, nonatomic) OCFHeader *header; // @synthesize header=_header;
@property(readonly, nonatomic) OCFComponentCollection *componentCollection; // @synthesize componentCollection=_componentCollection;
@property(readonly, nonatomic) OCFNavigationLink *backNavigationLink; // @synthesize backNavigationLink=_backNavigationLink;
@property(readonly, nonatomic) long long backNavigationType; // @synthesize backNavigationType=_backNavigationType;
@property(readonly, nonatomic) NSString *subtaskID; // @synthesize subtaskID=_subtaskID;
@property(readonly, nonatomic) long long preferredPresentationType;
- (id)initWithJSONDictionary:(id)arg1 subtaskID:(id)arg2 typeName:(id)arg3 backNavigationType:(long long)arg4 backNavigationLink:(id)arg5 error:(id *)arg6;

@end

