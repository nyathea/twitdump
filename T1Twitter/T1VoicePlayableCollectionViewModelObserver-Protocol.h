//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TAVPlaybackState;
@protocol T1VoicePlayableViewModel, TCRVoiceViewModel><T1VoicePlayableViewModel;

@protocol T1VoicePlayableCollectionViewModelObserver
- (void)voicePlayableViewModel:(id <T1VoicePlayableViewModel>)arg1 didUpdateClip:(id <TCRVoiceViewModel><T1VoicePlayableViewModel>)arg2;
- (void)voicePlayableViewModel:(id <T1VoicePlayableViewModel>)arg1 didUpdatePlaybackState:(TAVPlaybackState *)arg2;
@end

