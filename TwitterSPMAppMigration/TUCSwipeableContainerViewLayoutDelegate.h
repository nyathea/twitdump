//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TUCSwipeableContainerViewLayoutDelegate : NSObject
{
}

- (double)_tuc_childWidthWithLayoutContext:(id)arg1;
- (id)layoutStateForUnifiedCard:(id)arg1 container:(id)arg2 componentViewRegistry:(id)arg3 layoutContext:(id)arg4 cardWidth:(double)arg5 previousLayoutState:(id)arg6;
- (_Bool)isLayoutState:(id)arg1 validForUnifiedCard:(id)arg2 container:(id)arg3 componentViewRegistry:(id)arg4 cardWidth:(double)arg5 layoutContext:(id)arg6;
- (void)layoutSubviewsForLayoutableView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

