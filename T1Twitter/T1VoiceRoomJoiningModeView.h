//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIStackView.h>

@class NSString, T1VoiceRoomJoiningModeSelectionView, UILabel, UISwitch, UIView;
@protocol TASSpaceModel;

@interface T1VoiceRoomJoiningModeView : UIStackView
{
    id <TASSpaceModel> _spaceModel;
    UIView *_incognitoView;
    UILabel *_incognitoLabel;
    UISwitch *_incognitoSwitch;
    UIView *_speakerOrListenerView;
    UILabel *_titleLabel;
    T1VoiceRoomJoiningModeSelectionView *_joinAsListenerSelectionView;
    T1VoiceRoomJoiningModeSelectionView *_joinAsSpeakerSelectionView;
}

+ (_Bool)hasAutomaticJoiningAsSpeakerJoinModeWithSpaceModel:(id)arg1;
+ (_Bool)hasIcognitoJoinModeWithSpaceModel:(id)arg1;
+ (_Bool)hasJoinModeWithSpaceModel:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) T1VoiceRoomJoiningModeSelectionView *joinAsSpeakerSelectionView; // @synthesize joinAsSpeakerSelectionView=_joinAsSpeakerSelectionView;
@property(retain, nonatomic) T1VoiceRoomJoiningModeSelectionView *joinAsListenerSelectionView; // @synthesize joinAsListenerSelectionView=_joinAsListenerSelectionView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *speakerOrListenerView; // @synthesize speakerOrListenerView=_speakerOrListenerView;
@property(retain, nonatomic) UISwitch *incognitoSwitch; // @synthesize incognitoSwitch=_incognitoSwitch;
@property(retain, nonatomic) UILabel *incognitoLabel; // @synthesize incognitoLabel=_incognitoLabel;
@property(retain, nonatomic) UIView *incognitoView; // @synthesize incognitoView=_incognitoView;
@property(retain, nonatomic) id <TASSpaceModel> spaceModel; // @synthesize spaceModel=_spaceModel;
- (void)_t1_logClickActionOnElement:(id)arg1;
- (void)joiningModeSelectionViewDidTap:(id)arg1;
- (void)incognitoSwitchValueChanged:(id)arg1;
- (void)_t1_updateSpaceModelState;
- (void)spaceModel:(id)arg1 didUpdateAutomaticJoiningAsSpeakerStatus:(long long)arg2;
- (void)spaceModel:(id)arg1 didUpdateIsIncognito:(_Bool)arg2;
- (void)spaceModel:(id)arg1 didUpdateSettings:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

