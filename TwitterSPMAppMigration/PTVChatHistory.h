//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface PTVChatHistory : NSObject
{
    NSArray *_messages;
    NSString *_cursor;
}

+ (id)historyFromDict:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *cursor; // @synthesize cursor=_cursor;
@property(readonly, nonatomic) NSArray *messages; // @synthesize messages=_messages;
- (id)initWithMessages:(id)arg1 cursor:(id)arg2;

@end

