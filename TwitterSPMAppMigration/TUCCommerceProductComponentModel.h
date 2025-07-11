//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, TFSTwitterCommerceItem, TFSTwitterUser, TUCDestinationModel;

@interface TUCCommerceProductComponentModel : NSObject
{
    _Bool _isInvalid;
    TUCDestinationModel *_destination;
    TFSTwitterCommerceItem *_commerceItem;
    TFSTwitterUser *_merchant;
    NSString *_style;
}

+ (id)componentWithJSON:(id)arg1 componentCreationContext:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isInvalid; // @synthesize isInvalid=_isInvalid;
@property(readonly, nonatomic) NSString *style; // @synthesize style=_style;
@property(readonly, nonatomic) TFSTwitterUser *merchant; // @synthesize merchant=_merchant;
@property(readonly, nonatomic) TFSTwitterCommerceItem *commerceItem; // @synthesize commerceItem=_commerceItem;
@property(readonly, nonatomic) TUCDestinationModel *destination; // @synthesize destination=_destination;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSDictionary *scribeParameters;
@property(readonly, nonatomic) NSArray *axDestinations;
- (id)withDestinationTransform:(CDUnknownBlockType)arg1;
- (id)withPromotedContent:(id)arg1;
@property(readonly, nonatomic) unsigned long long type;
- (id)initAsInvalidProduct;
- (id)initWithDestination:(id)arg1 commerceItem:(id)arg2 merchant:(id)arg3 style:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

