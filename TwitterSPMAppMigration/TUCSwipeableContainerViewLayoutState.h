//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, TUCLayoutContext;
@protocol TUCComponentContainer;

@interface TUCSwipeableContainerViewLayoutState : NSObject
{
    id <TUCComponentContainer> _container;
    TUCLayoutContext *_layoutContext;
    NSArray *_childContainerLayouts;
    struct CGSize _size;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) NSArray *childContainerLayouts; // @synthesize childContainerLayouts=_childContainerLayouts;
@property(retain, nonatomic) TUCLayoutContext *layoutContext; // @synthesize layoutContext=_layoutContext;
@property(readonly, nonatomic) id <TUCComponentContainer> container; // @synthesize container=_container;
- (id)initWithContainer:(id)arg1 layoutContext:(id)arg2 childContainerLayouts:(id)arg3 size:(struct CGSize)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

