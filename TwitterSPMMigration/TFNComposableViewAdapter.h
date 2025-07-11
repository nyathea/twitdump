//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, UIView;
@protocol TFNComposableViewHost;

@interface TFNComposableViewAdapter : NSObject
{
    long long _viewIdentifier;
    UIView<TFNComposableViewHost> *_hostView;
    NSArray *_hideWhenAnyVisible;
    NSArray *_showWhenAllVisible;
    NSArray *_showWhenAnyVisible;
    CDUnknownBlockType _maximumSizeBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType maximumSizeBlock; // @synthesize maximumSizeBlock=_maximumSizeBlock;
@property(copy, nonatomic) NSArray *showWhenAnyVisible; // @synthesize showWhenAnyVisible=_showWhenAnyVisible;
@property(copy, nonatomic) NSArray *showWhenAllVisible; // @synthesize showWhenAllVisible=_showWhenAllVisible;
@property(copy, nonatomic) NSArray *hideWhenAnyVisible; // @synthesize hideWhenAnyVisible=_hideWhenAnyVisible;
@property(nonatomic) __weak UIView<TFNComposableViewHost> *hostView; // @synthesize hostView=_hostView;
@property(readonly, nonatomic) long long viewIdentifier; // @synthesize viewIdentifier=_viewIdentifier;
- (_Bool)isAsyncViewInitializationEnabledForViewModel:(id)arg1;
- (_Bool)isLayoutState:(id)arg1 validForViewModel:(id)arg2 layoutMetrics:(id)arg3;
- (id)layoutStateForViewModel:(id)arg1 layoutMetrics:(id)arg2;
- (void)setLayoutState:(id)arg1 forView:(id)arg2;
- (void)viewModel:(id)arg1 didUpdateWithInfo:(id)arg2 forView:(id)arg3;
- (void)unsetViewModelForView:(id)arg1;
- (void)setViewModel:(id)arg1 forView:(id)arg2;
- (void)view:(id)arg1 willMoveToHostView:(id)arg2;
- (_Bool)deinitializeView:(id)arg1;
- (id)initializeView;
- (_Bool)isVisibleForViewModel:(id)arg1;
- (_Bool)shouldBeVisibleForViewModel:(id)arg1;
@property(readonly, nonatomic) id viewModel;
@property(readonly, nonatomic) UIView *view;
- (id)init;
- (id)initWithViewIdentifier:(long long)arg1;

@end

