//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexPath, NSString, TFNMenuCompatibleControl, UIScrollView, UIView;
@protocol TFNDataView, TFNDataViewCell;

@interface TFNDataViewCellHelper : NSObject
{
    UIView<TFNDataViewCell> *_cell;
    _Bool _initialized;
    _Bool _hasSentDidFirstDisplay;
    TFNMenuCompatibleControl *_menuControl;
    UIScrollView<TFNDataView> *_dataView;
    NSIndexPath *_currentIndexPath;
    NSIndexPath *_preDisplayIndexPath;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSIndexPath *preDisplayIndexPath; // @synthesize preDisplayIndexPath=_preDisplayIndexPath;
@property(retain, nonatomic) NSIndexPath *currentIndexPath; // @synthesize currentIndexPath=_currentIndexPath;
@property(readonly, nonatomic) __weak UIScrollView<TFNDataView> *dataView; // @synthesize dataView=_dataView;
- (void)_tfn_populateMenuWithTitle:(id)arg1 actionItems:(id)arg2;
- (void)populateMenuWithActionItems:(id)arg1;
- (void)populateMenuWithTitle:(id)arg1 actionItems:(id)arg2;
@property(readonly, nonatomic) _Bool isPreparedToDisplayMenuOnPrimaryAction;
- (void)prepareToDisplayMenuOnPrimaryAction;
- (id)keyCommands;
- (id)layoutMetricsForCurrentIndexPath;
- (void)didKeyboardSelectInDataViewController:(id)arg1 atIndexPath:(id)arg2;
- (void)cleanup;
- (void)didEndScrollingInDataViewController:(id)arg1;
- (void)didEndDisplayingInDataViewController:(id)arg1 reason:(unsigned long long)arg2;
- (void)didDisplayWithZeroVisibilityInDataViewController:(id)arg1 atIndexPath:(id)arg2;
- (void)didDisplayInDataViewController:(id)arg1 atIndexPath:(id)arg2 visibleIntersection:(struct CGRect)arg3;
- (void)didFirstDisplayInDataViewController:(id)arg1;
- (void)willDisplayInDataViewController:(id)arg1 atIndexPath:(id)arg2;
- (void)prepareForReuse;
- (void)prepareForUseInDataView:(id)arg1 atIndexPath:(id)arg2;
- (id)initWithDataViewCell:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) CDUnknownBlockType willDisplayMenuOnPrimaryActionBlock;
// Preceding property had unknown attributes: ?
// Original attribute string: T@?,?,R,C,N


@end

