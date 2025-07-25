//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNComposableViewAdapter.h>

@interface T1StandardStatusTranslateAdapter : TFNComposableViewAdapter
{
    unsigned long long _contextDisplayType;
}

@property(nonatomic) unsigned long long contextDisplayType; // @synthesize contextDisplayType=_contextDisplayType;
- (void)accessibilityPerformTapActionInView:(id)arg1;
- (void)_t1_updateManualTranslateButtonForViewModel:(id)arg1 forView:(id)arg2;
- (id)_t1_manualTranslateLayoutStateForViewModel:(id)arg1 layoutMetrics:(id)arg2;
- (void)_t1_handleEventType:(id)arg1 sender:(id)arg2;
- (void)view:(id)arg1 willMoveToHostView:(id)arg2;
- (void)viewModel:(id)arg1 didUpdateWithInfo:(id)arg2 forView:(id)arg3;
- (void)setViewModel:(id)arg1 forView:(id)arg2;
- (_Bool)isLayoutState:(id)arg1 validForViewModel:(id)arg2 layoutMetrics:(id)arg3;
- (id)layoutStateForViewModel:(id)arg1 layoutMetrics:(id)arg2;
- (_Bool)shouldBeVisibleForViewModel:(id)arg1;
- (id)initializeView;
- (id)initWithViewIdentifier:(long long)arg1 translationContextDisplayType:(unsigned long long)arg2;

@end

