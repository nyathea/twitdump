//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNComposableViewLayoutState.h>

@class NSString, TFNAttributedActiveTextModel, TFSSpannedString;

@interface T1StandardStatusConversationContextViewLayoutState : TFNComposableViewLayoutState
{
    _Bool _activeTextModelIsTappable;
    _Bool _conversationContextViewIsTappable;
    TFSSpannedString *_spannedString;
    TFNAttributedActiveTextModel *_activeTextModel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool conversationContextViewIsTappable; // @synthesize conversationContextViewIsTappable=_conversationContextViewIsTappable;
@property(nonatomic) _Bool activeTextModelIsTappable; // @synthesize activeTextModelIsTappable=_activeTextModelIsTappable;
@property(retain, nonatomic) TFNAttributedActiveTextModel *activeTextModel; // @synthesize activeTextModel=_activeTextModel;
@property(retain, nonatomic) TFSSpannedString *spannedString; // @synthesize spannedString=_spannedString;
@property(readonly, nonatomic) struct CGRect conversationContextTextFrame;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

