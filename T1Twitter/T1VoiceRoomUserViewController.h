//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNItemsDataViewController.h>

@class NSString, T1DirectMessageParticipantValidator, T1UserOrRecommendationTableRowAdapter, T1VoiceRoomUserPrivateEmojisView, TFNTwitterUser, TFNViewDataViewAdapter;
@protocol TASSpaceModel, TASUserModel;

@interface T1VoiceRoomUserViewController : TFNItemsDataViewController
{
    id <TASSpaceModel> _spaceModel;
    id <TASUserModel> _userModel;
    TFNTwitterUser *_user;
    T1UserOrRecommendationTableRowAdapter *_userViewAdapter;
    T1VoiceRoomUserPrivateEmojisView *_emojisView;
    TFNViewDataViewAdapter *_emojisViewAdapter;
    T1DirectMessageParticipantValidator *_dmParticipantValidator;
    unsigned long long _dmParticipantValidatorResult;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long dmParticipantValidatorResult; // @synthesize dmParticipantValidatorResult=_dmParticipantValidatorResult;
@property(retain, nonatomic) T1DirectMessageParticipantValidator *dmParticipantValidator; // @synthesize dmParticipantValidator=_dmParticipantValidator;
@property(retain, nonatomic) TFNViewDataViewAdapter *emojisViewAdapter; // @synthesize emojisViewAdapter=_emojisViewAdapter;
@property(retain, nonatomic) T1VoiceRoomUserPrivateEmojisView *emojisView; // @synthesize emojisView=_emojisView;
@property(retain, nonatomic) T1UserOrRecommendationTableRowAdapter *userViewAdapter; // @synthesize userViewAdapter=_userViewAdapter;
@property(retain, nonatomic) TFNTwitterUser *user; // @synthesize user=_user;
@property(retain, nonatomic) id <TASUserModel> userModel; // @synthesize userModel=_userModel;
@property(retain, nonatomic) id <TASSpaceModel> spaceModel; // @synthesize spaceModel=_spaceModel;
- (void)cohostInviteViewController:(id)arg1 didCancelInviteForUsers:(id)arg2;
- (void)cohostInviteViewController:(id)arg1 didConfirmInviteForUsers:(id)arg2;
- (id)scribePageForToaster:(id)arg1;
- (void)_t1_logClickActionOnElement:(id)arg1 inComponent:(id)arg2;
- (id)scribeImpressionParameters;
- (id)scribeParameters;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (void)handleUserActionReportWithUser:(id)arg1 withAddToDenylist:(_Bool)arg2;
- (void)handleUserActionUnblockWithUser:(id)arg1;
- (void)handleUserActionBlockWithUser:(id)arg1 withAddToDenylist:(_Bool)arg2;
- (void)handleUserActionRemoveFromDenylistWithUser:(id)arg1;
- (void)handleUserActionAddToDenylistWithUser:(id)arg1;
- (void)handleUserActionMuteSpeakerWithUser:(id)arg1;
- (void)handleUserActionInviteAsSpeakerWithUser:(id)arg1;
- (void)handleUserActionRemoveFromSpeakersWithUser:(id)arg1;
- (void)handleUserActionAddAsSpeakerWithUser:(id)arg1;
- (void)handleUserActionRemoveAsAdminWithUser:(id)arg1;
- (void)handleUserActionCancelAsAdminWithUser:(id)arg1;
- (void)handleUserActionInviteAsAdminWithUser:(id)arg1;
- (void)handleUserActionSwitchToListeningWithUser:(id)arg1;
- (void)_t1_sendDM;
- (void)_t1_presentProfile;
- (id)_t1_actionItems;
- (void)menuActionSheetAdapter:(id)arg1 didSelectActionItem:(id)arg2 atIndexPath:(id)arg3;
- (double)preferredHeightForModalSheetViewController:(id)arg1 modalContentViewVisibleEdgeInsets:(struct UIEdgeInsets)arg2;
- (void)voiceRoomUserPrivateEmojisView:(id)arg1 didTapEmoji:(id)arg2;
- (void)didSelectItem:(id)arg1 atIndexPath:(id)arg2;
- (void)update:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithSpaceModel:(id)arg1 canonicalUser:(id)arg2;
- (id)initWithSpaceModel:(id)arg1 userModel:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

