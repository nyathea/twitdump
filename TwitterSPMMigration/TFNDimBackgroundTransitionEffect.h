//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIView;

@interface TFNDimBackgroundTransitionEffect : NSObject
{
    UIView *_backgroundView;
    UIView *_presentingView;
    double _transitionPercentComplete;
    long long _effectStyle;
}

- (void).cxx_destruct;
@property(nonatomic) long long effectStyle; // @synthesize effectStyle=_effectStyle;
@property(nonatomic) double transitionPercentComplete; // @synthesize transitionPercentComplete=_transitionPercentComplete;
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) UIView *presentingView; // @synthesize presentingView=_presentingView;
- (void)dealloc;
- (id)init;
- (id)initWithPresentingView:(id)arg1;
- (id)initWithPresentingViewController:(id)arg1;

@end

