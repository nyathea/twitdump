//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CADisplayLink, UILabel;
@protocol TAVPlayerView;

@interface TAVPlayerViewDebugOverlay : UIView
{
    _Bool _needsUpdate;
    id <TAVPlayerView> _playerView;
    UILabel *_summaryLabel;
    UILabel *_rpoLabel;
    CADisplayLink *_displayLink;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property(readonly, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(readonly, nonatomic) UILabel *rpoLabel; // @synthesize rpoLabel=_rpoLabel;
@property(readonly, nonatomic) UILabel *summaryLabel; // @synthesize summaryLabel=_summaryLabel;
@property(nonatomic) __weak id <TAVPlayerView> playerView; // @synthesize playerView=_playerView;
- (void)dealloc;
- (void)layoutSubviews;
- (void)observerDidAttachToPlayer:(id)arg1;
- (void)observerDidDetachFromPlayer:(id)arg1;
- (void)player:(id)arg1 didUpdatePlaybackState:(id)arg2;
- (void)private_updateSummaryLabel;
- (void)private_updateRPOLabel;
- (void)private_updateIfNeeded;
- (void)private_displayLinkTick:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

