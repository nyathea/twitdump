//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterAppSPMMigration/TUCComponentViewRegistry-Protocol.h>

@class NSArray, TFNLayoutableView, TUCUnifiedCard;
@protocol TUCComponentContainer, TUCComponentContainerView, TUCComponentContainerViewLayoutDelegate, TUCComponentViewEventDelegate;

@protocol TUCViewRegistryProtocol <TUCComponentViewRegistry>
- (id <TUCComponentContainerViewLayoutDelegate>)layoutDelegateForContainer:(id <TUCComponentContainer>)arg1;
- (TFNLayoutableView<TUCComponentContainerView> *)viewForContainer:(id <TUCComponentContainer>)arg1 unifiedCard:(TUCUnifiedCard *)arg2 reusableViews:(NSArray *)arg3 eventDelegate:(id <TUCComponentViewEventDelegate>)arg4;
@end

