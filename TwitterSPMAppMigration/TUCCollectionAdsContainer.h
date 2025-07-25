//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, TUCDisplayOptions, TUCMediaComponentModel;

@interface TUCCollectionAdsContainer : NSObject
{
    TUCDisplayOptions *displayOptions;
    NSArray *_containers;
    NSString *_unifiedCardUnifiedID;
    long long _interactionType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long interactionType; // @synthesize interactionType=_interactionType;
@property(readonly, nonatomic) NSString *unifiedCardUnifiedID; // @synthesize unifiedCardUnifiedID=_unifiedCardUnifiedID;
@property(readonly, nonatomic) NSArray *containers; // @synthesize containers=_containers;
@property(readonly, nonatomic) TUCDisplayOptions *displayOptions; // @synthesize displayOptions;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) TUCMediaComponentModel *firstVideoComponent;
@property(readonly, nonatomic) _Bool hasCarousel;
- (id)withRemovedComponentsOfType:(unsigned long long)arg1;
- (id)withComponentsTransform:(CDUnknownBlockType)arg1;
- (id)withPromotedContent:(id)arg1;
- (id)allComponents;
- (id)init;
- (id)initWithContainers:(id)arg1 unifiedCardUnifiedID:(id)arg2 interactionType:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

