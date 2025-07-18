//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TFNDirectMessageEntriesResponse, TFNDirectMessageTimelineCursor;

@interface TFNDirectMessageInboxPageResponse : NSObject
{
    TFNDirectMessageTimelineCursor *_cursor;
    TFNDirectMessageEntriesResponse *_entriesResponse;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TFNDirectMessageEntriesResponse *entriesResponse; // @synthesize entriesResponse=_entriesResponse;
@property(readonly, nonatomic) TFNDirectMessageTimelineCursor *cursor; // @synthesize cursor=_cursor;
- (id)initWithJSONDictionary:(id)arg1 userCache:(id)arg2 filterNSFW:(_Bool)arg3;
- (id)init;

@end

