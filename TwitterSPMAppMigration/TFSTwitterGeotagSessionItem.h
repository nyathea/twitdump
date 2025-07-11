//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, TFSTwitterPlace;

@interface TFSTwitterGeotagSessionItem : NSObject
{
    _Bool _isAutotag;
    TFSTwitterPlace *_place;
    long long _rank;
    unsigned long long _offset;
    NSString *_searchQuery;
    NSString *_timestamp;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *searchQuery; // @synthesize searchQuery=_searchQuery;
@property(nonatomic) _Bool isAutotag; // @synthesize isAutotag=_isAutotag;
@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(nonatomic) long long rank; // @synthesize rank=_rank;
@property(retain, nonatomic) TFSTwitterPlace *place; // @synthesize place=_place;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *scribeItemImpressionID;
@property(readonly, copy, nonatomic) NSDictionary *scribeItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned long long isCurrentlyFirstImpression;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,N

@property(nonatomic) unsigned long long isDuplicateContentIDInstance;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,N

@property(readonly, copy, nonatomic) NSString *scribeComponent;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N

@property(readonly, copy, nonatomic) NSString *scribeElement;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N

@property(readonly, copy, nonatomic) NSString *scribeItemContentID;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N

@property(readonly, copy, nonatomic) NSString *scribeItemFirstImpressionID;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N

@property(readonly) Class superclass;

@end

