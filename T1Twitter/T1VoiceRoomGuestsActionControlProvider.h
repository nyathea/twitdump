//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol T1VoiceRoomGuestsActionControlProviderDelegate, TASSpaceModel;

@interface T1VoiceRoomGuestsActionControlProvider : NSObject
{
    CDUnknownBlockType _needsLayoutBlock;
    id <TASSpaceModel> _spaceModel;
    unsigned long long _filters;
    id <T1VoiceRoomGuestsActionControlProviderDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <T1VoiceRoomGuestsActionControlProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long filters; // @synthesize filters=_filters;
@property(retain, nonatomic) id <TASSpaceModel> spaceModel; // @synthesize spaceModel=_spaceModel;
@property(copy, nonatomic) CDUnknownBlockType needsLayoutBlock; // @synthesize needsLayoutBlock=_needsLayoutBlock;
- (void)_t1_handleTapEventOnActionControl:(id)arg1 withAction:(long long)arg2;
- (id)_t1_actionsWithUserReference:(id)arg1;
- (void)cleanupActionControl:(id)arg1;
- (void)updateActionControl:(id)arg1 viewModel:(id)arg2;
- (_Bool)shouldHideActionControl:(id)arg1;
- (struct CGSize)sizeForActionControlWithUser:(id)arg1;
- (id)actionControlForUserView:(id)arg1 withUpdateBlock:(CDUnknownBlockType)arg2;
- (id)initWithSpaceModel:(id)arg1 filters:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

