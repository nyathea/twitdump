//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSString, TFSScribePrimaryKey;

@interface TFSScribeImpressionRecord : NSObject
{
    NSString *_group;
    NSDate *_timestamp;
    NSData *_content;
    NSString *_eventName;
    NSString *_query;
    TFSScribePrimaryKey *_key;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TFSScribePrimaryKey *key; // @synthesize key=_key;
@property(readonly, nonatomic) NSString *query; // @synthesize query=_query;
@property(readonly, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(readonly, nonatomic) NSData *content; // @synthesize content=_content;
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) NSString *group; // @synthesize group=_group;
- (id)initWithGroup:(id)arg1 statement:(struct sqlite3_stmt *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

