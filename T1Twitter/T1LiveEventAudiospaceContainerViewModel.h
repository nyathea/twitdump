//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class T1LiveEvent, TFNTwitterAccount, TFSTwitterAudiospace;
@protocol TASSpaceModel, TFSTwitterCanonicalUser;

@interface T1LiveEventAudiospaceContainerViewModel : NSObject
{
    TFSTwitterAudiospace *_audiospace;
    id <TFSTwitterCanonicalUser> _creatorTwitterUser;
    T1LiveEvent *_liveEvent;
    TFNTwitterAccount *_account;
    id <TASSpaceModel> _spaceModel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <TASSpaceModel> spaceModel; // @synthesize spaceModel=_spaceModel;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) T1LiveEvent *liveEvent; // @synthesize liveEvent=_liveEvent;
@property(readonly, nonatomic) id <TFSTwitterCanonicalUser> creatorTwitterUser; // @synthesize creatorTwitterUser=_creatorTwitterUser;
@property(readonly, nonatomic) TFSTwitterAudiospace *audiospace; // @synthesize audiospace=_audiospace;
- (_Bool)isEqualToViewModel:(id)arg1;
- (id)initWithAudiospace:(id)arg1 creatorTwitterUser:(id)arg2 liveEvent:(id)arg3 account:(id)arg4;

@end

