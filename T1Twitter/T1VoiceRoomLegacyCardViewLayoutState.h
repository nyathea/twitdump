//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterAppSPMMigration/TUICardViewLayoutState.h>

@class UIFont;

@interface T1VoiceRoomLegacyCardViewLayoutState : TUICardViewLayoutState
{
    UIFont *_stateAndNameFont;
    UIFont *_titleFont;
    unsigned long long _titleNumberOfLines;
    UIFont *_durationAndParticipatedFont;
    long long _actionButtonSizeClass;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long actionButtonSizeClass; // @synthesize actionButtonSizeClass=_actionButtonSizeClass;
@property(readonly, nonatomic) UIFont *durationAndParticipatedFont; // @synthesize durationAndParticipatedFont=_durationAndParticipatedFont;
@property(readonly, nonatomic) unsigned long long titleNumberOfLines; // @synthesize titleNumberOfLines=_titleNumberOfLines;
@property(readonly, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(readonly, nonatomic) UIFont *stateAndNameFont; // @synthesize stateAndNameFont=_stateAndNameFont;
- (id)initWithLayoutMetrics:(id)arg1 displayMode:(long long)arg2;

@end

