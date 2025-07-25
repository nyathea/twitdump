//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;
@protocol UITableViewDelegate;

@interface TFNEstimatedRowHeightTableViewDelegateProxy : NSObject
{
    id <UITableViewDelegate> _delegate;
    _Bool _forwardScrollViewDidScroll;
    _Bool _isPerformingNonAnimatedEstimatedRowHeightScroll;
    NSMutableSet *_visibleCellsBeforeNonAnimatedEstimatedRowHeightScroll;
}

- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)scrollViewDidScrollProgrammatically:(id)arg1 animated:(_Bool)arg2;
- (void)scrollViewWillScrollProgrammatically:(id)arg1 animated:(_Bool)arg2;
- (id)init;
- (id)initWithTableViewDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

