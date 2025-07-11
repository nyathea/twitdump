//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;
@protocol TASSpacesContext, TASUserModel, _TtP10TAPAccount21TAPAccountPerspective_;

@interface T1StandardClipModel : NSObject
{
    MISSING_TYPE *context;
    MISSING_TYPE *voiceAccount;
    MISSING_TYPE *spaceID;
    MISSING_TYPE *clipID;
    MISSING_TYPE *clip;
    MISSING_TYPE *audioSpace;
    MISSING_TYPE *videoAccessManager;
    MISSING_TYPE *guestRoomController;
    MISSING_TYPE *twitterUsersByID;
    MISSING_TYPE *spaceUserModelsByID;
    MISSING_TYPE *$__lazy_storage_$_userLoader;
    MISSING_TYPE *transcription;
    MISSING_TYPE *tavPlaybackStartDate;
    MISSING_TYPE *playback;
    MISSING_TYPE *state;
    MISSING_TYPE *observers;
    MISSING_TYPE *defaultPlayAudio;
}

- (void).cxx_destruct;
- (id)init;
- (void)togglePlayAudio;
- (void)updatePlayAudio:(_Bool)arg1;
@property(nonatomic, readonly) _Bool playAudio;
@property(nonatomic, readonly) NSString *shareLink;
- (void)createClipWithCompletion:(CDUnknownBlockType)arg1;
- (void)seekTo:(double)arg1;
- (void)play;
- (void)shutdown;
- (void)pause;
- (id)spaceUserModelFrom:(id)arg1;
- (void)removeClipModelObserver:(id)arg1;
- (void)addClipModelObserver:(id)arg1;
- (id)talkingUsers;
@property(nonatomic, readonly) id <TASUserModel> creatorUserModel;
@property(nonatomic, readonly) _Bool isSpaceReplayAvailable;
@property(nonatomic, readonly) _Bool isSpaceLive;
@property(nonatomic, readonly) NSString *title;
@property(nonatomic, readonly) double duration;
@property(nonatomic, readonly) double endTime;
@property(nonatomic, readonly) double startTime;
@property(nonatomic, readonly) _Bool inCreation;
@property(nonatomic) long long state; // @synthesize state;
- (id)initWithContext:(id)arg1 clipID:(id)arg2 spaceID:(id)arg3;
- (id)initWithContext:(id)arg1 clipData:(id)arg2;
@property(nonatomic, copy) NSString *clipID;
@property(nonatomic, readonly) NSString *spaceID;
@property(nonatomic, readonly) id <_TtP10TAPAccount21TAPAccountPerspective_> account;
@property(nonatomic, readonly) id <TASSpacesContext> context; // @synthesize context;
- (void)participantsProvider:(id)arg1 didReloadAudiospace:(id)arg2;
- (void)guestRoomController:(id)arg1 didReceiveFinalTranscriptions:(id)arg2;
- (void)guestRoomController:(id)arg1 didReceiveTranscription:(id)arg2 isTranscriptionFinal:(_Bool)arg3 language:(id)arg4 fromUser:(id)arg5;
- (void)guestRoomControllerDidUpdateAudioLevels:(id)arg1;
- (void)guestRoomController:(id)arg1 didUpdatePlayback:(id)arg2;
- (void)guestRoomController:(id)arg1 didUpdateUsers:(id)arg2 totalUsersCount:(unsigned long long)arg3;
- (void)player:(id)arg1 didUpdatePlaybackState:(id)arg2;

@end

