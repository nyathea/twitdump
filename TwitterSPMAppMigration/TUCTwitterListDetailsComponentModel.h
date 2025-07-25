//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString, TFSTwitterUser, TUCDestinationModel;

@interface TUCTwitterListDetailsComponentModel : NSObject
{
    TUCDestinationModel *_destination;
    NSString *_name;
    NSNumber *_memberCount;
    TFSTwitterUser *_user;
}

+ (id)componentWithJSON:(id)arg1 componentCreationContext:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) TFSTwitterUser *user; // @synthesize user=_user;
@property(retain, nonatomic) NSNumber *memberCount; // @synthesize memberCount=_memberCount;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) TUCDestinationModel *destination; // @synthesize destination=_destination;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned long long type;
- (id)initWithDestination:(id)arg1 name:(id)arg2 memberCount:(id)arg3 user:(id)arg4;
@property(readonly, nonatomic) NSArray *allUsers;
@property(readonly, nonatomic) NSArray *axDestinations;
- (id)withDestinationTransform:(CDUnknownBlockType)arg1;
- (id)withPromotedContent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

