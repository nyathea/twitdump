//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterAppSPMMigration/TUICardViewLayoutState.h>

@class T1BroadcastCardViewModel, T1BroadcastContainerViewLayoutState;

@interface T1BroadcastCardViewLayoutState : TUICardViewLayoutState
{
    T1BroadcastCardViewModel *_viewModel;
    T1BroadcastContainerViewLayoutState *_broadcastContainerViewLayoutState;
    struct CGRect _backgroundViewFrame;
    struct CGRect _broadcastContainerViewFrame;
    struct CGRect _thumbnailImageViewFrame;
    struct CGRect _scheduledTimeViewFrame;
    struct CGRect _highlightViewFrame;
    struct CGRect _detailsViewFrame;
    struct CGRect _errorViewFrame;
    struct CGRect _detailsSeparatorFrame;
    struct CGRect _broadcastContentViewFrame;
    struct CGRect _broadcastCTAButtonFrame;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect broadcastCTAButtonFrame; // @synthesize broadcastCTAButtonFrame=_broadcastCTAButtonFrame;
@property(nonatomic) struct CGRect broadcastContentViewFrame; // @synthesize broadcastContentViewFrame=_broadcastContentViewFrame;
@property(nonatomic) struct CGRect detailsSeparatorFrame; // @synthesize detailsSeparatorFrame=_detailsSeparatorFrame;
@property(nonatomic) struct CGRect errorViewFrame; // @synthesize errorViewFrame=_errorViewFrame;
@property(nonatomic) struct CGRect detailsViewFrame; // @synthesize detailsViewFrame=_detailsViewFrame;
@property(nonatomic) struct CGRect highlightViewFrame; // @synthesize highlightViewFrame=_highlightViewFrame;
@property(nonatomic) struct CGRect scheduledTimeViewFrame; // @synthesize scheduledTimeViewFrame=_scheduledTimeViewFrame;
@property(nonatomic) struct CGRect thumbnailImageViewFrame; // @synthesize thumbnailImageViewFrame=_thumbnailImageViewFrame;
@property(nonatomic) struct CGRect broadcastContainerViewFrame; // @synthesize broadcastContainerViewFrame=_broadcastContainerViewFrame;
@property(nonatomic) struct CGRect backgroundViewFrame; // @synthesize backgroundViewFrame=_backgroundViewFrame;
@property(retain, nonatomic) T1BroadcastContainerViewLayoutState *broadcastContainerViewLayoutState; // @synthesize broadcastContainerViewLayoutState=_broadcastContainerViewLayoutState;
@property(retain, nonatomic) T1BroadcastCardViewModel *viewModel; // @synthesize viewModel=_viewModel;

@end

