//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PTVWeakSet : NSObject
{
    NSMutableArray *_members;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *members; // @synthesize members=_members;
- (id)indexesOfMembersToCompact;
- (void)compact;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (void)enumerateMembers:(CDUnknownBlockType)arg1;
- (_Bool)isEmpty;
- (id)indexesOfObject:(id)arg1;
- (_Bool)containsObject:(id)arg1;
- (id)init;

@end

