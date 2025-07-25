//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, TFSTwitterUserReference, TUCDestinationModel, _TtC14TFSTwitterCore25TFSTwitterPromotedContent;

@interface TUCFollowButtonComponentModel : NSObject
{
    TUCDestinationModel *_destination;
    unsigned long long type;
    NSArray *allUsers;
    TFSTwitterUserReference *_userReference;
    _TtC14TFSTwitterCore25TFSTwitterPromotedContent *_promotedContent;
}

+ (id)componentWithJSON:(id)arg1 componentCreationContext:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) _TtC14TFSTwitterCore25TFSTwitterPromotedContent *promotedContent; // @synthesize promotedContent=_promotedContent;
@property(readonly, nonatomic) TFSTwitterUserReference *userReference; // @synthesize userReference=_userReference;
@property(readonly, nonatomic) NSArray *allUsers; // @synthesize allUsers;
@property(readonly, nonatomic) TUCDestinationModel *destination; // @synthesize destination=_destination;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)withDestinationTransform:(CDUnknownBlockType)arg1;
- (id)withPromotedContent:(id)arg1;
@property(readonly, nonatomic) NSArray *axDestinations;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type;
- (id)initWithUserReference:(id)arg1 promotedContent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

